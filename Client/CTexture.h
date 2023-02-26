#pragma once
#include "CRes.h"
class CTexture :
    public CRes
{
public:
    void Load(const wstring& _strFilePath);

private:
    HDC m_hdc;
    HBITMAP m_hBit;
public:
    CTexture();
    ~CTexture();
};

