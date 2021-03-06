#if !defined(AFX_RDOERROR_H__BAD271DE_9804_11D1_9504_444553540000__INCLUDED_)
#define AFX_RDOERROR_H__BAD271DE_9804_11D1_9504_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CrdoError wrapper class

class CrdoError : public COleDispatchDriver
{
public:
	CrdoError() {}		// Calls COleDispatchDriver default constructor
	CrdoError(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CrdoError(const CrdoError& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNumber();
	CString GetSource();
	CString GetDescription();
	long GetHelpContext();
	CString GetHelpFile();
	CString GetSQLState();
	long GetSQLRetcode();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RDOERROR_H__BAD271DE_9804_11D1_9504_444553540000__INCLUDED_)
