// SplitterView.cpp : ʵ���ļ�
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


// CSplitterView ��ͼ

void CSplitterView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO:  �ڴ���ӻ��ƴ���
}


// CSplitterView ���

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


// CSplitterView ��Ϣ�������


void CSplitterView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	// TODO:  �ڴ˴������Ϣ����������
	m_wndSplitter.MoveWindow(-2, -2, cx + 4, cy + 4);
	m_wndSplitter.SetRowInfo(0, cy - (cy / 4), 0);
	m_wndSplitter.SetRowInfo(1, cy / 4, 20);
	m_wndSplitter.RecalcLayout();
}


int CSplitterView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	m_wndSplitter.CreateStatic(this, 1, 3);

	CCreateContext *pContext = (CCreateContext*)lpCreateStruct->lpCreateParams;

	m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS(CTreeListView), CSize(150, 0), pContext);
	m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS(CFileListView), CSize(0, 0), pContext);
	m_wndSplitter.CreateView(0, 2, RUNTIME_CLASS(CDataListView), CSize(0, 0), pContext);

	return 0;
}
