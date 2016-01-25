
// BoatDoc.cpp : CBoatDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// ע��: ��������˶� IID_IBoat ��֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡�  �� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {80DDB29D-E69E-4BAA-A0A5-1AE8B9A885AA}
static const IID IID_IBoat =
{ 0x80DDB29D, 0xE69E, 0x4BAA, { 0xA0, 0xA5, 0x1A, 0xE8, 0xB9, 0xA8, 0x85, 0xAA } };

BEGIN_INTERFACE_MAP(CBoatDoc, CDocument)
	INTERFACE_PART(CBoatDoc, IID_IBoat, Dispatch)
END_INTERFACE_MAP()


// CBoatDoc ����/����

CBoatDoc::CBoatDoc()
{
	// TODO:  �ڴ����һ���Թ������

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

	// TODO:  �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CBoatDoc ���л�

void CBoatDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO:  �ڴ���Ӵ洢����
	}
	else
	{
		// TODO:  �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CBoatDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
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

// ������������֧��
void CBoatDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
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

// CBoatDoc ���

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


// CBoatDoc ����
