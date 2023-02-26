#pragma once

class CObject;

class CCollider
{
	friend class CObject;

public:
	CCollider(CObject* _pOwwner);
	~CCollider();

	void finalupdate();
	
	Vec2 GetOffsetPos();
	Vec2 GetScale();
	
	void SetOffsetPos(Vec2 _pos);
	void SetScale(Vec2 _vScale);

	void render(HDC _dc);

private:
	CObject*	m_pOwner;		// Collider�� �����п� �ִ� ������Ʈ
	Vec2		m_vOffsetPos;	// ������Ʈ�κ��� ������� ��ġ
	Vec2		m_vFinalPos;	// finalupdate ���� �� �����Ӹ��� ���

	Vec2		m_vScale;		// �浹ü�� ũ��

};

