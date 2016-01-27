
// MainFrm.cpp : CMainFrame ���ʵ��
//

#include "stdafx.h"
#include "Boat.h"

#include "MainFrm.h"

#include "DataListView.h"
#include "FileListView.h"
#include "TreeListView.h"
#include "SplitterView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ״̬��ָʾ��
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame ����/����

CMainFrame::CMainFrame()
{
	// TODO:  �ڴ���ӳ�Ա��ʼ������
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("δ�ܴ���������\n");
		return -1;      // δ�ܴ���
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("δ�ܴ���״̬��\n");
		return -1;      // δ�ܴ���
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO:  �������Ҫ��ͣ������������ɾ��������
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/,
	CCreateContext* pContext)
{
	if (!m_wndSplitter.CreateStatic(this, 1, 3))
	{
		TRACE0("Failed to create splitter window\n");
		return FALSE;
	}

	// Get the client rect first for calc left pane size
	CRect rect;
	GetClientRect(&rect);

	// create the left tree view first.
	if (!m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS(CTreeListView), CSize(rect.Width() / 4, 0), pContext))
	{
		TRACE0("Failed to create tree list view\n");
		return FALSE;
	}

	if (!m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS(CFileListView), CSize(rect.Width() / 4, 0), pContext))
	{
		TRACE0("Failed to create file list view\n");
		return FALSE;
	}

	if (!m_wndSplitter.CreateView(0, 2, RUNTIME_CLASS(CDataListView), CSize(0, 0), pContext))
	{
		TRACE0("Failed to create data list view\n");
		return FALSE;
	}

	// Set the tree view as the active view
	SetActiveView((CView*)m_wndSplitter.GetPane(0, 0));

	return TRUE;
	/*return m_wndSplitter.Create(this,
		2, 2,               // TODO:  ��������������
		CSize(10, 10),      // TODO:  ������С�����С
		pContext);*/
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return TRUE;
}

// CMainFrame ���

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame ��Ϣ�������

