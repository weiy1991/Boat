#pragma once
#include "afxcmn.h"



// CDataListView ������ͼ

class CDataListView : public CFormView
{
	DECLARE_DYNCREATE(CDataListView)

protected:
	CDataListView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual void OnInitialUpdate();
	CListCtrl m_listDataCtrl;
};


