#pragma once
#include "CObject.h"

class CMissile :
    public CObject
{
public:
    CMissile();
    ~CMissile();

    void SetDir(Vec2 _vDir);

    virtual void update();
    virtual void render(HDC _dc);

private:
    Vec2    m_vDir;
};

