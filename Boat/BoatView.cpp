
// BoatView.cpp : CBoatView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CBoatView ����/����

CBoatView::CBoatView()
{
	// TODO:  �ڴ˴���ӹ������

}

CBoatView::~CBoatView()
{
}

BOOL CBoatView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CBoatView ����

void CBoatView::OnDraw(CDC* /*pDC*/)
{
	CBoatDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CBoatView ��ӡ

BOOL CBoatView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CBoatView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CBoatView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CBoatView ���

#ifdef _DEBUG
void CBoatView::AssertValid() const
{
	CView::AssertValid();
}

void CBoatView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBoatDoc* CBoatView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBoatDoc)));
	return (CBoatDoc*)m_pDocument;
}
#endif //_DEBUG


// CBoatView ��Ϣ�������
