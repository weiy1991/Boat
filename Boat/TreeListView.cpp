// TreeListView.cpp : 实现文件
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


// CTreeListView 诊断

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


// CTreeListView 消息处理程序


void CTreeListView::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
	CFormView::ShowScrollBar(SB_VERT, FALSE);//False 表示隐藏滚动条，true表示显示滚动条
	CFormView::ShowScrollBar(SB_HORZ, FALSE);
	// TODO:  在此处添加消息处理程序代码
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

	// TODO:  在此添加专用代码和/或调用基类
}
