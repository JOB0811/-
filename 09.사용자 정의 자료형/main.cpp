#include "MainGame.h"

//당분간 초기화는 생성자에서 진행한다.
//생성자
MainGame::MainGame() 
{
	_Number = 500;
	cout << "당분가 여기에 코딩을 하도록" << endl;

	/*
	c++ 언어는 생성자에 한하여 맴버변수를 초기화 하는 맴버 이니셜라이저 라는 기능을 지원하고 있다.
	- 필요한 순간
	1. 객체의 맴버 변수로 심볼릭 상수를 지니고 있을 경우
	2. 상속 관계에서 부모 클래스의 생성ㅈ아 호출이 필요할 경우
	*/
}

// 소멸자
MainGame::~MainGame()
{
	
	//! Do Nothing 건들지 말것
}


void MainGame::outPut()
{
}

void MainGame::showPosition(void)
{
	cout << "x: " << _x << ", y: " << _y << endl;
}

void MainGame::movePosition(void)
{
	_x += 100;
	_y += 100;
}

void MainGame::setPosition(int x, int y)
{
	//클래스는 -> 캡슐화
	//다른변수가 _x, _y의 정보를 알려준적이 없는데 인지하고 있을수 있다.(객체지향 구조 파괴)
	//_x = x;
	//_y = y;

	/*
	- this 포인터

	- 자기자신을 가리키는 포인터

	- 모든 클래스의 멤버 함수는 자기 자신을 지칭하는 this 키워드를 통해서 효율적으로
	멤버를 관리하는 것이 가능하다.

	- 또한 이름 중복에 의해서 발생하는 우선 순위에 대한 모호함을 없앨 수 있다.
	*/




	//_x, _y에 먼저 할당하기 전까진 x와 y에 할당할수 없다. 대기하라
	this->_x = x;
	this->_y = y;
}


