#pragma once


// CSplitterView ��ͼ

class CSplitterView : public CView
{
	DECLARE_DYNCREATE(CSplitterView)

protected:
	CSplitterView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CSplitterView();

public:
	CSplitterWnd m_wndSplitter;

public:
	virtual void OnDraw(CDC* pDC);      // ��д�Ի��Ƹ���ͼ
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


