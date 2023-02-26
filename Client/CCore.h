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
	HWND	m_hWnd;				// ���� ������ �ڵ�
	POINT	m_ptResolution;		// ���� ������ �ػ�
	HDC		m_hDC;				// ���� ������ Draw�� DC

	HBITMAP m_hBit;
	HDC		m_memDC;

	// ���� ����ϴ� GDI Object
	HBRUSH	m_arrBrush[(UINT)BRUSH_TYPE::END];
	HPEN	m_arrPen[(UINT)PEN_TYPE::END];
};