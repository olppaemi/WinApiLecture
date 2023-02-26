#include "pch.h"
#include "CRes.h"

const wstring& CRes::GetKey()
{
	return m_strKey;
}

const wstring& CRes::GetRelativePath()
{
	return m_strRelativePath;
}

void CRes::SetKey(const wstring& _strKey)
{
	m_strKey = _strKey;
}

void CRes::SetRelativePath(const wstring& _strPath)
{
	m_strRelativePath = _strPath;
}

CRes::CRes()
{
}

CRes::~CRes()
{
}
