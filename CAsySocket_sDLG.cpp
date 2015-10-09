// CAsySocket_sDlg.cpp : implementation file
//

#include "StdAfx.h"
#include "CAsySocket_s.h"
#include "CAsySocket_sDlg.h"
//#include "WinIo.h"

#include <winsock2.h>

#include <winnls.h>
#include   "windows.h " 
#include   "winuser.h " 



//udp

#include <stdio.h>  
#include <iostream>  
#pragma comment(lib, "ws2_32.lib")  
const int MAX_BUF_LEN = 255;  
int startUDPSocket(void);
DWORD WINAPI WorkForce( LPVOID lpParameter)   // 线程所需参数，可以通过它传递数据
{
	startUDPSocket();
return 0;//什么不做
} 
void startListenThread(void)
{
	LPVOID       pParam = NULL;
int       nPriority = THREAD_PRIORITY_ABOVE_NORMAL;//默认为THREAD_PRIORITY_NORMAL
UINT       nStackSize = 0;//与创建它的线程堆栈大小相同
DWORD       dwCreateFlags = 0;//创建后立即执行
LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL ;//与创建它的线程安全属性相同

CWinThread* pThread=AfxBeginThread((AFX_THREADPROC)WorkForce,pParam, nPriority , nStackSize,
dwCreateFlags , lpSecurityAttrs);
}
//
  
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

HINSTANCE   hDllInst = NULL;
//////////////////////////////////////////////////////////////////////////////////////

#define MAX_KEYS 256
static TCHAR key_str[MAX_KEYS][20]=
{
    //0x00-0x0F
    "!",
    "VK_LBUTTON",
    "VK_RBUTTON",
    "VK_CANCEL",
    "VK_MBUTTON",
    "!",
    "!",
    "!",
    "VK_BACK",
    "VK_TAB",
    "!",
    "!",
    "VK_CLEAR",
    "VK_RETURN",
    "!",
    "!",

    //0x10-0x1F
    "VK_SHIFT",
    "VK_CONTROL",
    "VK_MENU",
    "VK_PAUSE",
    "VK_CAPITAL",
    "VK_HANGUL",
    "!",
    "VK_JUNJA",
    "VK_FINAL",
    "VK_KANJI",
    "!",
    "VK_ESCAPE",
    "VK_CONVERT",
    "VK_NONCONVERT",
    "VK_ACCEPT",
    "VK_MODECHANGE",

    //0x20-0x2F
    "VK_SPACE",
    "VK_PRIOR",
    "VK_NEXT",
    "VK_END",
    "VK_HOME",
    "VK_LEFT",
    "VK_UP",
    "VK_RIGHT",
    "VK_DOWN",
    "VK_SELECT",
    "VK_PRINT",
    "VK_EXECUTE",
    "VK_SNAPSHOT",
    "VK_INSERT",
    "VK_DELETE",
    "VK_HELP",

    //0x30-0x3F
    "VK_0",
    "VK_1",
    "VK_2",
    "VK_3",
    "VK_4",
    "VK_5",
    "VK_6",
    "VK_7",
    "VK_8",
    "VK_9",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",

    //0x40-0x4F
    "!",
    "VK_A",
    "VK_B",
    "VK_C",
    "VK_D",
    "VK_E",
    "VK_F",
    "VK_G",
    "VK_H",
    "VK_I",
    "VK_J",
    "VK_K",
    "VK_L",
    "VK_M",
    "VK_N",
    "VK_O",

    //0x50-0x5F
    "VK_P",
    "VK_Q",
    "VK_R",
    "VK_S",
    "VK_T",
    "VK_U",
    "VK_V",
    "VK_W",
    "VK_X",
    "VK_Y",
    "VK_Z",
    "VK_LWIN",
    "VK_RWIN",
    "VK_APPS",
    "!",
    "!",

    //0x60-0x6F
    "VK_NUMPAD0",
   "VK_NUMPAD1",
    "VK_NUMPAD2",
    "VK_NUMPAD3",
    "VK_NUMPAD4",
    "VK_NUMPAD5",
    "VK_NUMPAD6",
    "VK_NUMPAD7",
    "VK_NUMPAD8",
    "VK_NUMPAD9",
    "VK_MULTIPLY",
    "VK_ADD",
    "VK_SEPARATOR",
    "VK_SUBTRACT",
    "VK_DECIMAL",
    "VK_DIVIDE",

    //0x70-0x7F
    "VK_F1",
    "VK_F2",
    "VK_F3",
    "VK_F4",
    "VK_F5",
    "VK_F6",
    "VK_F7",
    "VK_F8",
    "VK_F9",
    "VK_F10",
    "VK_F11",
    "VK_F12",
    "VK_F13",
    "VK_F14",
    "VK_F15",
    "VK_F16",

    //0x80-0x8F
    "VK_F17",
    "VK_F18",
    "VK_F19",
    "VK_F20",
    "VK_F21",
    "VK_F22",
    "VK_F23",
    "VK_F24",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",

    //0x90-0x9F
    "VK_OEM_NUMBER",
    "VK_OEM_SCROLL",
    "VK_OEM_SHIFT",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",

    //0xA0-0xAF
    "VK_LSHIFT",
    "VK_RSHIFT",
    "VK_LCONTROL",
    "VK_RCONTROL",
    "VK_LMENU",
    "VK_RMENU",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",

    //0xB0-0xBF
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "VK_OEM_0",
    "VK_OEM_1",
    "VK_OEM_PLUS",
    "VK_OEM_COMMA",
    "VK_OEM_MINUS",
    "VK_OEM_PERIOD",
    "VK_OEM_2",

    //0xC0-0xCF
    "VK_OEM_3",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",

    //0xD0-0xDF
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "VK_OEM_4",
    "VK_OEM_5",
    "VK_OEM_6",
    "VK_OEM_7",
    "VK_OEM_8",

    //0xE0-0xEF
    "VK_OEM_9",
    "VK_OEM_AX",
    "VK_OEM_BSLASH",
    "!",
    "!",
    "VK_PROCESSKEY",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",

    //0xF0-0xFF
    "!",
    "!",
    "!",
    "!",
    "!",
    "!",
    "VK_ATTN",
    "VK_CRSEL",
    "VK_EXSEL",
    "VK_EREOF",
    "VK_PLAY",
    "VK_ZOOM",
    "VK_NONAME",
    "VK_PA1",
    "VK_OEM_CLEAR",
    "!",
};

/////////////////////////////////////////////////////////////////////////////
	void SimulateMouse(int button,int state,int dx = 0,int dy = 0,int dz = 0) {
		INPUT input;
		input.type = INPUT_MOUSE;
		
		input.mi.dx = dx;
		input.mi.dy = dy;
		input.mi.dwFlags = 0;
		switch(button) {
			case 0: input.mi.dwFlags |= state ? MOUSEEVENTF_LEFTDOWN : MOUSEEVENTF_LEFTUP; break;
			case 1: input.mi.dwFlags |= state ? MOUSEEVENTF_RIGHTDOWN : MOUSEEVENTF_RIGHTUP; break;
			case 2: input.mi.dwFlags |= state ? MOUSEEVENTF_MIDDLEDOWN : MOUSEEVENTF_MIDDLEUP; break;
		}
		input.mi.dwFlags |= (dx | dy) ? MOUSEEVENTF_MOVE : 0;
		if(dz) input.mi.dwFlags |= MOUSEEVENTF_WHEEL;
		input.mi.dwExtraInfo = 0;
		input.mi.mouseData = dz;
		input.mi.time = 0;
		
		::SendInput(1,&input,sizeof(input));
	}

	/* the plaform specific function which simulates keys! */
	void SimulateKey(int key,int state) {
		INPUT input;
		input.type = INPUT_KEYBOARD;
		
		input.ki.wVk = key;
		input.ki.wScan = ::MapVirtualKey(input.ki.wVk,0);
		input.ki.dwFlags = KEYEVENTF_SCANCODE | (state ? 0 : KEYEVENTF_KEYUP);

		switch(key) {
			case VK_UP:
			case VK_DOWN:
			case VK_LEFT:
			case VK_RIGHT:
			case VK_LCONTROL:
			case VK_RCONTROL:
			case VK_HOME:
			case VK_END:
			case VK_INSERT:
			case VK_DELETE:
			case VK_PRIOR:
			case VK_NEXT:
			case VK_LWIN:
				input.ki.dwFlags |= KEYEVENTF_EXTENDEDKEY;
				break;
		}
		input.ki.time = 0;
		input.ki.dwExtraInfo = 0;
		::SendInput(1,&input,sizeof(input));
	}
///////////////////////////////////////////////////////////
	void SimKeyClick(UINT vk_Code)
{
  //扩展键
  DWORD dwFlages = 0;
  switch(vk_Code)
  {
  default:
    break;
  case(VK_NUMLOCK):
  case(VK_CAPITAL):
  case(VK_SCROLL):
  case(VK_CONTROL):
  case(VK_LCONTROL):
  case(VK_RCONTROL):
  case(VK_SHIFT):
  case(VK_LSHIFT):
  case(VK_RSHIFT):
  case(VK_MENU):
  case(VK_LMENU):
  case(VK_RMENU):
    dwFlages |= KEYEVENTF_EXTENDEDKEY;
  }

  WORD wScan = MapVirtualKey(vk_Code, 0);
  INPUT Input[2]={0};
  Input[0].type = INPUT_KEYBOARD;
  Input[0].ki.wVk = vk_Code;
  Input[0].ki.wScan = wScan;
  Input[0].ki.dwFlags = dwFlages;

  Input[1].type = INPUT_KEYBOARD;
  Input[1].ki.wVk = vk_Code;
  Input[1].ki.wScan = wScan;
  Input[1].ki.dwFlags = dwFlages | KEYEVENTF_KEYUP;

  SendInput(2, Input, sizeof(INPUT));
}
// CAboutDlg dialog used for App About
int lingming = 10;
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyCAsySocket_sDlg dialog

CMyCAsySocket_sDlg::CMyCAsySocket_sDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyCAsySocket_sDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyCAsySocket_sDlg)
	m_strMsg = _T("");
	m_strServName = _T("");
	m_nServPort = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

		widthAdd = false;
	widthCut = false;
	heightAdd = false;
	heightCut = false;
}

void CMyCAsySocket_sDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyCAsySocket_sDlg)
	DDX_Control(pDX, IDC_BUTTON_LISTEN, m_btnListen);
	DDX_Control(pDX, IDC_BUTTON_CLOSE, m_btnExit);
	DDX_Control(pDX, IDC_SPIN1, m_spinRows);
	//DDX_Control(pDX, IDC_LIST_SENT, m_listSent);
	//DDX_Control(pDX, IDC_LIST_RECEIVED, m_listReceived);
	//DDX_Text(pDX, IDC_EDIT_MSG, m_strMsg);
	DDX_Text(pDX, IDC_EDIT_SERVNAME, m_strServName);
	DDX_Text(pDX, IDC_EDIT_SERVPORT, m_nServPort);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyCAsySocket_sDlg, CDialog)
	//{{AFX_MSG_MAP(CMyCAsySocket_sDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//ON_BN_CLICKED(IDOK, OnSendMsg)
	ON_BN_CLICKED(IDC_BUTTON_CLOSE, OnButtonClose)
	
	ON_MESSAGE(WM_SHOWTASK,OnShowTask)
	//}}AFX_MSG_MAP
	ON_WM_CTLCOLOR()
	ON_WM_DESTROY()
	
	ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN1, &CMyCAsySocket_sDlg::OnDeltaposSpin1)
	ON_BN_CLICKED(IDC_BUTTON_LISTEN, &CMyCAsySocket_sDlg::OnBnClickedButtonListen)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyCAsySocket_sDlg::OnBnClickedButton1)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyCAsySocket_sDlg message handlers
void CMyCAsySocket_sDlg::ToTray()
{
    NOTIFYICONDATA nid; 
    nid.cbSize=(DWORD)sizeof(NOTIFYICONDATA); 
    nid.hWnd=this->m_hWnd; 
    nid.uID=IDR_MAINFRAME; 
    nid.uFlags=NIF_ICON|NIF_MESSAGE|NIF_TIP ; 
    nid.uCallbackMessage=WM_SHOWTASK;//自定义的消息名称 
    nid.hIcon=LoadIcon(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDR_MAINFRAME)); 
    strcpy(nid.szTip,"程序名称");    //信息提示条 
    Shell_NotifyIcon(NIM_ADD,&nid);    //在托盘区添加图标 
    ShowWindow(SW_HIDE);    //隐藏主窗口
}
BOOL CMyCAsySocket_sDlg::OnInitDialog()
{
	CDialog::OnInitDialog();


	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	

	CEdit *prow=(CEdit *)GetDlgItem(IDC_EDIT_ROWS);

m_spinRows.SetBuddy(prow);

m_spinRows.SetRange(1,200);

m_spinRows.SetBase(1);

m_spinRows.SetPos(lingming);

	CBitmap bmp;

bmp.LoadBitmap(IDB_BITMAP1);

m_brBk.CreatePatternBrush(&bmp);

bmp.DeleteObject();

m_btnListen.LoadBitmaps(IDB_BITMAP2,IDB_BITMAP2,IDB_BITMAP2,IDB_BITMAP3);
m_btnExit.LoadBitmaps(IDB_BITMAP4);

GetDlgItem(IDC_STATIC_AIRPORT)->ShowWindow(FALSE);
	// TODO: Add extra initialization here
	m_strServName=GetLocalIp();
	m_nServPort=8888;
	UpdateData(FALSE);

 

	m_sListenSocket.SetParent(this);

//m_curWidth   =   GetSystemMetrics(   SM_CXSCREEN   );   
//m_curheight  =   GetSystemMetrics(   SM_CYSCREEN   );
  //InitDllWinIO();
  /*
if(InstallWinIoDriver("WinIo.sys")==false)
{
   RemoveWinIoDriver();
   ShutdownWinIo();
   exit(0);
}

InitializeWinIo();
*/


OnButtonListen();

//////////////////////
//CreateRun();
startListenThread();

//startUDPSocket();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyCAsySocket_sDlg::InitDllWinIO()
{


	   hDllInst   =   LoadLibrary( "\WinIo32.dll "); 
	if(hDllInst) 
	{ 
		//typedef   DWORD   (WINAPI   *MYFUNC)(DWORD,DWORD); 
		typedef bool (*DLLFunc)();
		DLLFunc   pFunc   =   NULL;   //   youFuntionNameAlias   函数别名 
		pFunc   =   (DLLFunc)GetProcAddress(hDllInst, "InitializeWinIo"); 
//   youFuntionName   在DLL中声明的函数名 
		if(pFunc) 
			{ 
			
			} 
		else
		{
			FreeLibrary(hDllInst); 
		}
			
	}
}

CString CMyCAsySocket_sDlg::GetLocalIp()
{
struct hostent * phost;
char ip[20];
char hostname[50];

gethostname(hostname, 50);
phost = gethostbyname(hostname);
char * * names;
names = phost->h_aliases;
char * * iplist;
iplist = phost->h_addr_list;
while (* iplist)
{
strcpy(ip, inet_ntoa(* (struct in_addr *) * iplist));
iplist++;
}

CString LocalIp = ip;
return LocalIp;
}

void CMyCAsySocket_sDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0)==SC_CLOSE){
         //OnClose();本来这个是关闭的这里也改为隐藏。
		//::AnimateWindow(GetSafeHwnd(),1000,AW_HIDE|AW_BLEND);
        //  KillTimer(0);
        //  ShowWindow(SW_HIDE);//系统菜单的关闭也改为隐藏。
	//}else if(nID==SC_MINIMIZE){
               ToTray(); //最小化到托盘的函数
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyCAsySocket_sDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyCAsySocket_sDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


void CMyCAsySocket_sDlg::OnSendMsg() 
{
	// TODO: Add your control notification handler code here
	int nLen;
	int nSent;

	UpdateData(TRUE);
	if(!m_strMsg.IsEmpty())
	{
		nLen=m_strMsg.GetLength();
		nSent=m_sConnectSocket->Send(LPCTSTR(m_strMsg),nLen);
		if(nSent!=SOCKET_ERROR)
		{
			m_listSent.AddString(m_strMsg);
			UpdateData(FALSE);
		}else {
			AfxMessageBox("信息发送错误!",MB_OK|MB_ICONSTOP);
		}
		m_strMsg.Empty();
		UpdateData(FALSE);
	}
}

void CMyCAsySocket_sDlg::OnButtonClose() 
{
	// TODO: Add your control notification handler code here
	OnClose();
	CMyCAsySocket_sDlg::OnCancel();
	OnBnClickedButton1();
}

void CMyCAsySocket_sDlg::OnButtonListen() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	GetDlgItem(IDC_BUTTON_LISTEN)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_SERVNAME)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_SERVPORT)->EnableWindow(FALSE);
	//GetDlgItem(IDC_STATIC_SERVNAME)->EnableWindow(FALSE);
	//GetDlgItem(IDC_STATIC_SERVPORT)->EnableWindow(FALSE);
	m_sListenSocket.Create(m_nServPort);
	m_sListenSocket.Listen();

		CPoint crpos;
	GetCursorPos(&crpos);
	m_curWidth = crpos.x;
	m_curheight = crpos.y;
}

void CMyCAsySocket_sDlg::OnClose()
{
	//m_listReceived.AddString("服务器收到了OnClose消息");
	m_sConnectSocket->Close();
	
	//GetDlgItem(IDC_EDIT_MSG)->EnableWindow(FALSE);
	//GetDlgItem(IDOK)->EnableWindow(FALSE);
	//GetDlgItem(IDC_STATIC_MSG)->EnableWindow(FALSE);
	//GetDlgItem(IDC_BUTTON_CLOSE)->EnableWindow(FALSE);

	//while(m_listSent.GetCount()!=0) m_listSent.DeleteString(0);
	//while(m_listReceived.GetCount()!=0) m_listReceived.DeleteString(0);

	//GetDlgItem(IDC_BUTTON_LISTEN)->EnableWindow(TRUE);
	//GetDlgItem(IDC_EDIT_SERVNAME)->EnableWindow(TRUE);
	//GetDlgItem(IDC_EDIT_SERVPORT)->EnableWindow(TRUE);
//	GetDlgItem(IDC_STATIC_SERVNAME)->EnableWindow(TRUE);
//	GetDlgItem(IDC_STATIC_SERVPORT)->EnableWindow(TRUE);

	GetDlgItem(IDC_STATIC_AIRPORT)->ShowWindow(FALSE);	
	CStatic   *pStatic   =   (CStatic   *)GetDlgItem(IDC_STATIC_CONTEND);
	pStatic->ShowWindow(FALSE);
}

void CMyCAsySocket_sDlg::OnAccept()
{
	//m_listReceived.AddString("服务器收到了OnAccept消息");
	CMySocket *newsocket = new CMySocket(); 
m_sConnectSocket=newsocket;
m_sConnectSocket->SetParent(this);

	m_sListenSocket.Accept(*m_sConnectSocket);

	m_sConnectSocket->Send("test",1);

	//GetDlgItem(IDC_EDIT_MSG)->EnableWindow(TRUE);
	//GetDlgItem(IDOK)->EnableWindow(TRUE);
	//GetDlgItem(IDC_STATIC_MSG)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_CLOSE)->EnableWindow(TRUE);
	GetDlgItem(IDC_STATIC_AIRPORT)->ShowWindow(TRUE);
	CStatic   *pStatic   =   (CStatic   *)GetDlgItem(IDC_STATIC_CONTEND);
	pStatic->ShowWindow(TRUE);
	pStatic->SetWindowText("Connected");
}


#if 1
void CMyCAsySocket_sDlg::OnReceive()
{
	char* pBuf=new char[1024];
	int nBufSize=1024;
	int nReceived;
	CString strReceived;
	//m_listReceived.AddString("服务器收到了OnReceive消息");
	nReceived=m_sConnectSocket->Receive(pBuf,nBufSize);
	if(nReceived!=SOCKET_ERROR)
	{
		pBuf[nReceived]=NULL;
		if(pBuf[0] == 'e')
		strReceived=UTF8ToUni(&pBuf[1]);
		else		
			strReceived=pBuf;
		
		//m_sConnectSocket.Send("test",1);

		ActiveControlKeyBoard_keybd(pBuf);
		//ActiveControlKeyBoard(pBuf);//控制电脑
		ActiveMouseControl(pBuf);
		//m_listReceived.AddString(strReceived);
		//CStatic   *pStatic   =   (CStatic   *)GetDlgItem(IDC_STATIC_CONTEND);

		//pStatic->SetWindowText(strReceived);
		//for continue reading
	m_sConnectSocket->Send("test",1);

		UpdateData(FALSE);

	} else {
		
		AfxMessageBox("信息接收错误!",MB_OK|MB_ICONSTOP);
	}
	delete pBuf;
}
#endif
int   CMyCAsySocket_sDlg::ConvertDecStringToDec(CString   &value)   
  {   
  int   result   =   -1;   
  char   *pStr   =   value.GetBuffer(0);   
  sscanf(pStr,"%d",&result);   
  return   result;   
  }   
/****************************/

////////////////////////////**************************************/
#define SCREEN_WDITH_MODE 1366
#define SCREEN_HEIGHT_MODE 768
void CMyCAsySocket_sDlg::ActiveMouseControl(char* receiveMsg)
{
	INPUT    Input={0};
	switch(receiveMsg[0])
	{
	case 'a':
		widthAdd = false;
		widthCut = false;
		heightAdd = false;
		heightCut = false;
		switch(receiveMsg[1])
		{
			case 'd':
				widthAdd = true;
			break;
			case 'c':
				widthCut = true;
			break;
			case 'a':
				heightAdd = true;
			break;
			case 'b':
				heightCut = true;
			break;
			case 'e':
				//mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, m_curWidth, m_curheight, 0, 0 );
				//按下鼠标左键
SimulateMouse(0,65535);
Sleep(10);
SimulateMouse(0,0);

				break;
			case 'f':
				//mouse_event (MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, m_curWidth, m_curheight, 0, 0 );
				//放开鼠标右键
SimulateMouse(1,65535);
Sleep(10);
SimulateMouse(1,0);
				break;
			case 'g':
				 //VxdKeyClick(VK_RETURN);
SimulateKey(13,65535);
Sleep(10);
SimulateKey(13,0);

//keybd_event(GetKeyFromName("VK_RETURN"),MapVirtualKey(VK_RETURN,0) ,0,0);
//keybd_event(GetKeyFromName("VK_RETURN"),MapVirtualKey(VK_RETURN,0) ,KEYEVENTF_KEYUP,0);



						//keybd_event(GetKeyFromName("VK_RETURN"),0x1c0d ,0,0);
//keybd_event(GetKeyFromName("VK_RETURN"),0x1c0d ,KEYEVENTF_KEYUP,0);
				break;
		}

		break;
	case 'b':
		widthAdd = false;
		widthCut = false;
		heightAdd = false;
		heightCut = false;
		break;
	case 'e':
		CString strReceived;
		strReceived=UTF8ToUni(&receiveMsg[1]);
		 CString strTmp;

        AfxExtractSubString( strTmp, (LPCTSTR)strReceived, 0, ',');//

		int x = ConvertDecStringToDec(strTmp);

		 AfxExtractSubString( strTmp, (LPCTSTR)strReceived, 1, ',');
		int y = ConvertDecStringToDec(strTmp);

		m_curWidth += x;m_curheight += y;
		//TRACE("x =%d,y =%d\n",x,y);

		mouse_event (MOUSEEVENTF_ABSOLUTE |  MOUSEEVENTF_MOVE, m_curWidth* 65536 / SCREEN_WDITH_MODE, m_curheight* 65536 / SCREEN_HEIGHT_MODE, 0, 0 );

		break;
	}
	if(widthCut)
		{
			m_curWidth=m_curWidth-lingming;
			mouse_event (MOUSEEVENTF_ABSOLUTE |  MOUSEEVENTF_MOVE, m_curWidth* 65536 / SCREEN_WDITH_MODE, m_curheight* 65536 / SCREEN_HEIGHT_MODE, 0, 0 );
		}
		if(widthAdd)
		{
			m_curWidth=m_curWidth+lingming;
			mouse_event (MOUSEEVENTF_ABSOLUTE |  MOUSEEVENTF_MOVE, m_curWidth* 65536 / SCREEN_WDITH_MODE, m_curheight* 65536 / SCREEN_HEIGHT_MODE, 0, 0 );
		}
		if(heightCut)
		{
			m_curheight=m_curheight-lingming;
			mouse_event (MOUSEEVENTF_ABSOLUTE |  MOUSEEVENTF_MOVE, m_curWidth* 65536 / SCREEN_WDITH_MODE, m_curheight* 65536 / SCREEN_HEIGHT_MODE, 0, 0 );
		}
		if(heightAdd)
		{
			m_curheight=m_curheight+lingming;
			mouse_event (MOUSEEVENTF_ABSOLUTE |  MOUSEEVENTF_MOVE, m_curWidth* 65536 / SCREEN_WDITH_MODE, m_curheight* 65536 / SCREEN_HEIGHT_MODE, 0, 0 );
		}
}
void CMyCAsySocket_sDlg::clearKeyDownMsg()
{

				MyKeyUpEx(VK_LEFT);
			
				MyKeyUpEx(VK_RIGHT);
				
			MyKeyUpEx(VK_DOWN);
				
				MyKeyUpEx(VK_UP);
}

void CMyCAsySocket_sDlg::ActiveControlKeyBoard(char* receiveMsg)
{
	switch(receiveMsg[0])
	{
	case 'c':
		
		switch(receiveMsg[1])
		{
			case 'b':
				
				//MyKeyDownEx(VK_LEFT);
keybd_event(GetKeyFromName("VK_LEFT"),VK_LBUTTON,0,0);
				break;
			case 'a':
				
				MyKeyDownEx(VK_RIGHT);
				// Sleep(5);
				// MyKeyUpEx(VK_RIGHT);
				break;
			case 'c':

				MyKeyDownEx(VK_DOWN);
				// Sleep(50);
				// MyKeyUpEx(VK_DOWN);
				break;
			case 'd':
				
				MyKeyDownEx(VK_UP);
				// Sleep(50);
				//MyKeyUpEx(VK_UP);
				break;			
		}

		break;
	case 'd':
//*
		switch(receiveMsg[1])
		{
			case 'b':
				//MyKeyUpEx(VK_LEFT);
				keybd_event(GetKeyFromName("VK_LEFT"),VK_LBUTTON,KEYEVENTF_KEYUP,0);
				break;
			case 'a':
				MyKeyUpEx(VK_RIGHT);
				break;
			case 'c':
				MyKeyUpEx(VK_DOWN);
				break;
			case 'd':
				MyKeyUpEx(VK_UP);
				break;			
		}
		//*/
		break;

	case 'f':
		//MyKeyUpEx(VK_RETURN);
		keybd_event(GetKeyFromName("VK_RETURN"),0x1c0d ,0,0);
keybd_event(GetKeyFromName("VK_RETURN"),0x1c0d ,KEYEVENTF_KEYUP,0);
		break;
	case 'g':
		//输入字体
		/*
		char te = receiveMsg[1];
		int index = GetIndexFromFont(LPCTSTR(receiveMsg[1]));
keybd_event(GetKeyFromName(key_str[index]),0,0,0);
keybd_event(GetKeyFromName(key_str[index]),0,KEYEVENTF_KEYUP,0);*/
break;
	}


}
#define MAX_KEYS 256
static char font_str[MAX_KEYS]=
{
    //0x00-0x0F
  '!',
  '!',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',
   '!',
    '!',

    //0x10-0x1F
    '!',
    '!',
   '!',
   '!',
    '!',
    '!',
   '!',
    '!',
    '!',
    '!',
   '!',
    '!',
    '!',
    '!',
    '!',
   '!',

    //0x20-0x2F
    '!',
   '!',
    '!',
    '!',
    '!',
    '!',
    '!',
   '!',
    '!',
    '!',
   '!',
    '!',
   '!',
    '!',
    '!',
   '!',

    //0x30-0x3F
    '0',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
    '!',
    '!',
    '!',
    '!',
    '!',
    '!',

    //0x40-0x4F
    '!',
    'a',
    'b',
    'c',
    'd',
    'e',
    'f',
   'g',
    'h',
    'i',
    'j',
    'k',
    'l',
    'm',
   '"n',
    'o',

    //0x50-0x5F
    'p',
    'q',
    'r',
    's',
    't',
    'u',
    'v',
    'w',
    'x',
    'y',
    'z',
    '!',
    '!',
   '!',
    '!',
   '!',

    //0x60-0x6F
   '!',
   '!',
   '!',
    '!',
    '!',
    '!',
    '!',
   '!',
    '!',
   
};

//不用winio，用keybd
void CMyCAsySocket_sDlg::ActiveControlKeyBoard_keybd(char* receiveMsg)
{
	switch(receiveMsg[0])
	{
	case 'c':
		
		switch(receiveMsg[1])
		{
			case 'b':
SimulateKey(37,65535);

//keybd_event(GetKeyFromName("VK_LEFT"),0x4b00 ,0,0);
				break;
			case 'a':
				//keybd_event(GetKeyFromName("VK_RIGHT"),0x4d00 ,0,0);
SimulateKey(39,65535);
				break;
			case 'c':
//keybd_event(GetKeyFromName("VK_DOWN"),0x5000 ,0,0);
SimulateKey(40,65535);
				break;
			case 'd':
				//keybd_event(GetKeyFromName("VK_UP"),0x4800 ,0,0);
SimulateKey(38,65535);
				break;			
			case 'e'://space
				SimulateKey(32,65535);
				break;
			case 'f'://w
				SimulateKey(87,65535);
				break;
			case 'g'://s
				SimulateKey(83,65535);
				break;
			case 'h'://esc

				SimulateKey(27,65535);
				break;
			case 'i'://enter
				SimulateKey(13,65535);
				break;
			case 'j'://shift
			        
		SimulateKey(16,65535);
				break;
		}

		break;
	case 'd':
//*
		switch(receiveMsg[1])
		{
			case 'b':
SimulateKey(37,0);				
				//keybd_event(GetKeyFromName("VK_LEFT"),0x4b00 ,KEYEVENTF_KEYUP,0);
				break;
			case 'a':
				//keybd_event(GetKeyFromName("VK_RIGHT"),0x4d00 ,KEYEVENTF_KEYUP,0);
SimulateKey(39,0);
				break;
			case 'c':
				//keybd_event(GetKeyFromName("VK_DOWN"),0x5000 ,KEYEVENTF_KEYUP,0);
SimulateKey(40,0);				
				break;
			case 'd':
				//keybd_event(GetKeyFromName("VK_UP"),0x4800 ,KEYEVENTF_KEYUP,0);
				
SimulateKey(38,0);
				break;
			case 'e'://space
				SimulateKey(32,0);
				break;
			case 'f'://w
				SimulateKey(87,0);
				break;
			case 'g'://s
				SimulateKey(83,0);
				break;
			case 'h'://esc
				SimulateKey(27,0);
				break;
			case 'i'://enter
				SimulateKey(13,0);
				break;
			case 'j'://shift
				SimulateKey(16,0);
				break;
		}
		//*/
		break;

	case 'f':
		SimulateKey(13,65535);
		Sleep(10);
		SimulateKey(13,0);
//keybd_event(GetKeyFromName("VK_RETURN"),0x1c0d ,0,0);
//keybd_event(GetKeyFromName("VK_RETURN"),0x1c0d ,KEYEVENTF_KEYUP,0);
		break;
	case 'g':
		//输入字体
		
		char te = receiveMsg[1];
		int index = GetIndexFromFont(te);
keybd_event(GetKeyFromName(key_str[index]),0,0,0);
keybd_event(GetKeyFromName(key_str[index]),0,KEYEVENTF_KEYUP,0);


		//这个可以用做写数字和字母
//SimKeyClick(VK_RETURN);
break;
	}


}
///////////////////////////////////////////////////////////////////

const LPCTSTR CMyCAsySocket_sDlg::GetKeyName(BYTE vk)
{
    return key_str[vk];
}

const BYTE   CMyCAsySocket_sDlg::GetKeyFromName(LPCTSTR strName)
{
    for (int i=0; i<MAX_KEYS; i++)
    {
        if (lstrcmpi(GetKeyName(BYTE(i)), strName) == 0)
        {
            return i;
        }
    }
    return 0;
}
//////////////////////////////////////////////////////////


const BYTE   CMyCAsySocket_sDlg::GetIndexFromFont(char strName)
{
    for (int i=0; i<MAX_KEYS; i++)
    {
        if (font_str[i] == strName)
        {
            return i;
        }
    }
    return 0;
}

/****************/

/**************************************
****************************************/

#define   VK_A   0x41 

#define   KBC_KEY_CMD   0x64         //键盘命令端口 
#define   KBC_KEY_DATA   0x60       //键盘数据端口 
void CMyCAsySocket_sDlg::DllGetPortVal(WORD wPortAddr,       
   PDWORD  dwPortVal,      
   BYTE bSize            )
{
		typedef bool (WINAPI *DLLFunc)(WORD ,PDWORD ,BYTE );
		DLLFunc   pFunc   =   NULL;   //   youFuntionNameAlias   函数别名 
		pFunc   =   (DLLFunc)GetProcAddress(hDllInst, "GetPortVal"); 

		if(pFunc(wPortAddr,dwPortVal,bSize)) 
			{ 
			
			} 
}
void CMyCAsySocket_sDlg::DllSetPortVal(WORD wPortAddr,       
   DWORD dwPortVal,      
   BYTE bSize            )
{
		typedef bool (WINAPI *DLLFunc)(WORD ,DWORD ,BYTE );
		DLLFunc   pFunc   =   NULL;   //   youFuntionNameAlias   函数别名 
		pFunc   =   (DLLFunc)GetProcAddress(hDllInst, "SetPortVal"); 

		if(pFunc(wPortAddr,dwPortVal,bSize)) 
			{ 
			
			} 
}
void   CMyCAsySocket_sDlg::KBCWait4IBE() 
{ 
	DWORD   dwRegVal=0; 
	do 
	{   
	DllGetPortVal(0x64,&dwRegVal,1); 
	} 
	while(dwRegVal   &   0x00000001); 
	//while((&dwRegVal)&&(0x2)==0);

} 


void   CMyCAsySocket_sDlg::MyKeyDownEx(long   vKeyCoad)       //模拟扩展键按下，参数vKeyCoad是扩展键的虚拟码 
{ 
	long   btScancode; 
	btScancode   =   MapVirtualKey(vKeyCoad,   0); 

        KBCWait4IBE();       //等待键盘缓冲区为空 
        DllSetPortVal(KBC_KEY_CMD,   0xD2,   1     );       //发送键盘写入命令 
        KBCWait4IBE(); 
        DllSetPortVal(KBC_KEY_DATA,   0xE0,   1   );   //写入扩展键标志信息 
        
        
        KBCWait4IBE();       //等待键盘缓冲区为空 
        DllSetPortVal(   KBC_KEY_CMD,   0xD2,   1   );         //发送键盘写入命令 
        KBCWait4IBE(); 
        DllSetPortVal(   KBC_KEY_DATA,   btScancode,   1   );   //写入按键信息,按下键 
} 


void   CMyCAsySocket_sDlg::MyKeyUpEx(long   vKeyCoad)       //模拟扩展键弹起 
{ 
	long   btScancode; 
	btScancode   =   MapVirtualKey(vKeyCoad,   0); 

        KBCWait4IBE();       //等待键盘缓冲区为空 
        DllSetPortVal(KBC_KEY_CMD,   0xD2,   1   );         //发送键盘写入命令 
        KBCWait4IBE(); 
        DllSetPortVal   (KBC_KEY_DATA,   0xE0,   1   );   //写入扩展键标志信息 
        
        
        KBCWait4IBE();     //等待键盘缓冲区为空 
        DllSetPortVal(KBC_KEY_CMD,   0xD2,   1   );         //发送键盘写入命令 
        KBCWait4IBE(); 
        DllSetPortVal(KBC_KEY_DATA,   (btScancode   |   0x80),   1);     //写入按键信息，释放键 
} 

void   CMyCAsySocket_sDlg::MyKeyDown(long   vKeyCoad) 
{ 
	long   byScancode   =   ::MapVirtualKey(vKeyCoad,0);   
	KBCWait4IBE();//等待键盘缓冲区为空   
	DllSetPortVal(0x64,0xD2,1);//发送键盘写入命令 

	KBCWait4IBE();//等待键盘缓冲区为空   
	DllSetPortVal(0x60,(ULONG)byScancode,1);//写入按键信息,按下键 
} 


void   CMyCAsySocket_sDlg::MyKeyUp(long   vKeyCoad) 
{ 
	long   byScancode   =   ::MapVirtualKey(vKeyCoad,0);   
	KBCWait4IBE();//等待键盘缓冲区为空   
	DllSetPortVal(0x64,0xD2,1);//发送键盘写入命令 

	KBCWait4IBE();//等待键盘缓冲区为空   
	DllSetPortVal(0x60,(ULONG)(byScancode   |   0x80),1);//写入按键信息，释放键 
} 
/***********************************************/
void CMyCAsySocket_sDlg::VxdKeyDown(UINT vKey)
{
	UINT iScancode = ::MapVirtualKey(vKey, 0);
  KBCWait4IBE();
  DllSetPortVal(KBC_KEY_CMD, 0xD2, 1);
  KBCWait4IBE();
  DllSetPortVal(KBC_KEY_DATA, iScancode, 1);
}

void CMyCAsySocket_sDlg::VxdKeyUp(UINT vKey)
{
	UINT iScancode = ::MapVirtualKey(vKey, 0);
  KBCWait4IBE();
  DllSetPortVal(KBC_KEY_CMD, 0xD2, 1);
  KBCWait4IBE();
  DllSetPortVal(KBC_KEY_DATA, iScancode | 0x80, 1);
}

void CMyCAsySocket_sDlg::VxdKeyClick(UINT vKey)
{
	
  VxdKeyDown(vKey);
  Sleep(1000);
  VxdKeyUp(vKey);
	


}
void CMyCAsySocket_sDlg::SetKey(char SCanCode)
{
//无论向0x60,还是0x64写东西前都要等状态寄存器OBF变0
_asm{
Loop1:
in al, 0x64
and al, 10b
jnz Loop1
//向$64端口写命令
// mov al, 0xD2//写键盘输出缓存命令
mov al, 0xD3//写鼠标输出缓存命令
out 0x64, al

//无论向0x60,还是0x64写东西前都要等状态寄存器OBF变0
Loop2:
in al, 0x64
and al, 10b
jnz Loop2
//向$60端口写参数
mov al, SCanCode
out 0x60, al
}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
/***********************************************************************/
CString CMyCAsySocket_sDlg::UTF8ToUni(char* szU8)
{
    int wcsLen = ::MultiByteToWideChar(CP_UTF8, NULL, szU8, strlen(szU8), NULL, 0); 
    //分配空间要给'\0'留个空间，MultiByteToWideChar不会给'\0'空间 
    wchar_t* wszString = new wchar_t[wcsLen + 1]; 
    //转换 
    ::MultiByteToWideChar(CP_UTF8, NULL, szU8, strlen(szU8), wszString, wcsLen); 
    //最后加上'\0' 
    wszString[wcsLen] = '\0'; 

 return wszString;
}

HBRUSH CMyCAsySocket_sDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何属性

  if(pWnd->GetDlgCtrlID()==IDC_EDIT_SERVNAME  || 
	  pWnd->GetDlgCtrlID()==IDC_EDIT_ROWS || 
	  pWnd->GetDlgCtrlID()==IDC_EDIT_SERVPORT ||
	  pWnd->GetDlgCtrlID()==IDC_STATIC_CONTEND )
  {  
  pDC->SetBkColor(RGB(67,67,67));  
  pDC->SetTextColor(RGB(153,153,153));  
   HBRUSH   b=CreateSolidBrush(RGB(67,67,67));  
   
  return   b; 
  }  

if (pWnd == this)

{

return m_brBk;

}

	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}

void CMyCAsySocket_sDlg::OnDestroy()
{
//	m_sConnectSocket->Close();
	m_sListenSocket.Close();
	CDialog::OnDestroy();

	// TODO: 在此处添加消息处理程序代码
}

void CMyCAsySocket_sDlg::OnDeltaposSpin1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	lingming = m_spinRows.GetPos(); //获取Spin控件当前值
	*pResult = 0;
}

//wParam接收的是图标的ID，而lParam接收的是鼠标的行为 
LRESULT CMyCAsySocket_sDlg::OnShowTask(WPARAM wParam,LPARAM lParam) 
{ 
    if(wParam!=IDR_MAINFRAME) 
        return 1; 
    switch(lParam) 
    {    
        case WM_RBUTTONUP://右键起来时弹出快捷菜单，这里只有一个“关闭” 
        { 
   
            LPPOINT lpoint=new tagPOINT; 
            ::GetCursorPos(lpoint);//得到鼠标位置 
            CMenu menu; 
            menu.CreatePopupMenu();//声明一个弹出式菜单 
            //增加菜单项“关闭”，点击则发送消息WM_DESTROY给主窗口（已 
            //隐藏），将程序结束。 
            menu.AppendMenu(MF_STRING,WM_DESTROY,"关闭"); 
            //确定弹出式菜单的位置 
            menu.TrackPopupMenu(TPM_LEFTALIGN,lpoint->x,lpoint->y,this); 
            //资源回收 
            HMENU hmenu=menu.Detach(); 
            menu.DestroyMenu(); 
            delete lpoint; 
        } 
           break; 
        case WM_LBUTTONDBLCLK://双击左键的处理 
        { 
            this->ShowWindow(SW_SHOW);//简单的显示主窗口完事儿 
            //DeleteTray();
        } 
           break; 
        default:
           break;
    } 
    return 0; 
} 

void CMyCAsySocket_sDlg::DeleteTray()
{
  NOTIFYICONDATA nid; 
  nid.cbSize=(DWORD)sizeof(NOTIFYICONDATA); 
  nid.hWnd=this->m_hWnd; 
  nid.uID=IDR_MAINFRAME; 
  nid.uFlags=NIF_ICON|NIF_MESSAGE|NIF_TIP ; 
  nid.uCallbackMessage=WM_SHOWTASK;//自定义的消息名称 
  nid.hIcon=LoadIcon(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDR_MAINFRAME)); 
  strcpy(nid.szTip,"程序名称");    //信息提示条为“计划任务提醒” 
  Shell_NotifyIcon(NIM_DELETE,&nid);    //在托盘区删除图标 
}

int CMyCAsySocket_sDlg::CreateRun()
{

//添加以下代码
HKEY   RegKey;  
CString   sPath;  
GetModuleFileName(NULL,sPath.GetBufferSetLength(MAX_PATH+1),MAX_PATH);  
sPath.ReleaseBuffer();  
int   nPos;  
nPos=sPath.ReverseFind('\\');  
sPath=sPath.Left(nPos);  
CString   lpszFile=sPath+"\\NFSJoystickServer.exe";//这里加上你要查找的执行文件名称  
CFileFind   fFind;  
BOOL   bSuccess;  
bSuccess=fFind.FindFile(lpszFile);  
fFind.Close();  
if(bSuccess)  
{  
   CString   fullName;  
   fullName=lpszFile;  
   RegKey=NULL;  
   RegOpenKey(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",&RegKey);  
   RegSetValueEx(RegKey,"NFSJoystickServer",0,REG_SZ,(const   unsigned   char*)(LPCTSTR)fullName,fullName.GetLength());//这里加上你需要在注册表中注册的内容  
   this->UpdateData(FALSE);  
}  
else  
{  
   //theApp.SetMainSkin();  
  // ::AfxMessageBox("没找到执行程序，自动运行失败");  
   exit(0);  
}  
return 0;
} 
void CMyCAsySocket_sDlg::OnBnClickedButtonListen()
{

}

void CMyCAsySocket_sDlg::OnBnClickedButton1()
{
#if 0
	// TODO: 在此添加控件通知处理程序代码
		// TODO: 在此添加控件通知处理程序代码
///////////////////////
CString   sPath;  
char chPath[301];
::GetCurrentDirectory(300,(LPTSTR)chPath);//得到当前目录
char path[200]= "\\updater.exe";

   

strcat(chPath,path);//这里加上你要查找的执行文件名称  
//HINSTANCE result = ShellExecute(NULL,NULL,lpszFile, NULL, chPath,SW_SHOW);

//WinExec(lpszFile,SW_SHOW);

PROCESS_INFORMATION pi;
STARTUPINFO si;
memset(&si,0,sizeof(si));
si.cb=sizeof(si);
si.wShowWindow=SW_SHOW;
si.dwFlags=STARTF_USESHOWWINDOW;

bool fRet=CreateProcess(chPath,NULL,NULL,FALSE,NULL,NULL,NULL,NULL,&si,&pi);
#endif
}
#define MAXLINE 255
#define bzero(a, b)             memset(a, 0, b)
int startUDPSocket(void)  
{  
	 int sockfd;
    struct sockaddr_in seraddr, cliaddr;
    socklen_t cliaddr_len;
    char buffer[MAXLINE];
    int n;
    
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sockfd < 0)
    {
        perror("sock error");
        exit(1);
    }

    int YES = 1;
    if(-1 == setsockopt(sockfd, SOL_SOCKET, SO_BROADCAST, (char*)&YES, sizeof(YES)))
    {
        perror("set broadcast failed\n");
        exit(1);
    }

    bzero(&seraddr, sizeof(struct sockaddr_in));
    seraddr.sin_family = AF_INET;
    seraddr.sin_addr.s_addr = htonl(INADDR_ANY);
    seraddr.sin_port = htons(8888);
    
    if(-1 ==bind(sockfd, (struct sockaddr *)&seraddr, sizeof(struct sockaddr_in)))
    {
        perror("bind error");
        exit(1);
    }

    cliaddr_len = sizeof(cliaddr);
    
    while(1)
    {
        bzero(buffer, MAXLINE);
        n = recvfrom(sockfd, buffer, MAXLINE, 0, (struct sockaddr *)&cliaddr, &cliaddr_len);
       // buffer[n-1] = '\0';
        printf("received from %s at PORT %d\n", inet_ntoa(cliaddr.sin_addr), ntohs(cliaddr.sin_port));
        printf("buffer=[%s]\n", buffer);
        
		//get version
		CString str = buffer;
		if(str.GetLength() > 12)
		{
			CString version = str.Mid(12,str.GetLength());
			float ver = atof(version);

		}
        bzero(buffer, MAXLINE);
        printf("Please input char:\n");    
        fgets(buffer, MAXLINE ,stdin);
		memcpy(buffer, "1.8", 3);
        n = sendto(sockfd, buffer, strlen(buffer), 0, (struct sockaddr *)&cliaddr, sizeof(cliaddr));
    }

    closesocket(sockfd);
  
    return 0;  
} 
void CMyCAsySocket_sDlg::shutDownWindows()
{
	//获取关机权限

HANDLE hProcess,hToken;

TOKEN_PRIVILEGES Privileges;

LUID luid; hProcess = GetCurrentProcess();

//下面为打开当前进程对话

OpenProcessToken(hProcess,TOKEN_ADJUST_PRIVILEGES,&hToken);

Privileges.PrivilegeCount = 1;

LookupPrivilegeValue(NULL,SE_SHUTDOWN_NAME,&luid);

Privileges.Privileges[0].Luid = luid; Privileges.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; AdjustTokenPrivileges(hToken,FALSE,&Privileges,NULL,NULL,NULL);

}
/**
如果通过编程实现远程开机。要是实现，必须得到主办的支持：

进入CMOS参数设置。选择电源管理设置“Power Management Setup”菜单。

将局域网启动置为enable即可；

观察发现不同的CMOS的局域网启动名称不同。

注意一下关键字即可 LAN XXXXXX Power UP

有这些关键字就可能是。
**/
