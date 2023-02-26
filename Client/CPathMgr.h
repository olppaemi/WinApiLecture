#pragma once
class CPathMgr
{
	SINGLE(CPathMgr)
public:
	void init();
	LPCWCHAR GetContentPath();

private:
	WCHAR	m_szContentPath[255];
};

