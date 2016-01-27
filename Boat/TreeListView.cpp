// TreeListView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Boat.h"
#include "TreeListView.h"


// CTreeListView

IMPLEMENT_DYNCREATE(CTreeListView, CFormView)

CTreeListView::CTreeListView()
	: CFormView(CTreeListView::IDD)
{

}

CTreeListView::~CTreeListView()
{
}

void CTreeListView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREEVIEWCTRL, m_treeCtrl);
}

BEGIN_MESSAGE_MAP(CTreeListView, CFormView)
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CTreeListView ���

#ifdef _DEBUG
void CTreeListView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CTreeListView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTreeListView ��Ϣ�������


void CTreeListView::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
	CFormView::ShowScrollBar(SB_VERT, FALSE);//False ��ʾ���ع�������true��ʾ��ʾ������
	CFormView::ShowScrollBar(SB_HORZ, FALSE);
	// TODO:  �ڴ˴������Ϣ����������
	if (GetSafeHwnd())
	{
		CRect rect;
		GetClientRect(&rect);
		if (m_treeCtrl.GetSafeHwnd())
			m_treeCtrl.MoveWindow(&rect);
	}
}


void CTreeListView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO:  �ڴ����ר�ô����/����û���
}
