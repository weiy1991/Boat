
// Boat.h : Boat Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CBoatApp:
// �йش����ʵ�֣������ Boat.cpp
//

class CBoatApp : public CWinApp
{
public:
	CBoatApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	COleTemplateServer m_server;
		// �����ĵ������ķ���������
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBoatApp theApp;
