// DataListView.cpp : 实现文件
//

#include "stdafx.h"
#include "Boat.h"
#include "DataListView.h"


// CDataListView

IMPLEMENT_DYNCREATE(CDataListView, CFormView)

CDataListView::CDataListView()
	: CFormView(CDataListView::IDD)
{

}

CDataListView::~CDataListView()
{
}

void CDataListView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTDATAVIEWCTRL, m_listDataCtrl);
}

BEGIN_MESSAGE_MAP(CDataListView, CFormView)
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CDataListView 诊断

#ifdef _DEBUG
void CDataListView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CDataListView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CDataListView 消息处理程序


void CDataListView::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);

	// TODO:  在此处添加消息处理程序代码
	CFormView::ShowScrollBar(SB_VERT, FALSE);
	CFormView::ShowScrollBar(SB_HORZ, FALSE);
	//编辑框与窗口大小一样
	if (GetSafeHwnd())
	{
		if (m_listDataCtrl.GetSafeHwnd())
		{
			CRect rect(0, 0, cx, cy);
			m_listDataCtrl.MoveWindow(&rect);
		}
	}
}


void CDataListView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO:  在此添加专用代码和/或调用基类
	CRect rect;
	m_listDataCtrl.GetClientRect(&rect);

	//m_listdataCtrl.InsertColumn(0, "数据显示", LVCFMT_CENTER, rect.Width());
}
