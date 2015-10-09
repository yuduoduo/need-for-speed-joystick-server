/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * WinIoEx - WinIoEx_CPP.h
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





#ifndef		__WINIOEX__WINIOEX_CPP_H__
#define		__WINIOEX__WINIOEX_CPP_H__

#include "WinIoEx_Define.h"
#include "NtDriverInstaller.h"


#include <string>
#include <vector>

using namespace std;


class WinIoEx
{
private:
	wchar_t					WINIOEX_DRIVER_NAME[1024];	//("WINIOEX");
	wchar_t					WINIOEX_BINARY_NAME[1024];	//("WINIOEX.SYS");

	HANDLE					g_DriverHandle;
	DEVICE_EXTENSION		g_DevExt;
	ERR_INFO				g_ErrInfo;
	NtDriverInstaller		g_NtDrvInstall;


	bool					g_ShowErrorDetailMsg;
public:
	WinIoEx::WinIoEx();
	WinIoEx::~WinIoEx();
	
	

	//-----------------------------------------------------
	//Private Function.
	void WinIoEx::GetLastErrorInfo();
	void WinIoEx::GetLastErrorInfo(ERR_INFO  &m_ErrInfo);
	bool WinIoEx::IsWinIoExReady();
	bool WinIoEx::IoControlExecute(unsigned long _io_ctrl_code,unsigned long _buff_size, unsigned char _cmd_count);
	bool WinIoEx::IsFixedDrive(wchar_t *_drive);
	
	//-----------------------------------------------------
	//WinIoEx.
	bool WinIoEx::Available();
	bool WinIoEx::Init();		
	bool WinIoEx::UnInit();
	bool WinIoEx::EnableLastErrorInfoMsg();

	//-----------------------------------------------------
	//IO_PORT.
	bool WinIoEx::GetIoPortUchar(unsigned char	_addr,	unsigned char &_value);
	bool WinIoEx::SetIoPortUchar(unsigned char	_addr,	unsigned char  _value);

	bool WinIoEx::GetIoPortUshort(unsigned short	_addr,	unsigned short &_value);
	bool WinIoEx::SetIoPortUshort(unsigned short	_addr,	unsigned short  _value);

	bool WinIoEx::GetIoPortUlong(unsigned long	_addr,	unsigned long  &_value);
	bool WinIoEx::SetIoPortUlong(unsigned long	_addr,	unsigned long   _value);


	//-----------------------------------------------------
	//PCI_BUS
	bool WinIoEx::GetPciBusUchar(PCI_DEVICE &_pci_device);
	bool WinIoEx::SetPciBusUchar(PCI_DEVICE  _pci_device);

	bool WinIoEx::GetPciBusUlong(PCI_DEVICE &_pci_device);
	bool WinIoEx::SetPciBusUlong(PCI_DEVICE  _pci_device);



	//-----------------------------------------------------
	//MEMORY
	bool WinIoEx::GetMemBlock(MEM_BLOCK &_mem_block);
	bool WinIoEx::SetMemBlock(MEM_BLOCK  _mem_block);




	//-----------------------------------------------------
	//CPU_MSR
	bool WinIoEx::GetCpuMsr(HANDLE _hproc,	unsigned char _core, unsigned long _msr, CPU_REGS &_cpu_regs);
	bool WinIoEx::SetCpuMsr(HANDLE _hproc,	unsigned char _core, unsigned long _msr, CPU_REGS  _cpu_regs);

	
};






#endif