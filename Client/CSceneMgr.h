#pragma once

class CScene;

class CSceneMgr
{
	SINGLE(CSceneMgr)
public:
	void init();

private:
	CScene* m_arrScene[(UINT)SCENE_TYPE::END];	// ¸ðµç ¾À ¸ñ·Ï
	CScene* m_pCurScene;
};

