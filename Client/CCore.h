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

	HBRUSH	GetBrush(BRUSH_TYPE _eType);
	HPEN	GetPen(PEN_TYPE _eType);

	void	CreateBrushPen();

private:
	HWND	m_hWnd;				// 메인 윈도우 핸들
	POINT	m_ptResolution;		// 메인 윈도우 해상도
	HDC		m_hDC;				// 메인 윈도우 Draw할 DC

	HBITMAP m_hBit;
	HDC		m_memDC;

	// 자주 사용하는 GDI Object
	HBRUSH	m_arrBrush[(UINT)BRUSH_TYPE::END];
	HPEN	m_arrPen[(UINT)PEN_TYPE::END];
};