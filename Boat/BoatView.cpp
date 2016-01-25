
// BoatView.cpp : CBoatView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Boat.h"
#endif

#include "BoatDoc.h"
#include "BoatView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBoatView

IMPLEMENT_DYNCREATE(CBoatView, CView)

BEGIN_MESSAGE_MAP(CBoatView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CBoatView 构造/析构

CBoatView::CBoatView()
{
	// TODO:  在此处添加构造代码

}

CBoatView::~CBoatView()
{
}

BOOL CBoatView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CBoatView 绘制

void CBoatView::OnDraw(CDC* /*pDC*/)
{
	CBoatDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CBoatView 打印

BOOL CBoatView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CBoatView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CBoatView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CBoatView 诊断

#ifdef _DEBUG
void CBoatView::AssertValid() const
{
	CView::AssertValid();
}

void CBoatView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBoatDoc* CBoatView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBoatDoc)));
	return (CBoatDoc*)m_pDocument;
}
#endif //_DEBUG


// CBoatView 消息处理程序
