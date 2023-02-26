#include "pch.h"
#include "CPathMgr.h"

#include "CCore.h"

CPathMgr::CPathMgr()
	: m_szCountentPath{}
{
}

CPathMgr::~CPathMgr()
{
}

void CPathMgr::init()
{
	GetCurrentDirectory(255, m_szCountentPath);

	size_t iLen = wcslen(m_szCountentPath);

	// 상위 폴더로
	for (size_t i = iLen - 1; i >= 0; --i)
	{
		if ('\\' == m_szCountentPath[i])
		{
			m_szCountentPath[i] = '\0';
			break;
		}
	}

	wcscat_s(m_szCountentPath, 255, L"\\bin\\content\\");

	//SetWindowText(CCore::GetInst()->GetMainHwnd(), m_szCountentPath);
}

LPCWCHAR CPathMgr::GetConentPath()
{
	return m_szCountentPath;
}

