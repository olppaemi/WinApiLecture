#pragma once
class CTimeMgr
{
	SINGLE(CTimeMgr)
private:
	LARGE_INTEGER	m_llCurCount;
	LARGE_INTEGER	m_llPrevCount;
	LARGE_INTEGER	m_llFrequency;

	double			m_dDT; // ������ ������ �ð���
	double			m_dAcc;			// 1�� üũ�� ���� ���� �ð�
	UINT			m_iCallCount;	// �Լ� ȣ�� Ƚ��
	UINT			m_iFPS;			// �ʴ� ȣ�� Ƚ��
	// FPS
	// 1 �����Ӵ� �ð� (Delta Time)

public:
	void init();
	void update();

	double GetDT();
	float  GetfDT();
};

