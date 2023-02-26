#pragma once
class CRes
{
public:
	const wstring& GetKey();
	const wstring& GetRelativePath();

	void SetKey(const wstring& _strKey);
	void SetRelativePath(const wstring& _strPath);

private:
	wstring m_strKey;				// 리소스 키
	wstring m_strRelativePath;		// 리소스 상대경로

public:
	CRes();
	~CRes();
};

