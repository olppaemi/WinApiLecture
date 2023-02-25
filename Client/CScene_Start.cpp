#include "pch.h"
#include "CScene_Start.h"

#include "CObject.h"

CScene_Start::CScene_Start()
{
}

CScene_Start::~CScene_Start()
{
}

void CScene_Start::Enter()
{
	// Object Ãß°¡
	CObject* pObj = new CObject;

	pObj->SetPos(Vec2(640, 384));
	pObj->SetScale(Vec2(100, 100));

	AddObject(pObj, GROUP_TYPE::DEFAULT);
	
}

void CScene_Start::Exit()
{
}
