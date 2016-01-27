// SplitterView.cpp : 实现文件
//

#include "stdafx.h"
#include "Boat.h"
#include "SplitterView.h"

#include "TreeListView.h"
#include "FileListView.h"
#include "DataListView.h"

// CSplitterView

IMPLEMENT_DYNCREATE(CSplitterView, CView)

CSplitterView::CSplitterView()
{

}

CSplitterView::~CSplitterView()
{
}

BEGIN_MESSAGE_MAP(CSplitterView, CView)
	ON_WM_SIZE()
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CSplitterView 绘图

void CSplitterView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO:  在此添加绘制代码
}


// CSplitterView 诊断

#ifdef _DEBUG
void CSplitterView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CSplitterView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CSplitterView 消息处理程序


void CSplitterView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	// TODO:  在此处添加消息处理程序代码
	m_wndSplitter.MoveWindow(-2, -2, cx + 4, cy + 4);
	m_wndSplitter.SetRowInfo(0, cy - (cy / 4), 0);
	m_wndSplitter.SetRowInfo(1, cy / 4, 20);
	m_wndSplitter.RecalcLayout();
}


int CSplitterView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_wndSplitter.CreateStatic(this, 1, 3);

	CCreateContext *pContext = (CCreateContext*)lpCreateStruct->lpCreateParams;

	m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS(CTreeListView), CSize(150, 0), pContext);
	m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS(CFileListView), CSize(0, 0), pContext);
	m_wndSplitter.CreateView(0, 2, RUNTIME_CLASS(CDataListView), CSize(0, 0), pContext);

	return 0;
}
