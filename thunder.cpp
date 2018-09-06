// thunder.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <comdef.h>
#include <atlbase.h>
#include <atlcom.h>
#include <objbase.h>
#include <time.h>
#include <string>
#include "thunderagent.h"

extern "C"
bool WINAPI
thunder_download(char *b_url, char *b_refer_url,char* fileName,char* saveDir, char *b_cookies)
{
	HRESULT hr;
	ThunderAgentLib::IAgent2 *pAgent = NULL;
	if (NULL == b_url)
	{
		return false;
	}
	CoInitialize(NULL);
	hr = CoCreateInstance(__uuidof(ThunderAgentLib::Agent), NULL, CLSCTX_INPROC_SERVER, __uuidof(ThunderAgentLib::IAgent2), (void**)&pAgent);
	if (FAILED(hr))
	{
		printf("CoCreateInstance error\n");
		CoUninitialize();
		return false;
	}
	_bstr_t url(b_url);
	_bstr_t refer(b_refer_url);
	_bstr_t cookies(b_cookies);
	pAgent->AddTask2(url, _bstr_t(fileName), _bstr_t(saveDir), _bstr_t("sffdfdffdf"), refer, 1, 0, -1, cookies);
	pAgent->CommitTasks2(1);
	pAgent->Release();
	CoUninitialize();
	return true;
}


int _tmain(int argc, char* argv[])
{
	if (argc < 5) {
		printf("参数错误url referurl dir filename");
		return -2;
	}
	 //https://www.jimuyida.com/img/modelviews/dianshang01.data https://www.jimuyida.com d:\ 1.data 

	printf("url: %s\n",argv[1]);
	printf("refer: %s\n", argv[2]);
	printf("dir: %s\n", argv[3]);
	printf("filename: %s\n", argv[4]);
	 
	bool ret = thunder_download(argv[1], argv[2],argv[4], argv[3],"");
	if (!ret)
		return -1;

	return 0;
}

