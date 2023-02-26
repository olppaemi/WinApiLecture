#pragma once
#include "CRes.h"
class CTexture :
    public CRes
{
public:
    void Load(const wstring& _strFilePath);
    UINT Width();
    UINT Height();
    HDC GetDC();

private:
    HDC m_hdc;
    HBITMAP m_hBit;
    BITMAP m_bitInfo;

private:
    CTexture();
    ~CTexture();

    friend class CResMgr;
};

