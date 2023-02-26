#include "pch.h"
#include "CScene_Start.h"

#include "CObject.h"
#include "CPlayer.h"
#include "CMonster.h"
#include "CCore.h"
#include "CPathMgr.h"
#include "CTexture.h"

CScene_Start::CScene_Start()
{
}

CScene_Start::~CScene_Start()
{
}

void CScene_Start::Enter()
{
	// Texture 로딩하기
	CTexture* pTex = new CTexture;

	wstring strFilePath = CPathMgr::GetInst()->GetConentPath();
	strFilePath += L"texture\\Player.bmp";
	pTex->Load(strFilePath);

	delete pTex;

	// Player Object 추가
	CObject* pObj = new CPlayer;
	pObj->SetPos(Vec2(640, 384));
	pObj->SetScale(Vec2(100, 100));
	AddObject(pObj, GROUP_TYPE::DEFAULT);

	// 몬스터 배치
	int iMonCount = 16;
	float fMoveDist = 25;
	float fObjectScale = 50.f;

	Vec2 vResolution = CCore::GetInst()->GetResolution();
	CMonster* pMonsterObj = nullptr;

	float fTerm = (vResolution.x - ((fMoveDist + fObjectScale / 2.f) * 2)) / (iMonCount - 1);

	for (int i = 0; i < iMonCount; ++i)
	{
		// Monster Object 추가
		pMonsterObj = new CMonster;
		pMonsterObj->SetPos(Vec2(fMoveDist + fObjectScale / 2.f + (float)i * fTerm, 50.f));
		pMonsterObj->SetCenterPos(pMonsterObj->GetPos());
		pMonsterObj->SetMoveDistance(fMoveDist);
		pMonsterObj->SetScale(Vec2(fObjectScale, fObjectScale));
		AddObject(pMonsterObj, GROUP_TYPE::DEFAULT);
	}
}

void CScene_Start::Exit()
{
}
