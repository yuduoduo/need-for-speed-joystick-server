// MySocket.cpp : implementation file
//

#include "stdafx.h"
#include "CAsySocket_s.h"
#include "MySocket.h"
#include "CAsySocket_sDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMySocket

CMySocket::CMySocket()
{
	m_pDlg=NULL;
}

CMySocket::~CMySocket()
{
	m_pDlg=NULL;
}


// Do not edit the following lines, which are needed by ClassWizard.
#if 0
BEGIN_MESSAGE_MAP(CMySocket, CAsyncSocket)
	//{{AFX_MSG_MAP(CMySocket)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
#endif	// 0

/////////////////////////////////////////////////////////////////////////////
// CMySocket member functions


void CMySocket::OnReceive(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	if(nErrorCode==0) m_pDlg->OnReceive();
}

void CMySocket::OnClose(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	if(nErrorCode==0) m_pDlg->OnClose();
}

void CMySocket::OnAccept(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	if(nErrorCode==0) m_pDlg->OnAccept();
}


void CMySocket::SetParent(CMyCAsySocket_sDlg *pDlg)
{
	m_pDlg=pDlg;
}
