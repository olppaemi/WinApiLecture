#pragma once

class CObject;

class CScene
{
public:
	CScene();
	virtual ~CScene();

	void SetName(const wstring& _strName);
	const wstring& GetName();

	void update();
	void render(HDC _dc);

	void AddObject(CObject* _pObj, GROUP_TYPE _eType);

	virtual void Enter() = 0;
	virtual void Exit() = 0;

private:
	vector<CObject*>	m_arrObj[(UINT)GROUP_TYPE::END];	// ������Ʈ�� ���� �� ������ ���͸� �׷� ������ŭ ����
	wstring				m_strName;	// Scene �̸�
};

