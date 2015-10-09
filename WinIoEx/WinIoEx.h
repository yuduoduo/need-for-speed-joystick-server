/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * WinIoEx - WinIoEx.h
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



#ifndef __WINIOEX_H__
#define __WINIOEX_H__

#include "WinIoEx_CPP.h"
#include "WinIoEx_Define.h"

#define WINIOEX_API extern "C" _declspec(dllexport) 



#pragma warning(disable : 4482)


//-----------------------------------------------------
//WinIoEx.
WINIOEX_API BOOL	WinIoEx_Available();
WINIOEX_API	BOOL	WinIoEx_Init();
WINIOEX_API	BOOL 	WinIoEx_UnInit();



//-----------------------------------------------------
//Info.
WINIOEX_API BOOL	WinIoEx_GetLastErrorInfo(ERR_INFO	&m_ErrInfo);
WINIOEX_API BOOL	WinIoEx_EnableLastErrorInfoMsg();


//-----------------------------------------------------
//IO_PORT.
WINIOEX_API	BOOL 	WinIoEx_GetIoPortUchar(unsigned char	_addr,	unsigned char &_value);
WINIOEX_API	BOOL 	WinIoEx_SetIoPortUchar(unsigned char	_addr,	unsigned char  _value);

WINIOEX_API	BOOL 	WinIoEx_GetIoPortUshort(unsigned short	_addr,	unsigned short &_value);
WINIOEX_API	BOOL 	WinIoEx_SetIoPortUshort(unsigned short	_addr,	unsigned short  _value);

WINIOEX_API	BOOL 	WinIoEx_GetIoPortUlong(unsigned long	_addr,	unsigned long  &_value);
WINIOEX_API	BOOL 	WinIoEx_SetIoPortUlong(unsigned long	_addr,	unsigned long   _value);



//-----------------------------------------------------
//PCI_BUS
WINIOEX_API	BOOL 	WinIoEx_GetPciBusUchar(PCI_DEVICE &_pci_device);
WINIOEX_API	BOOL 	WinIoEx_SetPciBusUchar(PCI_DEVICE  _pci_device);

WINIOEX_API	BOOL 	WinIoEx_GetPciBusUlong(PCI_DEVICE &_pci_device);
WINIOEX_API	BOOL 	WinIoEx_SetPciBusUlong(PCI_DEVICE  _pci_device);



//-----------------------------------------------------
//MEMORY
WINIOEX_API	BOOL 	WinIoEx_GetMemBlock(MEM_BLOCK &_mem_block);
WINIOEX_API	BOOL 	WinIoEx_SetMemBlock(MEM_BLOCK  _mem_block);




//-----------------------------------------------------
//CPU_MSR
WINIOEX_API BOOL	WinIoEx_GetCpuMsr(HANDLE _hproc,	unsigned char _core, unsigned long _msr, CPU_REGS &_cpu_regs);
WINIOEX_API BOOL	WinIoEx_SetCpuMsr(HANDLE _hproc,	unsigned char _core, unsigned long _msr, CPU_REGS  _cpu_regs);


//-----------------------------------------------------
//CPUID
WINIOEX_API	BOOL 	WinIoEx_GetCpuid(CPU_REGS &_cpu_regs);




























#endif