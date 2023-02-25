#pragma once

class CCore
{
	SINGLE(CCore)
public:
	int		init(HWND _hWnd, POINT _ptResolution);	
	void	progress();
	HWND	GetMainHwnd();
	POINT	GetResolution();

private:
	HWND	m_hWnd;				// ���� ������ �ڵ�
	POINT	m_ptResolution;		// ���� ������ �ػ�
	HDC		m_hDC;				// ���� ������ Draw�� DC

	HBITMAP m_hBit;
	HDC		m_memDC;
};