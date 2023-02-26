#pragma once

class CCollider;

class CObject
{
public:
	CObject();
	virtual ~CObject();

	void SetPos(Vec2 _vPos);
	void SetScale(Vec2 _vScale);

	Vec2 GetPos();
	Vec2 GetScale();

	CCollider* GetCollider();

	void CreateCollider();

	void ComponentRender(HDC _dc);

public:
	virtual void update() = 0;
	virtual void finalupdate() final;
	virtual void render(HDC _dc);

private:
	Vec2	m_vPos;
	Vec2	m_vScale;

	CCollider* m_pCollider;
};

