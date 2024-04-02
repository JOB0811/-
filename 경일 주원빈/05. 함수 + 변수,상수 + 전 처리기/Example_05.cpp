#include<iostream>
//std::string? = 독이 든 성배(추후 나올 포인터/캐릭터 포인터 등의 어려운 개념을 포함한 기능과 함수들을 키워드 몇개로 사용할 수 있게 해주기 때문 -> 할게 많다고 그냥 넘겨 추후 그게 무슨 기능/함수인지 모를수 있음.

// STL String은 메모리 블록이나 문자열을 다룰 수 있는 기능과 함수들을 포함하는 헤더

// ★★ 면접 관련 질문!(매우중요) : 회사에서 메모리 관련 능력을 검증하기 위해선 문자와 문자열에 대한 문제를 손코딩으로 내주는 방식을 선호한다!

// ★★ 포폴에 본인이 작성한 (기능/로직/코드 리뷰)는 당연히 할 수 있어야 한다.(내가 만들었다는 것의 검증 + 나의 능력 증명)

// ㄴ 유니코드 사용할것이면 wchar.h
#include<string>
#include<wchar.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;
// 05. 함수 + 변/상수 + 전처리기

#pragma region 함수
/*

▶ 함수

- 음료수 자판기
ㄴ (음료수 자판기는 음료수를 배출하는 기계)

- 함수를 사용하는 이유

- 중복로직 제거
- 관리 용이함
- 가독성 향상
- 편리성

- 함수를 선언하는 방법
반환 자료형 함수 이름 (입력 자료형(인자 / 함수 /파라미터)) ★★(C++에서는 함수를 인수, C#에서는 파라미터라 칭한다.)★★

(  <- 함수 시작

	함수 내용

)	<- 함수 끝

- 설명

- 함수 이름 : 말 그대로 함수의 이름이며, 함수를 실행(호출)할 때 사용한다.
- 인자(인수) : 함수가 해야 할 일의 세부사항을 지정하며 함수의 작업거리라고 할 수 있다.
- 반환 자료형 : 함수가 리턴하는 값의 데이터 형이며 함수의 작업 결과라고 할 수 있다.
- 함수 내용 : () 안에 함수의 실제 코드가 존재한다.

※ 함수의 이름은 "기본적"으로 유일해야 한다.
ㄴ 동일한 이름의 함수를 N개 이상 선언하는 것은 불가능하다.


▷ void형 함수란?


- 리턴할 값이 없는 함수

- 함수의 입력 또는 출력이 없을 경우 void 키워드를 통해서 해당 함수가 입/출력이 없다라는 것을 명시한다.

※ 우리가 알게 모르게 사용한 함수들
ㄴ rand(): 랜덤값을 뽑는 함수

※ 함수 선언은 기본적으로 메인 함수 윗쪽에 해줘야 한다.

▷ C/C++ 언어의 함수 선언이 필요한 이유

- C/C++ 언어의 컴파일러는 기본적으로 파일의 내용을 위에서 아래로 해석한다.

- 이때 컴파일러가 이미 지나친 라인에서 포함되어 있지 않은 함수를 호출할 경우 컴파일러가
이에 대한 내용을 전혀 모르기 때문에 에러가 발생한다.

- 그렇기 때문에 함수의 선언을 통해서 컴파일러에게 해당 함수가 우리가 쓰는 프로젝트 파일 어딘가에
있다는 것을 알려줘야 한다.

- 즉, 함수의 선언과 정의가 반드시 동일한 파일에 존재하지 않아도 된다는 것을 의미한다.

- 함수의 선언은 중복으로 명시하는 것이 가능하지만 함수의 정의는 반드시 유일해야 한다.
★★( 함수를 작성할 때 파스칼 형식으로 만들어라!)★★


*/


#pragma endregion

//함수 선언
void OutputValueA();


// 인트형을 받고 있지만 반환을 하지 않는다. (void)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

//문자열
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);




// 함수의 이름은 기본적으로 중복이 안된다.
// 중복된 함수가 있을때 별도로 호출할 수 있는 방법이 있을까?


namespace NS_FUNC_A //★★과제할 때 복습 후 네임스페이스를 이용해서 사용해 볼것!(동일한 변수를 쓰고 싶을때)
{

	void Sample()
	{
		cout << "내가 바로 Sample 1" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "내가 바로 Sample 2" << endl;
	}
}

void main()
{
	//내가 컴퓨터인데...
	// ㄴ 망했어.
	//NS_FUNC_A::Sample();
	//NS_FUNC_B::Sample();

	// ?
	OutputValueA();
	OutputValueB(5);
	OutputValueC(1, 9);
	OutputString("과제가 너무 쉽다. ^^");

	int nResultA = GetAddValue(18, 25);

	OutputValueB(nResultA);

	string sResultB = GetStringFunc("즐거운", "프로그래밍");
	OutputString(sResultB);

	nResultA = CheckingString("너무 재밌다.", "너무 재밌다.");

	OutputValueB(nResultA);

	// 함수라는 놈은... C? /// C++?


	int numL = 0;
	int numR = 0;

	cout << "정수 (2개) 입력:" << endl;
	cin >> numL >> numR;

	//호출할 때, 변수가 많을 경우, cout보다 printf가 더 유리.
	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d + %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d + %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d + %d = %d\n", numL, numR, GetDivideValue(numL, numR));




	cout << '\n';

	/*
	- 이처럼 함수는 다양한 유형을 가질 수 있다.

	- C/C++ 언어의 함수 유형

	- 입력 O, 출력 O
	- 입력 O, 출력 X
	- 입력 X, 출력 O
	- 입력 X, 출력 X

	void ShowInfo(int nAge, char* psName);
	ㄴ 입력 O, 출력 X
	int GetRandomValue(void);
	ㄴ 입력 X, 출력 O
	void SomeFunction(void);
	ㄴ 입력 X, 출력 X

	
	*/



}

void OutputValueA()
{
	cout << "내가 바로 함수다!" << endl;
}


void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	//리스키
	// 문자 / 문자열에 대해서는 -> 사칙 연산 X
	

	/*
	함수는 return 키워드를 통해서 함수의 종료 또는 결과값을 반환하는 것이 가능
	함수의 결과값은 입력과는 달리 하나의 결과만을 반환할 수 있다.
	ㄴ 정석
	*/



	// C언어 4대 + 2대 = 6대 문자열 ★★(면접 준비할 때, C언어의 캐릭터 계열 개념을 지속적으로 학습하라.)★★
	// C++ String
	// C# String
	return strA.append(strB);
	return strA + strB;
}

int CheckingString(string strA, string strB)
{	// 같으면 1 / 다르면 0 반환
	return strA == strB;
}

// ? -> 객체지향
int GetAddValue(int numA, int numB)
{
	cout << numA;
	
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;

}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;

}

float GetDivideValue(int numA, int numB)
{
	return numA / (float)numB;

}
