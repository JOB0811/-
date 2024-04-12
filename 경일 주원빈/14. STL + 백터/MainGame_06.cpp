#include "MainGame_06.h"
#include <iostream>
#include <vector>

//↑ 생성자가 호출이 될 때, "이런 헤더파일이 존재해!"라고 알려줄 것인지, 안알려줄 것인지를 알려 주는 것


MainGame_06::MainGame_06()
{
	/*
	▶ STL 벡터에서 자주 사용하는 기능
	★★★★ 면접 문제 = push_back()과 emplace_back()은 무슨 차이인가? 를 물어볼 수 있음.★★★
	Because ? = 푸시백과 임플레이스백을 설명한다는 것은 vector의 배열에서의 메모리 흐름을 이해하고 있다는 것과 같은 의미!
	push_back = 처리 속도 ↓, 메모리 할당 효율 ↑,  emplace_back = 처리 속도 ↑, 메모리 할당 효율 ↓ !

	// Vector에서 front(index의 0번값)를 건드리는 것은 "메모리의 대이동"이 필요하다.(코스트를 많이 소모한다.)
	// 사용하는 메모리는 사용하는 메모리에서만, 임시 메모리는 임시 메모리에서만 사용하여야 한다.

	push_back()
	ㄴ 데이터 뒤에서부터 값을 추가

	emplace_back()
	ㄴ 데이터 뒤에서부터 값을 추가(좀더 빠름)
	사용하는 이유! = 메모리 공간을 push_back()보다 많이 할당하는 대신 처리 속도가 더 빠르기 때문이다!



	pop_back()
	ㄴ 데이터 뒤에서부터 값을 삭제
	(pop_back은 배열의 맨 뒤에 인덱스 값만 날리고, 메모리를 저장하고 있는 공간은 삭제하지 않는다.)

	※시간이 오래 걸리는 데이터 처리
	1. 반복문
	2. 조건문의 연산


	size()
	ㄴ 벡터의 갯수
	ㄴ 벡터라는 컨테이너 안에 담긴 인덱스 갯수 (인덱스의 총량)
	(Vector는 동적 배열이기 때문에, 배열의 총량을 알 수 없다. 그래서 배열의 크기를 알 수 있는 size()란 함수가 존재한다.)


	resize()
	ㄴ 메모리 재연산 (vector에서 빠지면 안되는 기능임.)
	(사용 예시? -> 만약 게임을 만들때, pop_back으로 인덱스 내의 요소를 날리면. 메모리 할당 공간은 그대로인데 인덱스는 비어있어 메모리 공간이 낭비가 된다.
	그럴때! resize를 이용해 메모리 공간을 재연산하고, 사용하지 않는 공간은 당겨줘서 메모리 낭비를 막아줄 수 있게 사용할 수 있다.)

	clear()
	ㄴ 방을 모두 삭제

	begin()
	ㄴ 벡터의 0번째 인덱스를 의미

	end()
	ㄴ 벡터의 마지막 인덱스

	insert()
	= 선형 자료 구조에서는 자주 사용하면 안되는 기능임.(삽입을 자주할거면 vector보다는 list단에서 선언하는 것이 좋음.)
	ㄴ 값 삽입

	erase()
	ㄴ 인덱스 삭제


	*/

	int num[2];
	num[0] = 1;
	num[1] = 2;

	cout << num[0] << endl;
	cout << num[1] << endl;

	LinePrint();

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	for (int i = 0; i < 10; i++)
	{
		_vNumber.push_back(i + 1);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1); // 데이터 뒤에서 값을 추가

	_vNumber.pop_back(); // 데이터 뒤에서 값을 삭제

	_vNumber.clear(); // 메모리 할당 공간 전부 삭제

	_vNumber.insert(_vNumber.begin() + 5, 100); // 인덱스 0 번 위치 + 5위치에 100 삽입

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);


	// ++i가 아닌 i++로 작성할 경우 터질수도 있다.
	// 코드 안전도(상) -> 직접 참조이기 때문
	// 기술 포폴을 작성할때는 ↓하단의 vector활용에 조금더 붙여줄 수 있으면 괜찮다.

	/* vector를 순회할때는 전위를 써야하는 이유?
	호출 순서 문제(클래스 상속)에서 vector의 메모리가 아직 할당되지 않은 상태에서 반복문을 들어가게 되면 프로그램이 터지기때문에
	전위로 먼저 메모리의 유효성을 확인하고 반복문을 돌리겠다는 것이다.*/
	for (int i = 0; i < _vNumber.size(); ++i)
		for (int i = 0; i < _vNumber.size(); ++i)
		{
			cout << _vNumber[i] << endl;
		}

	//_viNumber에서 _vNumber.begin()과 같아지기 위해서는 _vNumber의 메모리 시작 주소를 지정해 줘야 하기 때문에, _viNumber의 시작주소에 *를 사용한다.
	// 124~127 라인의 코드와 129~132 라인의 코드는 같은 기능을 가지고 있다.
	// 협업을 할때, for each를 사용한 코드는 협업자 입장에서 매우 불편하기 때문에, 협업프로젝트에선 iterator를 사용하는 것이 좋다.
	for (_viNumber = _vNumber.begin(); _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl;
	}

	for each (auto p in _vNumber)
	{
		cout << p << endl;
	}


	LinePrint();

	printVector();



}

MainGame_06::~MainGame_06()
{

}

/*
보유 기술
C# / Unity / DB / C++ / STL 을 붙일수 있도록 노력해야함. (C++을 붙일 수 없다면 STL이라도 부단히 노력하라.)



*/


void MainGame_06::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "푸시백" << endl;
	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	//2. insert
	// ㄴ 삽입이 되면 인덱스가 밀린다.
	cout << "삽입" << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 3. pop_Back

	cout << "팝백" << endl;
	_vNumber.pop_back();

	// 상 -> 최상
	// 안전도 최상의 코드를 작성하지 않는 이유? : 매번 코드를 작성할때마다 최상의 코드를 작성하려다 보면 번거롭기 때문이다.(메모리 사용량 때문에)
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	▶ for each문

	- 주어진 범위의 모든 데이터를 하나씩 순회하며 동작하는 경우에 사용할 수 있다.
	ㄴ 기본적으로 컨테이너의 반복자 개념
	ㄴ 단, for each는 vector의 컨테이너 요소는 아니며 알고리즘 함수 요소일 뿐이다.

	- 모든 컨테이너는 반복자를 가지고 있으며 이는 for each를 사용해서 컨테이너의 원소 접근이 가능하다는 얘기

	- for each로 가능한 이유는 스마트 포인터로 만들어진 문법이기 때문이다.
	ㄴ 이는 순회하면서 원하는 요소에 접근을 하기가 용이하다는 얘기


	▶ auto

	- 컴파일러가 컴파일시 자동으로 자료형을 추론한다.

	- 상시 / 수시로 자료형을 추론할 수 있는게 아닌 컴파일러가 자료형을 추론하기 위한 명시적인 조건이 주어져야 한다.

	- C/C++은 타입에 매우 엄격한 언어이기 때문에 변수를 생성할때 자료형을 명시해야 한다.
	ㄴ 단, auto 키워드를 사용하면 변수의 자료형을 명시하지 않더라도 컴파일러에 의해서 자동적으로 변수의 자료형이
	결정된다.



	▶ range based for

	- VS 2015부터 지원하는 문법

		// 컨테이너를 순회할 수 있는 알고리즘 함수 (for each = 시간 복잡도에 굉장히 민감한 함수이다. 연산이 일어나면, 순회 속도가 매우 느려지는 특징이 있다.)
	for each (auto p in _vNumber)
	{
		cout << p << endl;
	}

	for (auto components :_vNumber)
	{

	}




	*/

	//4. erase
	// erase(begin() + index)
	// erase(begin() + s, begin() + e)
 
	cout << "erase" << endl;

	_vNumber.erase(_vNumber.begin() + 1);
	_vNumber.erase(_vNumber.begin(), _vNumber.begin() + 3); // 범위 표기

	LinePrint();

	//5. 역순회 ( r= reverse -> v,r,iNumber인 것이다.)
	_vriNumber = _vNumber.rbegin();
	for (_vriNumber; _vriNumber != _vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}

	// ★★★★★★★ 사골 면접 문제 ★★★★★★★
	//6. 인덱스 참조

	// at은 4를 적었을 경우, 앞에 있는 3이 먼저 있는지를 확인한 다음 4를 확인한다. (3이 비어있을 경우, NULL을 찍고 반환한다.)
	cout << _vNumber.at(4) << endl;
	// ㄴ 범위 점검을 한다. => 속도는 느리지만 안전하다.(at을 사용할 경우, for문을 사용하여 구현할때 일반적인 예외처리를 받을 수 있다.)
	cout << _vNumber[4] << endl;
	// ㄴ 범위 점검을 하지 않는다. -> 빠르지만 스릴만점


	//7. front

	cout << "프론트" << endl;
	cout << _vNumber.front() << endl;

	// 8. back
	cout << "백" << endl;
	cout << _vNumber.back() << endl;

	// 9.size
	cout << "사이즈" << endl;
	cout << vNumber.size() << endl;

	// 10. clear
	cout << "클리어" << endl;
	_vNumber.clear();

	//. empty
	// ㄴ 비어 있으면 T / 하나 이상 있으면 F

	// T
	if (_vNumber.empty())
	{
		cout << "텅텅 비었는걸?" << endl;

		return;
	}

	cout << _vNumber.at(2) << endl;

	LinePrint();

}
