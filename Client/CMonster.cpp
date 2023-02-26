#include "pch.h"
#include "CMonster.h"

#include "CTimeMgr.h"

CMonster::CMonster()
	: m_vCenterPos(Vec2(0.f, 0.f))
	, m_fSpeed(100.f)
	, m_fMaxDistance(50.f)
	, m_iDir(1)
{
	CreateCollider();
}

CMonster::~CMonster()
{
}

float CMonster::GetSpeed()
{
	return m_fSpeed;
}

void CMonster::SetSpeend(float _fSpeed)
{
	m_fSpeed = _fSpeed;
}

void CMonster::SetMoveDistance(float _f)
{
	m_fMaxDistance = _f;
}

void CMonster::SetCenterPos(Vec2 _vPos)
{
	m_vCenterPos = _vPos;
}

void CMonster::update()
{
	Vec2 vCurPos = GetPos();

	// 진행 방향으로 시간당 m_fSpeend 만큼 이동
	vCurPos.x += fDT * m_fSpeed * m_iDir;

	// 배회 거리 기준량을 넘어섰는지 검사
	float fDist = abs(m_vCenterPos.x - vCurPos.x) - m_fMaxDistance;
	if (0.f < fDist)
	{
		// 방향 변경
		m_iDir *= -1;
		vCurPos.x += fDist * m_iDir;

	}

	SetPos(vCurPos);
}
