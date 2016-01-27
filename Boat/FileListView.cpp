// FileListView.cpp : 实现文件
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


// CFileListView 诊断

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


// CFileListView 消息处理程序


void CFileListView::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);

	// TODO:  在此处添加消息处理程序代码
	CFormView::ShowScrollBar(SB_VERT, FALSE);//False 表示隐藏滚动条，true表示显示滚动条
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

	// TODO:  在此添加专用代码和/或调用基类
	CRect rect;
	m_listFileCtrl.GetClientRect(&rect);

	/*m_listFileCtrl.InsertColumn(0, _T("数据文件列表"), LVCFMT_CENTER, 0, -1);
	m_listFileCtrl.InsertColumn(1, _T("数据文件列表"), LVCFMT_CENTER, rect.Width() / 2, -1);*/

}
