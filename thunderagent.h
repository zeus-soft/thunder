// Created by Microsoft (R) C/C++ Compiler Version 14.13.26132.0 (c72f43ec).
//
// thunderagent.tlh
//
// C++ source equivalent of Win32 type library ThunderAgent.dll
// compiler-generated file created 07/07/18 at 05:24:42 - DO NOT EDIT!

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace ThunderAgentLib {

	//
	// Forward references and typedefs
	//

	struct __declspec(uuid("26d657ae-a466-4f44-ab1d-5cfffadbed97"))
		/* LIBID */ __ThunderAgentLib;
	struct /* coclass */ Agent;
	struct __declspec(uuid("1622f56a-0c55-464c-b472-377845def21d"))
		/* dual interface */ IAgent;
	struct __declspec(uuid("1adefb0d-0ffa-4470-8ab0-b921080f0642"))
		/* dual interface */ IAgent2;
	struct __declspec(uuid("18243d84-9fe5-4977-9247-1ae41355c5c3"))
		/* dual interface */ IAgent3;
	struct __declspec(uuid("d3830c5b-62ea-48ef-a7cb-5b3944cae12f"))
		/* dual interface */ IAgent4;
	struct __declspec(uuid("80bb764d-348b-48ea-9f0f-d9458e0ee186"))
		/* dual interface */ IAgent5;
	enum _tag_Enum_CallType;
	struct __declspec(uuid("6bec8438-4aeb-4ee9-9385-3c9f0f11f47d"))
		/* dual interface */ IAgent6;
	struct __declspec(uuid("12b9420e-1f40-41f2-918b-f316a6b2cd89"))
		/* dual interface */ IAgent7;
	struct __declspec(uuid("83e8a23b-03cf-499e-9bdf-241a113dc7e1"))
		/* dual interface */ IAgentExternal;
	struct __declspec(uuid("2ed7b5da-a6f2-458f-a7cd-addef176d709"))
		/* dual interface */ IAgent8;
	struct __declspec(uuid("152bb689-43e0-4167-b557-cdc0e57c03ea"))
		/* dual interface */ IAgent9;
	struct __declspec(uuid("e6edfd5a-86f5-4af6-9fab-0a30be6c4b7f"))
		/* dual interface */ IAgent10;
	struct __declspec(uuid("0b5a8ac8-fea6-448c-8d4c-1a9d069ac32c"))
		/* dual interface */ IAgent11;
	struct __declspec(uuid("c04bfc88-9a69-486f-ab36-e42396a89589"))
		/* dual interface */ IAgent12;

	//
	// Smart pointer typedef declarations
	//

	_COM_SMARTPTR_TYPEDEF(IAgent, __uuidof(IAgent));
	_COM_SMARTPTR_TYPEDEF(IAgent2, __uuidof(IAgent2));
	_COM_SMARTPTR_TYPEDEF(IAgent3, __uuidof(IAgent3));
	_COM_SMARTPTR_TYPEDEF(IAgent4, __uuidof(IAgent4));
	_COM_SMARTPTR_TYPEDEF(IAgent5, __uuidof(IAgent5));
	_COM_SMARTPTR_TYPEDEF(IAgent6, __uuidof(IAgent6));
	_COM_SMARTPTR_TYPEDEF(IAgent7, __uuidof(IAgent7));
	_COM_SMARTPTR_TYPEDEF(IAgentExternal, __uuidof(IAgentExternal));
	_COM_SMARTPTR_TYPEDEF(IAgent8, __uuidof(IAgent8));
	_COM_SMARTPTR_TYPEDEF(IAgent9, __uuidof(IAgent9));
	_COM_SMARTPTR_TYPEDEF(IAgent10, __uuidof(IAgent10));
	_COM_SMARTPTR_TYPEDEF(IAgent11, __uuidof(IAgent11));
	_COM_SMARTPTR_TYPEDEF(IAgent12, __uuidof(IAgent12));

	//
	// Type library items
	//

	struct __declspec(uuid("485463b7-8fb2-4b3b-b29b-8b919b0eacce"))
		Agent;
	// [ default ] interface IAgent
	// interface IAgent2
	// interface IAgent3
	// interface IAgent4
	// interface IAgent5
	// interface IAgent6
	// interface IAgent7
	// interface IAgentExternal
	// interface IAgent8
	// interface IAgent9
	// interface IAgent10
	// interface IAgent11
	// interface IAgent12

	struct __declspec(uuid("1622f56a-0c55-464c-b472-377845def21d"))
	IAgent : IDispatch
	{
		//
		// Wrapper methods for error-handling
		//

		_bstr_t GetInfo(
		_bstr_t bstrInfoName);
		HRESULT AddTask(
			_bstr_t bstrUrl,
			_bstr_t bstrFileName,
			_bstr_t bstrPath,
			_bstr_t bstrComments,
			_bstr_t bstrReferUrl,
			int nStartMode,
			int nOnlyFromOrigin,
			int nOriginThreadCount);
		int CommitTasks();
		HRESULT CancelTasks();
		_bstr_t GetTaskInfo(
			_bstr_t bstrUrl,
			_bstr_t bstrInfoName);
		HRESULT GetInfoStruct(
			int pInfo);
		HRESULT GetTaskInfoStruct(
			int pTaskInfo);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_GetInfo(
			/*[in]*/ BSTR bstrInfoName,
			/*[out,retval]*/ BSTR * pbstrResult) = 0;
		virtual HRESULT __stdcall raw_AddTask(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount) = 0;
		virtual HRESULT __stdcall raw_CommitTasks(
			/*[out,retval]*/ int * pResult) = 0;
		virtual HRESULT __stdcall raw_CancelTasks() = 0;
		virtual HRESULT __stdcall raw_GetTaskInfo(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrInfoName,
			/*[out,retval]*/ BSTR * pbstrResult) = 0;
		virtual HRESULT __stdcall raw_GetInfoStruct(
			/*[in]*/ int pInfo) = 0;
		virtual HRESULT __stdcall raw_GetTaskInfoStruct(
			/*[in]*/ int pTaskInfo) = 0;
	};

	struct __declspec(uuid("1adefb0d-0ffa-4470-8ab0-b921080f0642"))
	IAgent2 : IAgent
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask2(
		_bstr_t bstrUrl,
		_bstr_t bstrFileName,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		int nStartMode,
		int nOnlyFromOrigin,
		int nOriginThreadCount,
		_bstr_t bstrCookie);
		int CommitTasks2(
			int nIsAsync);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask2(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount,
			/*[in]*/ BSTR bstrCookie) = 0;
		virtual HRESULT __stdcall raw_CommitTasks2(
			/*[in]*/ int nIsAsync,
			/*[out,retval]*/ int * pResult) = 0;
	};

	struct __declspec(uuid("18243d84-9fe5-4977-9247-1ae41355c5c3"))
	IAgent3 : IAgent2
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask3(
		_bstr_t bstrUrl,
		_bstr_t bstrFileName,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		int nStartMode,
		int nOnlyFromOrigin,
		int nOriginThreadCount,
		_bstr_t bstrCookie,
		_bstr_t bstrCID);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask3(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount,
			/*[in]*/ BSTR bstrCookie,
			/*[in]*/ BSTR bstrCID) = 0;
	};

	struct __declspec(uuid("d3830c5b-62ea-48ef-a7cb-5b3944cae12f"))
	IAgent4 : IAgent3
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask4(
		_bstr_t bstrUrl,
		_bstr_t bstrFileName,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		int nStartMode,
		int nOnlyFromOrigin,
		int nOriginThreadCount,
		_bstr_t bstrCookie,
		_bstr_t bstrCID,
		_bstr_t bstrStatUrl);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask4(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount,
			/*[in]*/ BSTR bstrCookie,
			/*[in]*/ BSTR bstrCID,
			/*[in]*/ BSTR bstrStatUrl) = 0;
	};

	enum _tag_Enum_CallType
	{
		ECT_Undefine = -1,
		ECT_Agent5 = 1
	};

	struct __declspec(uuid("80bb764d-348b-48ea-9f0f-d9458e0ee186"))
	IAgent5 : IAgent4
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask5(
		_bstr_t bstrUrl,
		_bstr_t bstrFileName,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		int nStartMode,
		int nOnlyFromOrigin,
		int nOriginThreadCount,
		_bstr_t bstrCookie,
		_bstr_t bstrCID,
		_bstr_t bstrStatUrl,
		enum _tag_Enum_CallType eCallType,
			_bstr_t bstrGCID,
			int nFileSize);
		int CommitTasks3(
			int nThunderType,
			int nIsAsync);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask5(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount,
			/*[in]*/ BSTR bstrCookie,
			/*[in]*/ BSTR bstrCID,
			/*[in]*/ BSTR bstrStatUrl,
		/*[in]*/ enum _tag_Enum_CallType eCallType,
			/*[in]*/ BSTR bstrGCID,
			/*[in]*/ int nFileSize) = 0;
		virtual HRESULT __stdcall raw_CommitTasks3(
			/*[in]*/ int nThunderType,
			/*[in]*/ int nIsAsync,
			/*[out,retval]*/ int * pResult) = 0;
	};

	struct __declspec(uuid("6bec8438-4aeb-4ee9-9385-3c9f0f11f47d"))
	IAgent6 : IAgent5
	{
		//
		// Wrapper methods for error-handling
		//

		int ConfirmRectMode();
		HRESULT AddTaskInRect();

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_ConfirmRectMode(
			/*[out,retval]*/ int * pResult) = 0;
		virtual HRESULT __stdcall raw_AddTaskInRect() = 0;
	};

	struct __declspec(uuid("12b9420e-1f40-41f2-918b-f316a6b2cd89"))
	IAgent7 : IAgent6
	{
		//
		// Wrapper methods for error-handling
		//

		int CommitTasks4(
		int nThunderType,
		int nIsAsync);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_CommitTasks4(
			/*[in]*/ int nThunderType,
			/*[in]*/ int nIsAsync,
			/*[out,retval]*/ int * pResult) = 0;
	};

	struct __declspec(uuid("83e8a23b-03cf-499e-9bdf-241a113dc7e1"))
	IAgentExternal : IAgent7
	{
		//
		// Wrapper methods for error-handling
		//

		int ExecuteCommand(
		_bstr_t bstrType,
		_bstr_t bstrCommand,
		_bstr_t bstrParam);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_ExecuteCommand(
			/*[in]*/ BSTR bstrType,
			/*[in]*/ BSTR bstrCommand,
			/*[in]*/ BSTR bstrParam,
			/*[out,retval]*/ int * pResult) = 0;
	};

	struct __declspec(uuid("2ed7b5da-a6f2-458f-a7cd-addef176d709"))
	IAgent8 : IAgentExternal
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask8(
		_bstr_t bstrUrl,
		_bstr_t bstrFileName,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		int nStartMode,
		int nOnlyFromOrigin,
		int nOriginThreadCount,
		_bstr_t bstrCookie,
		_bstr_t bstrCID,
		_bstr_t bstrStatUrl,
		int nSocket,
		unsigned __int64 ulBeginAddressOfRecvData,
		int nRecvBytes,
		unsigned int unTaskOpt);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask8(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount,
			/*[in]*/ BSTR bstrCookie,
			/*[in]*/ BSTR bstrCID,
			/*[in]*/ BSTR bstrStatUrl,
			/*[in]*/ int nSocket,
			/*[in]*/ unsigned __int64 ulBeginAddressOfRecvData,
			/*[in]*/ int nRecvBytes,
			/*[in]*/ unsigned int unTaskOpt) = 0;
	};

	struct __declspec(uuid("152bb689-43e0-4167-b557-cdc0e57c03ea"))
	IAgent9 : IAgent8
	{
		//
		// Wrapper methods for error-handling
		//

		int CommitTasks5(
		int nThunderType,
		int nIsAsync);
		HRESULT AddTaskInRect2();

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_CommitTasks5(
			/*[in]*/ int nThunderType,
			/*[in]*/ int nIsAsync,
			/*[out,retval]*/ int * pResult) = 0;
		virtual HRESULT __stdcall raw_AddTaskInRect2() = 0;
	};

	struct __declspec(uuid("e6edfd5a-86f5-4af6-9fab-0a30be6c4b7f"))
	IAgent10 : IAgent9
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask10(
		_bstr_t bstrUrl,
		_bstr_t bstrRedirectedUrl,
		_bstr_t bstrTitle,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		_bstr_t bstrCookie,
		_bstr_t bstrUserAgent,
		_bstr_t bstrExtraInfo);
		int CommitTasks10(
			int nThunderType,
			int nIsAsync);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask10(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrRedirectedUrl,
			/*[in]*/ BSTR bstrTitle,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ BSTR bstrCookie,
			/*[in]*/ BSTR bstrUserAgent,
			/*[in]*/ BSTR bstrExtraInfo) = 0;
		virtual HRESULT __stdcall raw_CommitTasks10(
			/*[in]*/ int nThunderType,
			/*[in]*/ int nIsAsync,
			/*[out,retval]*/ int * pResult) = 0;
	};

	struct __declspec(uuid("0b5a8ac8-fea6-448c-8d4c-1a9d069ac32c"))
	IAgent11 : IAgent10
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask11(
		_bstr_t bstrUrl,
		_bstr_t bstrFileName,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		_bstr_t bstrCharSet,
		int nStartMode,
		int nOnlyFromOrigin,
		int nOriginThreadCount,
		_bstr_t bstrCookie,
		_bstr_t bstrCID,
		_bstr_t bstrStatUrl,
		int nSocket,
		unsigned __int64 ulBeginAddressOfRecvData,
		int nRecvBytes,
		unsigned int unTaskOpt,
		_bstr_t bstrStatClick);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask11(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ BSTR bstrCharSet,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount,
			/*[in]*/ BSTR bstrCookie,
			/*[in]*/ BSTR bstrCID,
			/*[in]*/ BSTR bstrStatUrl,
			/*[in]*/ int nSocket,
			/*[in]*/ unsigned __int64 ulBeginAddressOfRecvData,
			/*[in]*/ int nRecvBytes,
			/*[in]*/ unsigned int unTaskOpt,
			/*[in]*/ BSTR bstrStatClick) = 0;
	};

	struct __declspec(uuid("c04bfc88-9a69-486f-ab36-e42396a89589"))
	IAgent12 : IAgent11
	{
		//
		// Wrapper methods for error-handling
		//

		HRESULT AddTask12(
		_bstr_t bstrUrl,
		_bstr_t bstrFileName,
		_bstr_t bstrPath,
		_bstr_t bstrComments,
		_bstr_t bstrReferUrl,
		_bstr_t bstrCharSet,
		int nStartMode,
		int nOnlyFromOrigin,
		int nOriginThreadCount,
		_bstr_t bstrCookie,
		_bstr_t bstrCID,
		_bstr_t bstrStatUrl,
		unsigned int unTaskOpt,
		_bstr_t bstrStatClick);

		//
		// Raw methods provided by interface
		//

		virtual HRESULT __stdcall raw_AddTask12(
			/*[in]*/ BSTR bstrUrl,
			/*[in]*/ BSTR bstrFileName,
			/*[in]*/ BSTR bstrPath,
			/*[in]*/ BSTR bstrComments,
			/*[in]*/ BSTR bstrReferUrl,
			/*[in]*/ BSTR bstrCharSet,
			/*[in]*/ int nStartMode,
			/*[in]*/ int nOnlyFromOrigin,
			/*[in]*/ int nOriginThreadCount,
			/*[in]*/ BSTR bstrCookie,
			/*[in]*/ BSTR bstrCID,
			/*[in]*/ BSTR bstrStatUrl,
			/*[in]*/ unsigned int unTaskOpt,
			/*[in]*/ BSTR bstrStatClick) = 0;
	};

	//
	// Wrapper method implementations
	//

#include "thunderagent.tli"

} // namespace ThunderAgentLib

#pragma pack(pop)