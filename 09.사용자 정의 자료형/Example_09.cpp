#include "Maingame_02.h"

#define EXAMPLE_TYPE_STRUCT				1
#define EXAMPLE_TYPE_ENUM				2
#define EXAMPLE_TYPE_UNION				3
#define EXAMPLE_TYPE_CLASS				4

#DEFINE EXAMPLE_TYPE			EXAMPLE_TYPE_STRUCT











MainGame_02::MainGame_02()
{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

	//����
	// C ��Ÿ��
	struct tagFamily Family;

	/*






	*/
	// C++
	tagFamily Family;

	human.name = "���";
	human.age = 18;
	human.height = 230;

	human.wedding = false;
	human.weight = 45;

	cout << "�̸�: " << human.name << "\n"
		<< "����: " << human.age << "\n"
		<< "Ű: " << human.height << "\n"
		<< "��ȥ: " << human.wedding << "\n"
		<< "������: " << human.weight << "\n"

		cout << "\n";

	/* ����ü�� ����

	 ����꼺�� ����.

	*/

	//����� ������ ���
	tagPlayer player;
	player.hp = 100;
	player.mp = 50;
	player.att = 10;
	player.def = 5;
	player.speed = 10.5f;

	//��µ� ����....

	cout << '\n';

	// �������°�..?
	// ����꼺�� ����.

	tagUnit marin;
	marin.name = "����";
	marin.hp = 100;
	marin att = "5.5f"
		cout << boolalpha;
	//boolalpha: bool ->0, 1 -> T / F ��ȯ
	marin.die = false;

	//? �� ����ü ? -> �迭
	tagUnit zergling = { "���۸�", 50, 50.f, true };

	tagPlayer arrPlayer[4] =
	{
		{100, 100, 100, 100, 100},
		{90, 90, 90, 90, 90},
		{80, 80, 80, 80, 80},
		{70, 70, 70, 70, 70}

	};

	for (int i = 0; i < 4; i++)
	{
		cout << i = 1 << "��° �÷��̾�" << endl;
		cout << "ü�� : " arrPlayer[i].hp << endl;
		cout << "=========" < endl;
	}70






#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM //(������) (������ + Switch�� ������ ����⿡ ����!)

	//�ſ� ������ �ڵ�
	// �� �̸� �浹 => �ذ�� = (���ӽ����̽� + Ŭ������ �ذ� ����)(Ŭ������ ó���ϴ°� �� �� ������)
	cout << "�� : " << BLACK << endl;

	m_motion = L_WALK;

	if ()
	{

	}

	switch (e_mothion)
	{
	case R_WALK:
		cout << "������ �ȱ�" << endl;
		break;

		case L_WALK;
			cout << "���� �ȱ�" << endl;
			break;

		case R_RUN:
			cout << "������ �ٱ�" << endl;
			break;

		case L_RUN:
			cout << "���� �ٱ�" << endl;
			break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "���������� �ٰ� �ִ�" << endl;
		}
		
	}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION


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





#elif EXAMPLE_TYPE == EXAMPLE_TYPE_CLASS














}
