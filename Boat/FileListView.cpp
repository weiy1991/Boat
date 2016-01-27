// FileListView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Boat.h"
#include "FileListView.h"


// CFileListView

IMPLEMENT_DYNCREATE(CFileListView, CFormView)

CFileListView::CFileListView()
	: CFormView(CFileListView::IDD)
{

}

CFileListView::~CFileListView()
{
}

void CFileListView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTFILEVIEWCTRL, m_listFileCtrl);
}

BEGIN_MESSAGE_MAP(CFileListView, CFormView)
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CFileListView ���

#ifdef _DEBUG
void CFileListView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CFileListView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CFileListView ��Ϣ�������


void CFileListView::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);

	// TODO:  �ڴ˴������Ϣ����������
	CFormView::ShowScrollBar(SB_VERT, FALSE);//False ��ʾ���ع�������true��ʾ��ʾ������
	CFormView::ShowScrollBar(SB_HORZ, FALSE);
	if (GetSafeHwnd())
	{
		if (m_listFileCtrl.GetSafeHwnd())
		{
			CRect rect(0, 0, cx, cy);
			m_listFileCtrl.MoveWindow(&rect);
		}
	}
}


void CFileListView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO:  �ڴ����ר�ô����/����û���
	CRect rect;
	m_listFileCtrl.GetClientRect(&rect);

	/*m_listFileCtrl.InsertColumn(0, _T("�����ļ��б�"), LVCFMT_CENTER, 0, -1);
	m_listFileCtrl.InsertColumn(1, _T("�����ļ��б�"), LVCFMT_CENTER, rect.Width() / 2, -1);*/

}
