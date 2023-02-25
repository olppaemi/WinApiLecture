#include "pch.h"
#include "CScene.h"

CScene::CScene()
{
}

CScene::~CScene()
{
}

void CScene::SetName(const wstring& _strName)
{
    m_strName = _strName;
}

const wstring& CScene::GetName()
{
    return m_strName;
}
