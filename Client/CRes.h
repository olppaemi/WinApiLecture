#pragma once
class CRes
{
public:
	const wstring& GetKey();
	const wstring& GetRelativePath();

	void SetKey(const wstring& _strKey);
	void SetRelativePath(const wstring& _strPath);

private:
	wstring m_strKey;				// ���ҽ� Ű
	wstring m_strRelativePath;		// ���ҽ� �����

public:
	CRes();
	~CRes();
};

