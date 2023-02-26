#include "pch.h"
#include "CMissile.h"
#include "CTimeMgr.h"

CMissile::CMissile()
	: m_vDir(Vec2(0.f, -1.f))
{
}

CMissile::~CMissile()
{
}

void CMissile::SetDir(Vec2 _vDir)
{
	_vDir.Normalize();
	m_vDir = _vDir;
}

void CMissile::update()
{
	Vec2 vPos = GetPos();

	vPos.x += 600.f * m_vDir.x * fDT;
	vPos.y += 600.f * m_vDir.y * fDT;

	SetPos(vPos);
}

void CMissile::render(HDC _dc)
{
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();

	Ellipse(
		_dc,
		(int)(vPos.x - vScale.x / 2.f),
		(int)(vPos.y - vScale.y / 2.f),
		(int)(vPos.x + vScale.x / 2.f),
		(int)(vPos.y + vScale.y / 2.f)
	);
}
