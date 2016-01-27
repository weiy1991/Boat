#pragma once
#include "afxcmn.h"



// CFileListView ������ͼ

class CFileListView : public CFormView
{
	DECLARE_DYNCREATE(CFileListView)

protected:
	CFileListView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listFileCtrl;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual void OnInitialUpdate();
};


