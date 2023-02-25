#include "pch.h"
#include "CScene.h"
#include "CObject.h"

CScene::CScene()
{
}

CScene::~CScene()
{
    for (UINT i = 0; i < (UINT)GROUP_TYPE::END; i++)
    {
        for (size_t j = 0; j < m_arrObj[i].size(); j++)
        {
            delete m_arrObj[i][j];
        }
    }
}

void CScene::SetName(const wstring& _strName)
{
    m_strName = _strName;
}

const wstring& CScene::GetName()
{
    return m_strName;
}

void CScene::update()
{
    for (UINT i = 0; i < (UINT)GROUP_TYPE::END; ++i)
    {
        for (size_t j = 0; j < m_arrObj[i].size(); ++j)
        {
            m_arrObj[i][j]->update();
        }
    }
}

void CScene::render(HDC _dc)
{
    for (UINT i = 0; i < (UINT)GROUP_TYPE::END; ++i)
    {
        for (size_t j = 0; j < m_arrObj[i].size(); ++j)
        {
            m_arrObj[i][j]->render(_dc);
        }
    }
}

void CScene::AddObject(CObject* _pObj, GROUP_TYPE _eType)
{
    m_arrObj[(UINT)_eType].push_back(_pObj);
}
