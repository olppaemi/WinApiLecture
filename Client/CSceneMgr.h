#pragma once

class CScene;

class CSceneMgr
{
	SINGLE(CSceneMgr)
public:
	void init();

private:
	CScene* m_arrScene[(UINT)SCENE_TYPE::END];	// ��� �� ���
	CScene* m_pCurScene;
};

