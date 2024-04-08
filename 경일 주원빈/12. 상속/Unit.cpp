#include<iostream>
#include "Unit.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;


//클래스 구현은 그림을 그리면서 흐름을 따라가는 것이 구현하기 좋다!
Unit::Unit()
{
	// 상속 구현 시 이러한 행위는 금지
	string name = "테란 유닛";
	hp = 100;
	mp = 50;
	atk = 800;
	die = false;

	cout << " 내 이름은: " << name << endl;
	cout << "체력: " << hp << endl;
	cout << "마나:" << mp << endl;
	cout << "공격력:" << atk << endl;
	cout << "나는 죽지 않는다!" << die << endl;

	attack();
}

Unit::~Unit()
{
	//! Do Nothing
}


void Unit::attack(char* myName, char* enemyName)
{
	cout << myName << "이 " << enemyName << " 을 공격한다." << endl;
}

void Unit::attack(int atk, int enemyHP)
{
	cout << atk << "의 공격으로 적의 체력" << enemyHP << "을 감소 시켰다." << endl;
}

void Unit::attack(bool enemyDie)
{
	cout << boolalpha;
	cout << "적 제거 여부: " << enemyDie < endl;
}

void Unit::attack()
{
	cout << "적을 공격한다." << endl;
}