#pragma once
#include "afxcmn.h"



// CFileListView 窗体视图

class CFileListView : public CFormView
{
	DECLARE_DYNCREATE(CFileListView)

protected:
	CFileListView();           // 动态创建所使用的受保护的构造函数
	virtual ~CFileListView();

public:
	enum { IDD = IDD_FILEVIEW };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listFileCtrl;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual void OnInitialUpdate();
};


