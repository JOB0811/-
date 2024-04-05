#pragma once
#include<iostream>


using std::cout;
using std::cin;
using std::endl;

#pragma region ����� ���� �ڷ���
/*

�� ����� ���� �ڷ����̶�?

- ������ �����ϴ� �ڷ����� ����Ͽ� ���ο� �ڷ����� ������ ����� ����̶�� �� �� �ִ�.
�� ����� ���� �ڷ����� Ȱ���ϸ� Ư�� �������� ������ ǥ���ϴ� ���� �����ϴ�.


- ����� ���� �ڷ����� ����

- ����ü
�� Ư�� �������� ������ �����ϴ� �ڷ���
- ������
�� ������ �����ϴ� �ڷ���
- ����ü
�� Ư�� �ɺ��� ���(?)�� �����ϴ� �ڷ���
- Ŭ����(C: ����ü / C++: Ŭ���� (����ü Ȯ��))
�� OOP���� Ư�� ��ü�� �����ϰ� �����ϴ� �ڷ���


�� ����ü

- �ϳ� �̻��� ������ ��� ���ο� �ڷ����� �����ϴ� ������� �� �� �ִ�.

- C++���� Ŭ������ ���ԵǾ����� C������ ȣȯ�� ������ ����ü�� �״�� ����� �� �ִ�.

- ���� C++ ����ü�� C����� ����ü�� ����� Ȯ���Ͽ� ������ Ŭ������ ������ ������ ����� ������.

EX)
struct STunityData
{
	int m_nID;
	int m_nLevel;

};
�� ������

- �������� ������ ����� ���ų� ���������鿡�� ȿ�������� �������� �����ϰ� ������ ����� �ȴ�.
- ��, ���� �����Ͷ�� �ϴ��� �⺻������ �������� / ���������� ������ ���� �� ����.

EX)
enum EUnitType
{
	UINT_TYPE_A,
	UINT_TYPE_B,
	UINT_TYPE_C

}

�� ����ġ�� ������ ����.



�� ����ü

- 1���� �޸� ������ �������� �����Ͱ� ������ �� �ִ� �ڷ���

- �⺻������ ���� ū �������� ũ��� �޸𸮰� �Ҵ��� �ȴ�.

EX)
union STunityData
{
	int m_nID;
	int m_nLevel;

};



�� Ŭ����

EX)
class STunityData
{
private:
	int m_nID;
	int m_nLevel;

public:

};




*/
#pragma endregion


//�ڡڡ� ������� : ����ü�� Ŭ������ ���̸� �����غ��ÿ�.
class MyClass // Ŭ������ �⺻Ư¡�� ĸ��ȭ�� ���⶧���� private;�� �⺻���� �������̴�.
{

};



// ����ü ������
struct tagFamily // �߻�ȭ�� �ȵȰ�� -> �߻�ȭ�� ���ٷ��� ? -> ����� �� �� �ִ� ���� -> ���� ���� : ����߿��� ������ �� �� �ִ� ������ �� �ʿ���.
{
	char* name;
	int age;
	int height;
	float weight;
	bool wedding;




};

struct tagPlayer
{
	int hp;
	int mp;
	int att;
	int def;
	float speed;

};

struct tagUnit // ex = ��Ÿũ����Ʈ -> ��Ÿ������ ��� ������ ����/���ݷ�/ü�� ���� ���� �ڽ�Ʈ�� ������ �ִ�.
	//-> ���� �ڽ�Ʈ���� ���λ������� struct zealot, struct zergling ������ ���� ������ ����� �ִ� ���� ����Ʈ��.
{
	char* name;
	int hp;
	float attack;
	bool die;

};

// �������� Ư¡ -> +1�� �����Ѵ�.
enum EColor_TYPE
{
	RED,
	GREEN,
	BLUE = 1000,
	BLACK,
	WHITE

};

enum EMotion_TYPE
{
	R_WALK,
	L_WALK,
	R_RUN,
	L_RUN

};
// (enum�� class�� �ٿ� �⺻�Ӽ��� Private:�� �����.)
// ���� �������� ��쿡�� �Ϲ��� ����ȯ�� �Ͼ�⿡ ��������� �̳� Ŭ���� ���� ��쿡�� Ÿ���� ������ ��� �Ѵ�.

// C++
enum class Motion_Type : uint16_t
{
	R_WALK,
	L_WALK,
	R_RUN,
	L_RUN

};

//Ŭ������ ���� ������ �͸��� ���䵵 �߰��� �ȴ�.
// �� ��, �ش� ������� ����� �������� �ĺ��� �� �ִ� �̸��� �����ϱ� ������ ���� ����ȭ ��Ű�� ���� �Ұ�
// �� �̷��� ��Ģ�� �ٸ� ����� ���� �ڷ������� ������ �ȴ�.


enum //�ξ� �ǽù� �跰(�ǽù� ������ �ʿ��ѵ� ���� �ǽù濡�� ������ �ϰ� ���� ���� ��� -> �跰�� �����ΰ� �ǽù� ���� �޴� ��)
{
	UINT_SIZE = 5

};

union STData
{
	int m_nDataA;
	int M_nDataB;
};



/*
����ü vs ����ü

- ����ü�� ����ü�� �����ϴ� ������ �ʵ尡 ���� ������ �޸𸮸� ����ϴ� �ݸ鿡 ����ü�� �ϳ��� �޸𸮸� ������
������ �ʵ尡 ���� �����ϴ� ������ ���Ѵ�.

- ����ü�� ũ��� ������� ���� ū ��� ������ ũ��� ������ �ȴ�.

- �׷��⶧���� ����ü������ �� �ʵ��� ���� �Ҵ� �� ��� ���������� �Ҵ��� �ʵ��� ���� ��ȿ�ϴ�.

�� �����͸� �����ϰ� ������ �ѹ��� ���ø����� ����ü

*/

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== ����ü ==" << endl; 

cout << "���� ������: " << stData.m_nDataA << endl;
cout << "���� ������: " << stData.m_nDataB << endl;
cout << "�Ǽ� ������: " << stData.m_fData << endl;

#else

#endif
}

//Ŭ������ �⺻������ ��ø�� �����ϴ�.

class time
{
private:
	inmt hour, min, sec;

public:
	void setTime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void outTime()
	{
		printf("�ð��� %d;%d;%d �Դϴ�.\n", hour, min, sec);
	}


	Time.Now;
	Now.setTime(19, 41, 40);
	Now.outTime();



	class MainGame_02 //(Ŭ������ �߻�ȭ ���ִ� �������� ���ָ� ����!)
	{
	private:
		tagFamily human;
		EMotion_TYPE m_motion;

	public:
		MainGame_02();
		~MainGame_02();
	};