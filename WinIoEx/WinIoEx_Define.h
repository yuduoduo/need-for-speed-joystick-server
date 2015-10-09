/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * WinIoEx - WinIoEx_Define.h
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




#ifndef		__WINIOEX__WINIOEX_DEFINE_H__
#define		__WINIOEX__WINIOEX_DEFINE_H__


#include <string>
using namespace std;


//-----------------------------------------------------
//PCI_DEVICE.
typedef struct _PCI_DEVICE{	
	unsigned char	Bus;
	unsigned char	Device;
	unsigned char	Function;
	unsigned char	Index;
	unsigned long	Data;
} PCI_DEVICE, *PPCI_DEVICE;

//-----------------------------------------------------
//MEM_BLOCK.
typedef struct _MEM_BLOCK{
	unsigned long	Index;
	unsigned long	Length;
	unsigned char	Buffer[1024];
} MEM_BLOCK, *PMEM_BLOCK;

//-----------------------------------------------------
//CPU_REGS
typedef struct _CPU_REGS{
	unsigned long	EAX;
	unsigned long	EBX;
	unsigned long	ECX;
	unsigned long	EDX;
} CPU_REGS, *PCPU_REGS;






typedef struct _ELEMENT
{	
	unsigned long Index;		// 4 Bytes
	unsigned long Data;			// 4 Byte
}ELEMENT, *PELEMENT;




typedef struct _PKG16
{	
	ELEMENT			Element[15];	// 8 Bytes * 15
	unsigned char	Count;			// 1 Byte for aglie meory.
	unsigned char	Reserved[7];	// 7 Bytes for aglie meory.
}PKG16, *PPKG16;



typedef struct _PKG1K
{	
    unsigned long   Index;
    unsigned long   Length;
	unsigned char	Buffer[1024];   // 1K-4*2Bytes
}PKG1K, *PPKG1K;
	


typedef struct _DEVICE_EXTENSION {
	PKG16			Pkg16;
	PKG1K           Pkg1K;
	CPU_REGS		CpuRegs;
} DEVICE_EXTENSION, *PDEVICE_EXTENSION;
	




typedef struct _ERR_INFO {
	string			TimeStamp;
	string			ClasName;
	string			FileName;
	string			FunctionName;
	string			WinNtFunctioName;
	string			CustomizeMsg;
	unsigned long	ErrorLine;
	unsigned long	WinNtLastError;
}ERR_INFO, *PERR_INFO;







#endif