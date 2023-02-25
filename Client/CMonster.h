#pragma once
#include "CObject.h"
class CMonster :
    public CObject
{
public:
    CMonster();
    ~CMonster();

    float GetSpeed();
    void SetSpeend(float _fSpeed);
    void SetMoveDistance(float _f);
    void SetCenterPos(Vec2 _vPos);

    virtual void update();

private:
    Vec2    m_vCenterPos;
    float   m_fSpeed;
    float   m_fMaxDistance;
    int		m_iDir;
};

