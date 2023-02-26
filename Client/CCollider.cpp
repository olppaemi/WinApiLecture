#include "pch.h"
#include "CCollider.h"

#include "CObject.h"
#include "CCore.h"

#include "SelectGDI.h"

CCollider::CCollider(CObject* _pOwner)
	:m_pOwner(nullptr)
{
	m_pOwner = _pOwner;
}

CCollider::~CCollider()
{

}

void CCollider::finalupdate()
{
	// Object의 위치를 따라간다.	
	Vec2 vObjectPos = m_pOwner->GetPos();
	m_vFinalPos = vObjectPos + m_vOffsetPos;
}

Vec2 CCollider::GetOffsetPos()
{
	return m_vOffsetPos;
}

Vec2 CCollider::GetScale()
{
	return m_vScale;
}

void CCollider::SetOffsetPos(Vec2 _pos)
{
	m_vOffsetPos = _pos;
}

void CCollider::SetScale(Vec2 _vScale)
{
	m_vScale = _vScale;
}

void CCollider::render(HDC _dc)
{
	SelectGDI p(_dc, PEN_TYPE::RED);
	SelectGDI b(_dc, BRUSH_TYPE::HOLLOW);

	/*HPEN hGreenPen = CCore::GetInst()->GetPen(PEN_TYPE::RED);
	HPEN hDefaultPen = (HPEN)SelectObject(_dc, hGreenPen);*/

	Rectangle(
		_dc,
		(int)(m_vFinalPos.x - m_vScale.x / 2.f),
		(int)(m_vFinalPos.y - m_vScale.y / 2.f),
		(int)(m_vFinalPos.x + m_vScale.x / 2.f),
		(int)(m_vFinalPos.y + m_vScale.y / 2.f)
	);

	//SelectObject(_dc, hDefaultPen);

}
