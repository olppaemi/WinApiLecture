#pragma once
class CObject
{
public:
	CObject();
	virtual ~CObject();

	void SetPos(Vec2 _vPos);
	void SetScale(Vec2 _vScale);

	Vec2 GetPos();
	Vec2 GetScale();

	void update();
	void render(HDC _dc);

private:
	Vec2	m_vPos;
	Vec2	m_vScale;
};

