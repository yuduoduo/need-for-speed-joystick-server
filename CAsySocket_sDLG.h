// CAsySocket_sDlg.h : header file
//

#if !defined(AFX_CAsySocket_sDLG_H__4AF1556E_A473_4640_9E1A_3A8BE85F528A__INCLUDED_)
#define AFX_CAsySocket_sDLG_H__4AF1556E_A473_4640_9E1A_3A8BE85F528A__INCLUDED_

#include "MySocket.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyCAsySocket_sDlg dialog
 #define WM_SHOWTASK (WM_USER +1)
class CMyCAsySocket_sDlg : public CDialog
{
// Construction
public:
	void OnReceive();
	void OnAccept();
	CMySocket *m_sConnectSocket;
	CMySocket m_sListenSocket;
	void OnClose();
	CMyCAsySocket_sDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMyCAsySocket_sDlg)
	enum { IDD = IDD_MYCAsySocket_s_DIALOG };
	CBitmapButton	m_btnListen;
	CBitmapButton	m_btnExit;
	CListBox	m_listSent;
	CListBox	m_listReceived;
	CSpinButtonCtrl m_spinRows;//已在先前定义定义
	CString	m_strMsg;
	CString	m_strServName;
	int		m_nServPort;


	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCAsySocket_sDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyCAsySocket_sDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSendMsg();
	afx_msg void OnButtonClose();
	 void OnButtonListen();
 afx_msg LRESULT OnShowTask(WPARAM wParam,LPARAM lParam) ;
 void ToTray();
 void DeleteTray();
int CreateRun();

void InitDllWinIO();
void DllSetPortVal(WORD wPortAddr,       
   DWORD dwPortVal,      
   BYTE bSize            );
void DllGetPortVal(WORD wPortAddr,       
   PDWORD  dwPortVal,      
   BYTE bSize            );
void SetKey(char SCanCode);

	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	CString GetLocalIp();
bool widthAdd;
	bool widthCut;
	bool heightAdd;
	bool heightCut;
void ActiveControlKeyBoard(char* receiveMsg);
void ActiveMouseControl(char* receiveMsg);
 	int m_curheight;
	int m_curWidth;
	CString UTF8ToUni(char* UTF8);
	int  ConvertDecStringToDec(CString   &value);
	////////////////

	void actinon();
	CBrush m_brBk;//在public中定义 
	/******************/
	void  kbcWait4OBF();
	void  MyKeyPress(BYTE   btScancode) ;
	/***************/
	void VxdKeyClick(UINT vKey);
	void VxdKeyUp(UINT vKey);
	void VxdKeyDown(UINT vKey);
void clearKeyDownMsg();
const LPCTSTR GetKeyName(BYTE vk);

const BYTE   GetKeyFromName(LPCTSTR strName);

const BYTE   GetIndexFromFont(char strName);

void  ActiveControlKeyBoard_keybd(char* receiveMsg);


	/*****************/
		void   MyKeyBoardUp(long   vKeyCoad) ;
void   MyKeyBoardDown(long   vKeyCoad) ;
void   MyKeyBoardUpEx(long   vKeyCoad);
void   MyKeyBoardDownEx(long   vKeyCoad);
//////////////////////////////////////////
	void   MyKeyUp(long   vKeyCoad) ;
void   MyKeyDown(long   vKeyCoad) ;
void   MyKeyUpEx(long   vKeyCoad);
void   MyKeyDownEx(long   vKeyCoad);
void   KBCWait4IBE();
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
public:
	afx_msg void OnDestroy();

public:
	afx_msg void OnDeltaposSpin1(NMHDR *pNMHDR, LRESULT *pResult);

public:
	afx_msg void OnBnClickedButtonListen();
public:
	afx_msg void OnBnClickedButton1();
	private:

		void shutDownWindows();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CAsySocket_sDLG_H__4AF1556E_A473_4640_9E1A_3A8BE85F528A__INCLUDED_)
