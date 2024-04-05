#pragma once
#include<iostream>


using std::cout;
using std::cin;
using std::endl;

#pragma region 사용자 정의 자료형
/*

▶ 사용자 정의 자료형이란?

- 기존에 존재하던 자료형을 기반하여 새로운 자료형의 조합을 만드는 기능이라고 할 수 있다.
ㄴ 사용자 정의 자료형을 활용하면 특정 데이터의 집합을 표현하는 것이 가능하다.


- 사용자 정의 자료형의 종류

- 구조체
ㄴ 특정 데이터의 집합을 정의하는 자료형
- 열거형
ㄴ 집합을 정의하는 자료형
- 공용체
ㄴ 특정 심볼릭 상수(?)를 정의하는 자료형
- 클래스(C: 구조체 / C++: 클래스 (구조체 확장))
ㄴ OOP에서 특정 객체를 생성하고 관리하는 자료형


▷ 구조체

- 하나 이상의 변수를 묶어서 새로운 자료형을 정의하는 도구라고 할 수 있다.

- C++에는 클래스가 도입되었지만 C언어와의 호환성 때문에 구조체를 그대로 사용할 수 있다.

- 또한 C++ 구조체는 C언어의 구조체에 기능을 확장하여 기존의 클래스와 동일한 구조와 기능을 가진다.

EX)
struct STunityData
{
	int m_nID;
	int m_nLevel;

};
▷ 열거형

- 데이터의 집합을 만들어 내거나 유지보수면에서 효율적으로 정수값을 관리하고 싶을때 사용이 된다.
- 단, 정수 데이터라고 하더라도 기본적으로 오름차순 / 내림차순을 설정을 해줄 수 없다.

EX)
enum EUnitType
{
	UINT_TYPE_A,
	UINT_TYPE_B,
	UINT_TYPE_C

}

※ 스위치와 조합이 좋다.



▷ 공용체

- 1개의 메모리 공간에 여러개의 데이터가 공존할 수 있는 자료형

- 기본적으로 가장 큰 데이터의 크기로 메모리가 할당이 된다.

EX)
union STunityData
{
	int m_nID;
	int m_nLevel;

};



▷ 클래스

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


//★★★ 사골질문 : 구조체와 클래스의 차이를 설명해보시오.
class MyClass // 클래스의 기본특징엔 캡슐화가 들어가기때문에 private;가 기본접근 지시자이다.
{

};



// 구조체 선언방법
struct tagFamily // 추상화가 안된경우 -> 추상화를 해줄려면 ? -> 사람이 할 수 있는 행위 -> 세부 사항 : 사람중에서 가족이 할 수 있는 행위로 더 필요함.
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

struct tagUnit // ex = 스타크래프트 -> 스타에서의 모든 유닛은 방어력/공격력/체력 등의 공통 코스트를 가지고 있다.
	//-> 공통 코스트에서 세부사항으로 struct zealot, struct zergling 등으로 세부 사항을 기술해 주는 것이 포인트다.
{
	char* name;
	int hp;
	float attack;
	bool die;

};

// 열거형의 특징 -> +1씩 증가한다.
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
// (enum에 class를 붙여 기본속성이 Private:로 변경됨.)
// 기존 열거형의 경우에는 암묵적 형변환이 일어나기에 상관없지만 이넘 클래스 같은 경우에는 타입을 지정해 줘야 한다.

// C++
enum class Motion_Type : uint16_t
{
	R_WALK,
	L_WALK,
	R_RUN,
	L_RUN

};

//클래스가 들어갔기 때문에 익명의 개념도 추가가 된다.
// ㄴ 단, 해당 방식으로 선언된 열거형은 식별할 수 있는 이름이 존재하기 때문에 따로 변수화 시키는 것은 불가
// ㄴ 이러한 규칙은 다른 사용자 정의 자료형에도 적용이 된다.


enum //로아 피시방 배럭(피시방 보상은 필요한데 굳이 피시방에서 게임은 하고 싶지 않은 경우 -> 배럭만 세워두고 피시방 보상만 받는 것)
{
	UINT_SIZE = 5

};

union STData
{
	int m_nDataA;
	int M_nDataB;
};



/*
구조체 vs 공용체

- 구조체는 구조체를 구성하는 각각의 필드가 서로 별개의 메모리를 사용하는 반면에 공용체는 하나의 메모리를 가지고
각각의 필드가 서로 공유하는 구조를 지닌다.

- 공용체의 크기는 멤버들중 가장 큰 멤버 변수의 크기로 설정이 된다.

- 그렇기때문에 공용체에서는 각 필드의 값이 할당 될 경우 마지막으로 할당한 필드의 값만 유효하다.

※ 데이터를 절약하고 싶을때 한번쯤 떠올릴만한 공용체

*/

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== 공용체 ==" << endl; 

cout << "정수 데이터: " << stData.m_nDataA << endl;
cout << "정수 데이터: " << stData.m_nDataB << endl;
cout << "실수 데이터: " << stData.m_fData << endl;

#else

#endif
}

//클래스도 기본적으로 중첩이 가능하다.

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
		printf("시간은 %d;%d;%d 입니다.\n", hour, min, sec);
	}


	Time.Now;
	Now.setTime(19, 41, 40);
	Now.outTime();



	class MainGame_02 //(클래스는 추상화 해주는 느낌으로 가주면 좋다!)
	{
	private:
		tagFamily human;
		EMotion_TYPE m_motion;

	public:
		MainGame_02();
		~MainGame_02();
	};