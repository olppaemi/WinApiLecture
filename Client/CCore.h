#pragma once

class CCore
{
	SINGLE(CCore)
public:
	int		init(HWND _hWnd, POINT _ptResolution);	
	void	progress();
	HWND	GetMainHwnd();
	POINT	GetResolution();
	HDC		GetMainDC();

private:
	HWND	m_hWnd;				// 메인 윈도우 핸들
	POINT	m_ptResolution;		// 메인 윈도우 해상도
	HDC		m_hDC;				// 메인 윈도우 Draw할 DC

	HBITMAP m_hBit;
	HDC		m_memDC;
};