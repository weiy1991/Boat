#pragma once
#include "afxcmn.h"



// CDataListView 窗体视图

class CDataListView : public CFormView
{
	DECLARE_DYNCREATE(CDataListView)

protected:
	CDataListView();           // 动态创建所使用的受保护的构造函数
	virtual ~CDataListView();

public:
	enum { IDD = IDD_DATAVIEW };
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
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual void OnInitialUpdate();
	CListCtrl m_listDataCtrl;
};


