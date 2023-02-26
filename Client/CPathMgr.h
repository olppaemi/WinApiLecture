#pragma once
class CPathMgr
{
	SINGLE(CPathMgr)
public:
	void init();
	LPCWCHAR GetConentPath();

private:
	WCHAR	m_szCountentPath[255];
};

