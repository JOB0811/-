#include<iostream>

using std::cout;
using std::cin;
using std::endl;


#pragma region 조건문
/*

▶ 조건문이란?

- 프로그램이 실행되는 동안 정해져 있는 경우에 수에 맞춰서 서로 다른 결과를 도출하기
위한 문법을 의미한다.

- 조건문을 이용하면 다양한 결과를 출력하는 프로그램을 작성하는 것이 가능하다.


- 조건문의 종류 (조건문이 3~4개이상 적혀있는 코드는 잘못된 코드일 가능성이 높다. 조건문에 숙달되기 위해 많이 노력하자!)

1. if ~ else 조건문
2. switch ~ case 조건문


▶ if ~else 조건문

- 조건적 실행 ( 조건에 따라 실행 유무)

- 조건을 만족하는 if문을 발견하면 나머지 if문을 건너뛴다.

- if와 else가 만나서 이루는 문장의 수는 둘이 아니라 하나이다.

- if ~ else문에서 조건의 만족여부 검사는 위에서 아래로 절차지향적으로 진행이 된다.

- 조건이 만족되어 해당 블록을 실행하고 나면 마지막 else까지는 건너 뛴다.

- 조건을 만족하지 않으면 마지막의 else 문을 실행한다.
// 1.(1과 2중에서 빠른 방식 ? 1.)
EX)
if (조건식)
{
	조건식이 참이면 실행될 코드
}

else if (조건식)
{
	조건식이 참이면 실행될 코드
}

else
{
	위 조건들이 만족되지 않으면 실행될 코드
}


// 2. 
EX)
if (조건식)
{
	조건식이 참이면 실행될 코드
}

 if (조건식)
{
	조건식이 참이면 실행될 코드
}

else
{
	위 조건들이 만족되지 않으면 실행될 코드
}

▶ switch

- 스위치 문을 사용하는 경우는 일일이 조건별로 세팅을 해주기가 용이하기 때문
ㄴ 그렇기 때문에 상태 변화 / 조건이 많은 경우에 사용하면 좋은 효율을 낼 수 있다. (캐릭터의 상태이상 등을 표현할때 용이해보임.)


- 그리고 if문과 매우 흡사하다는 특징이 있으며 스위치문으로 작성되는 로직은 if문으로도 전부 교체가 가능하다. -> 단, 코드량이 엄청나게
길어질 수 있으니 주의 요망

EX)

switch (Data type(인자 값)
{

	case 1;

	case 2;

	case 3;

	default;

}


- 인자값에는 int형과 char형이 들어 올 수 있다.
- 하지만 보통 int형을 많이 쓴다.(int형을 많이 쓰는 이유? = CPU 연산 우선순위 때문!)

- 스위치문은 인자값에 따라서 실행할 영역을 결정한다.
ㄴ EX: 인자값이 1이면 case 1;이 실행되고 / 인자값이 2이면 case 2;이 실행된다.

- switch ~ case 조건문의 default는 if ~ else문의 else문에 해당하는 역활을 수행한다.

- 또한 switch ~ case 조건문은 if ~ else문과는 다르게 범위에 해당하는 조건을 줄 수 없을뿐더러
조건문을 사용할 수 있는 자료형은 정수형만 취급을 한다. (정수 이외의 값을 조건으로 줄 경우, 올바른 결과를 출력할 수 없다!(float 등))


▶ C/C++ 언어 제어문의 종류 (제어문의 우선순위 3 > 2 > 1> 4)★★

1. return
ㄴ 조건문일때는 다시 돌려 보낸다. / 함수에서는 값을 반환하고 초기화 한다.


2. continue
ㄴ 조건문일때는 연산을 하지 않고 뛰어 넘는다. / while문에서는 바로 이전 문항으로 간다.

3. break
ㄴ 만나면 멈춘다. / while문 같은 경우는 while문을 탈출하는 용도로 사용할 수 있다.

4. goto 
(알고있지만, 잘 사용하지는 않는 것 같습니다.(O) / 잘 안쓰인다 그래서 공부하지 않았습니다. (X)/ 의지의 차이가 느껴진다.)
(코드의 흐름을 방해하기 때문에, 절차지향 방식에서는 필요한 경우가 있지만, 객체지향 방식에서는 흐름을 방해한다.)
(쓰이는 경우 -> 중첩 조건문 등에서 쓰일 수 있다.)
ㄴ 보통 점프문이라고 불리며 goto에 라벨을 지정하면 중간에 있는 흐름과 코드는 무시하고 해당 라벨로 이동한다.

↓(특정상황 : 플레이어가 이동하다 날아오는 물체에 맞고 사망했을 때, 더이상 좌표 함수를 사용할 수 없어서 break;로 멈춘다 하자. 하지만 좌표 함수가 가지고 있는
			  메모리량은 낭비가 되기 때문에 이러한 경우에 사용 할 수 있다.)

for (size_t i = 0; i < 10; i++)
{

	for(size_t i = 0; i < 10; i++)
	{


		for(size_t i = 0; i < Vector.length; i++_
		{

		}
	}
}






*/

void main() {

	int nOperator;

	cout << "내가 입력한 숫자 = ";
	cin >> nOperator;

	if (nOperator == 0) //(조건문은 수식이 두줄 이상이 적혀있으면, 수식이 잘못되어 있을 확률이 높다.(내가 짠 수식이 맞는지 다시 한번 생각해보자.))
	{
		cout << "리그 오브 레전드" << endl;
	}

	else if (nOperator == 1)
	{
		cout << "로스트 아크" << endl;
	}

	else
	{
		cout << "블러드" << endl;
	}

	cout << "\n";


	int inputNumber;

	cout << "0번, 1번, 2번중 하나를 선택하시오. " << endl;
	cout << "내가 입력한 숫자: ";
	cin >> inputNumber;

	switch (inputNumber)
	{
	case 0:
		cout << "0번 입력시 출력" << endl;
		break;

	case 1:
		cout << "1번 입력시 출력" << endl;
		break;

	case 2:
		cout << "2번 입력시 출력" << endl;
		break;


	default:
		cout << "그외 입력시 출력" << endl;
		break;
	}

	cout << "\n";

	/*
	▶ C/C++ 언어의 증/감 연산자

	- 전위 증/감 연산자
	- 후위 증/감 연산자

	- 전위 증/감 연산자는 해당 변수의 값을 증/감 시킨 후 연산에 활용하는 반면
	  후위 증/감 연산자는 연산에 활용이 된 후 해당 변수의 값이 변경된다.

	*/

	int nValue = 10;

	cout << "증/감 연산 결과 출력: " << endl;

	cout << "값은 :" << ++nValue << endl;

	cout << "값은 :" << --nValue << endl;

	cout << "값은 :" << nValue++ << endl;

	cout << "값은 :" << nValue-- << endl;

	cout << "nValue의 값: " << nValue << endl;

	cout << "\n";


	int nValueA, nValueB, nValueC, nValueD;
	nValueA = nValueB = nValueC = nValueD = 10;

	if ((nValueA == nValueB++) && (nValueC++ < ++nValueD))
	{
		cout << nValueA << endl; //10
		cout << nValueB << endl; //11
		cout << nValueC << endl; //11
		cout << nValueD << endl; //11

	}

	/*

	▶ goto문

	- 객체지향에서는 사용할때 극 주의가 필요하다.
	ㄴ 잘못 사용한 / 남발한 goto 문은 가독성을 심하게 떨어뜨리게 코드의 흐름을 방해한다.
		ㄴ 특히 스파게티(코드끼리 서로 의존성이 높은)에 일조하기 때문에 프로그래머의 현명한 판단이 가장 중요하다.

	EX)
	goto 레이블; (=라벨)
	레이블:



	*/

	for (int i = 2; i < 10; i += 1) // goto문 예시 (goto 문이 위험한 이유 : 반복문의 코드 흐름을 무시하고 하고 싶은 대로 진행하기 때문)
	{
		for (int j = 1; j < 10; j += 1)
		{
			if (i % 2 == 0)
			{
				goto EXIT_1;
			}

			if (i % 5 == 0)
			{
				goto EXIT_2;
			}

			// 이 친구는 구구단을 몇단만 출력할까요? (3단)

			cout << i << " x " << j << " = " << i * j << endl << endl;

		}

	EXIT_1:
		cout << "1단을 출력후 실행: " << i << endl << endl;
	}
	EXIT_2:
	cout << "반복은 탈출했다!" << endl;

	}