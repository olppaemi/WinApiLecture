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
	vector<CObject*>	m_arrObj[(UINT)GROUP_TYPE::END];	// ������Ʈ�� ���� �� ������ ���͸� �׷� ������ŭ ����
	wstring				m_strName;	// Scene �̸�
};

