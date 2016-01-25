
// BoatView.h : CBoatView ��Ľӿ�
//

#pragma once


class CBoatView : public CView
{
protected: // �������л�����
	CBoatView();
	DECLARE_DYNCREATE(CBoatView)

// ����
public:
	CBoatDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CBoatView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // BoatView.cpp �еĵ��԰汾
inline CBoatDoc* CBoatView::GetDocument() const
   { return reinterpret_cast<CBoatDoc*>(m_pDocument); }
#endif

