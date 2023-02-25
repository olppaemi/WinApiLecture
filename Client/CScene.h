#pragma once

class CObject;

class CScene
{
public:
	CScene();
	virtual ~CScene();

	void SetName(const wstring& _strName);
	const wstring& GetName();

private:
	vector<CObject*>	m_arrObj[(UINT)GROUP_TYPE::END];	// 오브젝트를 저장 및 관리할 벡터를 그룹 개수만큼 선언
	wstring				m_strName;	// Scene 이름
};

