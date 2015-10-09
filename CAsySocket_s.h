// CAsySocket_s.h : main header file for the CAsySocket_s application
//

#if !defined(AFX_CAsySocket_s_H__32110FBE_400F_4A4E_AB13_3B7403F6091E__INCLUDED_)
#define AFX_CAsySocket_s_H__32110FBE_400F_4A4E_AB13_3B7403F6091E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyCAsySocket_sApp:
// See CAsySocket_s.cpp for the implementation of this class
//

class CMyCAsySocket_sApp : public CWinApp
{
public:
	CMyCAsySocket_sApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCAsySocket_sApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyCAsySocket_sApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CAsySocket_s_H__32110FBE_400F_4A4E_AB13_3B7403F6091E__INCLUDED_)
