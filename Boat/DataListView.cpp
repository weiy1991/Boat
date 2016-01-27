// DataListView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Boat.h"
#include "DataListView.h"


// CDataListView

IMPLEMENT_DYNCREATE(CDataListView, CFormView)

CDataListView::CDataListView()
	: CFormView(CDataListView::IDD)
{

}

CDataListView::~CDataListView()
{
}

void CDataListView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTDATAVIEWCTRL, m_listDataCtrl);
}

BEGIN_MESSAGE_MAP(CDataListView, CFormView)
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CDataListView ���

#ifdef _DEBUG
void CDataListView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CDataListView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CDataListView ��Ϣ�������


void CDataListView::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);

	// TODO:  �ڴ˴������Ϣ����������
	CFormView::ShowScrollBar(SB_VERT, FALSE);
	CFormView::ShowScrollBar(SB_HORZ, FALSE);
	//�༭���봰�ڴ�Сһ��
	if (GetSafeHwnd())
	{
		if (m_listDataCtrl.GetSafeHwnd())
		{
			CRect rect(0, 0, cx, cy);
			m_listDataCtrl.MoveWindow(&rect);
		}
	}
}


void CDataListView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO:  �ڴ����ר�ô����/����û���
	CRect rect;
	m_listDataCtrl.GetClientRect(&rect);

	//m_listdataCtrl.InsertColumn(0, "������ʾ", LVCFMT_CENTER, rect.Width());
}
