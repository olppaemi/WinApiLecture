#pragma once

class CScene;

class CSceneMgr
{
	SINGLE(CSceneMgr)
public:
	void init();
	void update();
	void render(HDC _dc);

	CScene* GetCurScene();

private:
	CScene* m_arrScene[(UINT)SCENE_TYPE::END];	// ��� �� ���
	CScene* m_pCurScene;
};

