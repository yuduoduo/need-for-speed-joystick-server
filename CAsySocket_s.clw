; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyCAsySocket_sDlg
LastTemplate=CAsyncSocket
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "CAsySocket_s.h"

ClassCount=4
Class1=CMyCAsySocket_sApp
Class2=CMyCAsySocket_sDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class4=CMySocket
Resource3=IDD_MYCAsySocket_s_DIALOG

[CLS:CMyCAsySocket_sApp]
Type=0
HeaderFile=CAsySocket_s.h
ImplementationFile=CAsySocket_s.cpp
Filter=N

[CLS:CMyCAsySocket_sDlg]
Type=0
HeaderFile=CAsySocket_sDlg.h
ImplementationFile=CAsySocket_sDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_BUTTON_LISTEN

[CLS:CAboutDlg]
Type=0
HeaderFile=CAsySocket_sDlg.h
ImplementationFile=CAsySocket_sDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MYCAsySocket_s_DIALOG]
Type=1
Class=CMyCAsySocket_sDlg
ControlCount=13
Control1=IDC_STATIC_SERVNAME,static,1342308352
Control2=IDC_STATIC_SERVPORT,static,1342308352
Control3=IDC_EDIT_SERVNAME,edit,1350631552
Control4=IDC_EDIT_SERVPORT,edit,1350631552
Control5=IDC_STATIC_MSG,static,1342308352
Control6=IDC_STATIC_SENT,static,1342308353
Control7=IDC_STATIC_RECEIVED,static,1342308353
Control8=IDC_EDIT_MSG,edit,1350631552
Control9=IDC_BUTTON_LISTEN,button,1342242816
Control10=IDC_BUTTON_CLOSE,button,1342242816
Control11=IDOK,button,1342242816
Control12=IDC_LIST_RECEIVED,listbox,1352728835
Control13=IDC_LIST_SENT,listbox,1352728835

[CLS:CMySocket]
Type=0
HeaderFile=MySocket.h
ImplementationFile=MySocket.cpp
BaseClass=CAsyncSocket
Filter=N
VirtualFilter=q
LastObject=CMySocket

