#pragma once
#include "CObject.h"

class CMissile :
    public CObject
{
public:
    CMissile();
    ~CMissile();

    void SetDir(bool _bUp);

    virtual void update();
    virtual void render(HDC _dc);

private:
    float     m_fDir; // ��, �Ʒ� ����
};

