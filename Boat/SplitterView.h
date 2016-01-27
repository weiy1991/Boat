#pragma once


// CSplitterView 视图

class CSplitterView : public CView
{
	DECLARE_DYNCREATE(CSplitterView)

protected:
	CSplitterView();           // 动态创建所使用的受保护的构造函数
	virtual ~CSplitterView();

public:
	CSplitterWnd m_wndSplitter;

public:
	virtual void OnDraw(CDC* pDC);      // 重写以绘制该视图
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


