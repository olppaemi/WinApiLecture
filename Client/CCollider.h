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
	CObject*	m_pOwner;		// Collider를 소유학오 있는 오브젝트
	Vec2		m_vOffsetPos;	// 오브젝트로부터 상대적인 위치
	Vec2		m_vFinalPos;	// finalupdate 에서 매 프레임마다 계산

	Vec2		m_vScale;		// 충돌체의 크기

};

