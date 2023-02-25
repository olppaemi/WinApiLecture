#pragma once
#include "CObject.h"

class CMissile :
    public CObject
{
public:
    CMissile();
    ~CMissile();

    void SetDir(float _fTheta);

    virtual void update();
    virtual void render(HDC _dc);

private:
    float     m_fTheta; // 이동 방향
};

