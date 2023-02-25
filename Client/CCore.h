#pragma once

class CCore
{
	SINGLE(CCore)
private:
	HWND	m_hWnd;
	POINT	m_ptResolution;
	HDC		m_hDC;

public:
	int init(HWND _hWnd, POINT _ptResolution);	
	void progress();

private:
	void update();
	void render();

public:
	HWND GetMainHwnd() { return m_hWnd; }
};