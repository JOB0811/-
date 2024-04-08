#pragma once
#include<iostream>


using std::cout;
using std::cin;
using std::endl;

#pragma region ������ + ������
/*
�� ������ + ������

- ������ (Accessor)
�� ��� ���� ���� ��ȯ�ϴ� ��� �Լ��� ��Ī�Ѵ�.

- ������ (Mutator)
�� ��� ���� ���� �����ϴ� ��� ������ ��Ī�Ѵ�.

�� �Ϲ������� Getter(Get) / Setter(Set)��� �Ҹ���.

�� HLL / ��� ���������� ������Ƽ��� �̸����� �ٽ� ���� �� �ִ�.


*/
#pragma endregion






class Player_03
{
private:
	int _hp; //4
	int _mp; //4
	int def; //4
	int att; //4
	float _speed; //4




public:
	// ĸ�� �Լ� (����/ ����) + inline,template
	// �� �Ϲ� �Լ����� cpp���� ����� �����ϴ°� ��Ģ������ -> ���� + ���� �Լ��� ������Ͽ��� ������ ��Ģ���� �Ѵ�.
	// ���� �Ẹ�� ���� �߿��ϴ�.(����ü/Ŭ����/�����ʹ� �̼��ϹǷ� ���� ����� ���� ������.)

	int getHP() { return _hp; }
	void setHP(int hp) { _hp = hp; }

	int getMP() { return _mp; }
	void setMP(int mp) { _hp = mp; }

	int getSpeed() { return _speed; }
	void setSpeed(int spd) { _speed = spd; }




	Player_03();
	~Player_03();

};




