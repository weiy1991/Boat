
// BoatDoc.cpp : CBoatDoc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Boat.h"
#endif

#include "BoatDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CBoatDoc

IMPLEMENT_DYNCREATE(CBoatDoc, CDocument)

BEGIN_MESSAGE_MAP(CBoatDoc, CDocument)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CBoatDoc, CDocument)
END_DISPATCH_MAP()

// 注意: 我们添加了对 IID_IBoat 的支持
//  以支持来自 VBA 的类型安全绑定。  此 IID 必须同附加到 .IDL 文件中的
//  调度接口的 GUID 匹配。

// {80DDB29D-E69E-4BAA-A0A5-1AE8B9A885AA}
static const IID IID_IBoat =
{ 0x80DDB29D, 0xE69E, 0x4BAA, { 0xA0, 0xA5, 0x1A, 0xE8, 0xB9, 0xA8, 0x85, 0xAA } };

BEGIN_INTERFACE_MAP(CBoatDoc, CDocument)
	INTERFACE_PART(CBoatDoc, IID_IBoat, Dispatch)
END_INTERFACE_MAP()


// CBoatDoc 构造/析构

CBoatDoc::CBoatDoc()
{
	// TODO:  在此添加一次性构造代码

	EnableAutomation();

	AfxOleLockApp();
}

CBoatDoc::~CBoatDoc()
{
	AfxOleUnlockApp();
}

BOOL CBoatDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO:  在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CBoatDoc 序列化

void CBoatDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO:  在此添加存储代码
	}
	else
	{
		// TODO:  在此添加加载代码
	}
}

#ifdef SHARED_HANDLERS

// 缩略图的支持
void CBoatDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// 搜索处理程序的支持
void CBoatDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void CBoatDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CBoatDoc 诊断

#ifdef _DEBUG
void CBoatDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBoatDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CBoatDoc 命令
