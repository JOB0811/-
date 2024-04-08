#pragma once
#include<iostream>


using std::cout;
using std::cin;
using std::endl;

#pragma region 접근자 + 설정자
/*
▶ 접근자 + 설정자

- 접근자 (Accessor)
ㄴ 멤버 변수 값을 반환하는 멤버 함수를 지칭한다.

- 설정자 (Mutator)
ㄴ 멤버 변수 값을 변경하는 멤버 변수를 지칭한다.

※ 일반적으로 Getter(Get) / Setter(Set)라고 불린다.

※ HLL / 상용 엔진에서는 프로퍼티라는 이름으로 다시 만날 수 있다.


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
	// 캡슐 함수 (겟터/ 셋터) + inline,template
	// ㄴ 일반 함수들은 cpp에서 기능을 구현하는게 원칙이지만 -> 겟터 + 셋터 함수는 헤더파일에서 구현을 원칙으로 한다.
	// 많이 써보는 것이 중요하다.(구조체/클래스/포인터는 미숙하므로 많이 써봐야 감을 익힌다.)

	int getHP() { return _hp; }
	void setHP(int hp) { _hp = hp; }

	int getMP() { return _mp; }
	void setMP(int mp) { _hp = mp; }

	int getSpeed() { return _speed; }
	void setSpeed(int spd) { _speed = spd; }




	Player_03();
	~Player_03();

};




