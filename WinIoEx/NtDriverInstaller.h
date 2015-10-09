/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * WinIoEx - NtDriverINstaller.h
 *
 * WinIoEx Copyright (C) 2009-2010 Doug Chen.
 * 
 *
 * You can use the binary files or source code, I DO NOT restrict you anything on anywhere even 
 * commercial purpose, but please send a mail or leave a message on MSN to me before releasing your 
 * project for encourage me keep going on the project, thank you.
 *
 *
 *                                                           Doug Chen, 2009/11/10 20:23 Taiwan Taipei
 *	
 *	Name		: Doug Chen  (≥Ø¡‰∑Ω)
 * 	Email		: dougchen850208@gmail.com
 * 	MSN			: dougchen850208@gmail.com
 *  Location	: Taiwan Taipei
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */




#ifndef __WINIOEX_NTDRIVERINSTALLER_H__
#define __WINIOEX_NTDRIVERINSTALLER_H__


#pragma warning( disable : 4996 )


#include <Windows.h>
#include <WinSvc.h>
#include <winioctl.h>

#include <string>
#include <vector>

#include "WinIoEx_Define.h"


using namespace std;









class NtDriverInstaller
{
public:
	unsigned long		g_NtLastError;
	ERR_INFO			g_ErrInfo;

	//--------------------------------------------------------------------------------------------------
	//Driver installer functions.
	
	NtDriverInstaller::NtDriverInstaller();
	NtDriverInstaller::~NtDriverInstaller();


	bool NtDriverInstaller::TerminalHandle();
	bool NtDriverInstaller::GetHandle(HANDLE *_handle);
	bool NtDriverInstaller::CreateHandle(wchar_t *_drv_name);
	

	bool NtDriverInstaller::InstallDriver(wchar_t	*_drv_name, wchar_t *_bin_name);
	bool NtDriverInstaller::StartDriver(wchar_t		*_drv_name);
	bool NtDriverInstaller::RemoveDriver(wchar_t	*_drv_name);


	void NtDriverInstaller::EnableLastErrorInfoMsg();
	void NtDriverInstaller::GetLastErrorInfo();
	void NtDriverInstaller::GetLastErrorInfo(ERR_INFO  &m_ErrInfo);


	//--------------------------------------------------------------------------------------------------
	//Enum
	enum WinIoEx_ServiceType
	{	
		// The type of service. This member can be one of the following values.
		WINIOEX_SERVICE_FILE_SYSTEM_DRIVER	=	0x00000002,		// The service is a file system driver. 
		WINIOEX_SERVICE_KERNEL_DRIVER		=	0x00000001,		// The service is a device driver.
		WINIOEX_SERVICE_WIN32_OWN_PROCESS	=	0x00000010,		// The service runs in its own process. 
		WINIOEX_SERVICE_WIN32_SHARE_PROCESS	=	0x00000020,		// The service shares a process with other services. 

		// If the service type is either SERVICE_WIN32_OWN_PROCESS or SERVICE_WIN32_SHARE_PROCESS, and the service is running in the context of the LocalSystem account, the following type may also be specified.
		WINIOEX_SERVICE_INTERACTIVE_PROCESS	=	0x00000100		// The service can interact with the desktop. 
	};
	 


	enum WinIoEx_ServiceStatus
	{	
		WINIOEX_SERVICE_CONTINUE_PENDING	=	0x00000005, 
		WINIOEX_SERVICE_PAUSE_PENDING		=	0x00000006, 
		WINIOEX_SERVICE_PAUSED				=	0x00000007,		// The service is paused. 
		WINIOEX_SERVICE_RUNNING				=	0x00000004,		// The service is running. 
		WINIOEX_SERVICE_START_PENDING		=	0x00000002,		// The service is starting. 
		WINIOEX_SERVICE_STOP_PENDING		=	0x00000003,		// The service is stopping. 
		WINIOEX_SERVICE_STOPPED				=	0x00000001		// The service  
	};



	enum WioIoEx_ServiceControlsAccepted 
	{
		// ---------------------------------------------------------------------------
		WINIOEX_SERVICE_ACCEPT_NETBINDCHANGE		=	0x00000010,		// The service is a network component that can accept changes in its binding without being stopped and restarted. 
																		// This control code allows the service to receive SERVICE_CONTROL_NETBINDADD, SERVICE_CONTROL_NETBINDREMOVE, SERVICE_CONTROL_NETBINDENABLE, and SERVICE_CONTROL_NETBINDDISABLE notifications.
																		// Windows NT:  This value is not supported. 

		WINIOEX_SERVICE_ACCEPT_PARAMCHANGE			=	0x00000008,		// The service can reread its startup parameters without being stopped and restarted. 
																		// This control code allows the service to receive SERVICE_CONTROL_PARAMCHANGE notifications.
																		// Windows NT:  This value is not supported. 

		WINIOEX_SERVICE_ACCEPT_PAUSE_CONTINUE		=	0x00000002,		// The service can be paused and continued. 
																		// This control code allows the service to receive SERVICE_CONTROL_PAUSE and SERVICE_CONTROL_CONTINUE notifications.

		WINIOEX_SERVICE_ACCEPT_PRESHUTDOWN			=	0x00000100,		// The service can perform preshutdown tasks. 
																		// This control code enables the service to receive SERVICE_CONTROL_PRESHUTDOWN notifications. Note that ControlService and ControlServiceEx cannot send this notification; only the system can send it.
																		// Windows Server 2003 and Windows XP/2000:  This value is not supported. 
		
		WINIOEX_SERVICE_ACCEPT_SHUTDOWN				=	0x00000004,		// The service is notified when system shutdown occurs. 
																		// This control code allows the service to receive SERVICE_CONTROL_SHUTDOWN notifications. Note that ControlService and ControlServiceEx cannot send this notification; only the system can send it.
	 
		WINIOEX_SERVICE_ACCEPT_STOP					=	0x00000001,		// The service can be stopped. 
																		// This control code allows the service to receive SERVICE_CONTROL_STOP notifications.


		// ---------------------------------------------------------------------------
		// This member can also contain the following extended control codes, which are supported only by HandlerEx. (Note that these control codes cannot be sent by ControlService or ControlServiceEx.)

		WINIOEX_SERVICE_ACCEPT_HARDWAREPROFILECHANGE=0x00000020,		// The service is notified when the computer's hardware profile has changed. This enables the system to send SERVICE_CONTROL_HARDWAREPROFILECHANGE notifications to the service.
																		//Windows NT:  This value is not supported. 

		WINIOEX_SERVICE_ACCEPT_POWEREVENT=0x00000040,					// The service is notified when the computer's power status has changed. This enables the system to send SERVICE_CONTROL_POWEREVENT notifications to the service.
																		//Windows NT:  This value is not supported. 

		WINIOEX_SERVICE_ACCEPT_SESSIONCHANGE=0x00000080					// The service is notified when the computer's session status has changed. This enables the system to send SERVICE_CONTROL_SESSIONCHANGE notifications to the service.
																		// Windows 2000/NT:  This value is not supported. 


	};


private:
	bool	g_LastErrorMsg;
	HANDLE	g_hFileHandle;



	//--------------------------------------------------------------------------------------------------
	//Error message box.
	void NtDriverInstaller::ErrorMessage_ControlService(	int _error_code);
	void NtDriverInstaller::ErrorMessage_OpenSCManager(		int _error_code);
	void NtDriverInstaller::ErrorMessage_CreateService(		int _error_code);
	void NtDriverInstaller::ErrorMessage_OpenService(		int _error_code);
	void NtDriverInstaller::ErrorMessage_StartService(		int _error_code);
	void NtDriverInstaller::ErrorMessage_DeleteService(		int _error_code);
	void NtDriverInstaller::ErrorMessage_ServiceStatus(		int	_type,
															int	_status,
															int	_controls_accepted);
};



#endif