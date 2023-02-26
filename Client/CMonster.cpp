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

	// ���� �������� �ð��� m_fSpeend ��ŭ �̵�
	vCurPos.x += fDT * m_fSpeed * m_iDir;

	// ��ȸ �Ÿ� ���ط��� �Ѿ���� �˻�
	float fDist = abs(m_vCenterPos.x - vCurPos.x) - m_fMaxDistance;
	if (0.f < fDist)
	{
		// ���� ����
		m_iDir *= -1;
		vCurPos.x += fDist * m_iDir;

	}

	SetPos(vCurPos);
}
