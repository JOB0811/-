#pragma once
#include<iostream>


// 실습 과제 = 월남뽕을 클래스 형식으로 바꿔서 구현해보면 실력이 "빠르게" 늘 것이다.

using std::cout;
using std::cin;
using std::endl;
using std::string;

#pragma region 클래스
/*

▶ 클래스란?

- 속성에 해당하는 필드와 행위에 해당하는 함수의 집합을 클래스라고 한다.
	ㄴ 클래스를 이용하면 데이터 뿐만 아니라 함수를 특정 집합에 포함하는게 가능하다.

EX)

class CUnit
{

	private;
	.
	.
	.



	public;
	.
	.
	.

};

- 클래스는 접근 제어 지시자를 이용해서 변수 또는 함수에 접근할 수 있는 영역을
제한하는 것이 가능하다.


- 종류

1. private
= 4대 특징중 "캡슐화"를 만드는데 가장 강력한 것


2. public
= 4대 특징중 "다형성"과 연관되어 있다.


3. protected
= 나와 동급의 클래스에게만 적용되는 접근 제어 지시자.
= 4대 특징중 "상속"의 특징을 가지고 있다.

4. @


※ 클래스는 기본적으로 객체의 안전성을 위해 외부에서 함부로 값을 건드리지 못하게
   되어 있다. 그렇기 때문에 멤버를 숨기는 경향이 있고 이런 특성때문에 캡슐화가 성립이 된다.


※ 접근 제어 지시자를 명시하지 않으면 클래스는 기본적으로 private 속성을 갖는다.



   4대 특징 종류

   1. 캡슐화

   2. 다형성

   3. 상속

   4. 추상화



*/
#pragma endregion


struct Mystruct
{

};

enum Myenum
{

};







//카멜 변수에서 전면에 _가 들어가는것은 "클래스 멤버 변수"를 의미한다.
class MainGame
{
	//★★ 클래스가 익숙해 질때까지 당분간 변수는 Private 영역안에 잡아두도록
private:
	//변수 선언 / 변수 선언 및 초기화
	int _Number;
	int _x;
	int _y;

	int m_nID = 0;
	string m_oString = "";

	const int m_nConstValue = 0;



	/*
	- 원래는 클래스에서 변수를 만들어줄때 초기화를 허용하지 않았지만, 이게 또 은근
	불편하기 때문에 C++11에서 초기화 할 수 있는 기능이 추가됬다.
	ㄴ 심볼릭 상수등도 초기화가 가능
	
	*/



public:
	//★★ 클래스가 익숙해 질때까지 당분간 변수는 public 영역안에 잡아두도록
	//변수 형태의 상수와 함수 형태의 상수 존재
	void outPut();
	void showPosition(void);
	void movePosition(void);
	void setPosition(int x, int y);
	
	// 매개변수에 의한 상수화
	void FunctionA(const int a);

	//멤버변수의 상수화 (가장 많이 쓰이는 녀석)
	void FunctionB() const;

	//반환값의 상수화
	const int FunctionC(); 

	//반환값의 상수화
	int const FunctionD();

	//반환값과 멤버변수의 상수화
	const int FunctionE() const;

	const int ValueA;
	mutable int ValueB;
	
	void DoSomething(int x) const
	{
		ValueA = x;
		ValueB = x;
	}

	void print() const { std::cout << "데이터: " << ValueB << std::endl; }
	
	// 생성자
	// ㄴ 주로 멤버 변수의 값을 원하는 값으로 대입하는 작업을 하거나 그외 객체가
	// \동작하는데 필요한 모든 초기화 처리를 담당하기도 한다.
	MainGame();
	// 소멸자
	// ㄴ 객체가 바꿔놓은 환경을 원래대로 돌려 놓거나 할당한 자원을 회수하는 역활을 한다.(동적할당 등의 메모리 해제)
	~MainGame();



};

