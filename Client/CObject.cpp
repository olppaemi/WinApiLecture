#include "pch.h"
#include "CObject.h"
#include "CKeyMgr.h"
#include "CTimeMgr.h"
#include "CCollider.h"

CObject::CObject()
	: m_vPos{}
	, m_vScale{}
	, m_pCollider(nullptr)
{
}

CObject::~CObject()
{
	if (m_pCollider != nullptr)
		delete m_pCollider;
}

void CObject::SetPos(Vec2 _vPos)
{
	m_vPos = _vPos;
}

void CObject::SetScale(Vec2 _vScale)
{
	m_vScale = _vScale;
}

Vec2 CObject::GetPos()
{
	return m_vPos;
}

Vec2 CObject::GetScale()
{
	return m_vScale;
}

CCollider* CObject::GetCollider()
{
	return m_pCollider;
}

void CObject::finalupdate()
{
	if (m_pCollider)
		m_pCollider->finalupdate();
}

void CObject::render(HDC _dc)
{
	Rectangle(
		_dc, 
		(int)(m_vPos.x - m_vScale.x / 2.f), 
		(int)(m_vPos.y - m_vScale.y / 2.f), 
		(int)(m_vPos.x + m_vScale.x / 2.f), 
		(int)(m_vPos.y + m_vScale.y / 2.f)
	);

	ComponentRender(_dc);
}

void CObject::CreateCollider()
{
	m_pCollider = new CCollider(this);
}

void CObject::ComponentRender(HDC _dc)
{
	if (m_pCollider != nullptr)
	{
		m_pCollider->render(_dc);
	}
}
