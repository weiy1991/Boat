#pragma once
#include "afxcmn.h"



// CTreeListView 窗体视图

class CTreeListView : public CFormView
{
	DECLARE_DYNCREATE(CTreeListView)

protected:
	CTreeListView();           // 动态创建所使用的受保护的构造函数
	virtual ~CTreeListView();

public:
	enum { IDD = IDD_TREEVIEW };
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
	CTreeCtrl m_treeCtrl;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual void OnInitialUpdate();
};


