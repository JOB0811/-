#include<iostream>

using std::cin;
using std::cout;
using std::endl;

#pragma region 함수 + 변/상수 + 스코프 + 라이프사이클
/*

▶ 변수와 상수 영역이란?

- 변/상수가 프로그램에 걸쳐서 영향을 미칠 수 있는 범위를 의미한다.
ㄴ 변/상수의 종류에 따라서 해당 변/상수에 접근할 수 있는 범위가 달라진다.
	ㄴ 효율적으로 사용을 하면 데이터의 값을 보존하고 컴퓨터가 자동으로 최적화를 수행한다.
		ㄴ 할당된 메모리에 회수

- 바꿔말해, 서로 다른 영역에서만 유효한 동일한 이름을 지니는 변/상수가 존재할 경우
각가의 변/상수는 별개라는 의미이다.

- 또한 C/C++ 언어는 { }에 조합을 통해서 특정 영역의 시작과 끝을 나타내는 것이 가능


★★ 면접 사골 문제 ★★ (면접가면 밥먹듯이 물어보는 문제인 것)
▷ C/C++ 언어의 변/상수 종류

- 로컬 (지역) (ex. for문)
ㄴ 특정 영역에서만 접근이 가능한 변/상수


- 전역 (글로벌)
ㄴ 프로그램 전체에서 접근이 가능한 변/상수


- 정적 로컬 (지역)(+static)
ㄴ 특정 영역에서만 접근이 가능하지만 지역 변수와 달리 해당 변수의 값이 항상 유지되는 변/상수


- 정적 전역 (글로벌)(+static)
ㄴ 전역 변수와 달리 해당 변/상수가 선언된 파일에서만 접근이 가능한 변/상수


★★ 면접 사골 문제 ★★

- 전역 / 지역 / 동적 변수등 변수의 LifeCycle 설명해 보시오.
ㄴ Allocate -> Release -> Memory Pool
ㄴ 변수의 메모리가 확보된 시점부터 해제되어 가용 메모리 풀에 반환되는 시점을 의미한다.

- 변수는 자신이 선언된 Scope 내에서 생성되고 소멸된다.

◆ 지역변수의 생명 주기 : 함수의 생명 주기
◆ 전역변수의 생명 주기 : 어플리케이션 생명 주기

ex) for(int i = 0; i < length; i++)
{

} -> (중괄호를 만나는 시점에서 Release(해제)후 Meomry Pool에 사용한 메모리를 반환한다.)


*/
#pragma endregion

void IncreaseValue(int Value);
void DecreaseValue(int Value);

static int g_Value = 0;
const int g_ConstantValue = 0;


void main()
{
	int Value = 0;

	cout << "정수 입력 :";
	// -> 10
	cin >> Value;

	cout << "\n";

	cout << "값 증가시킨 후" << endl;
	//10
	IncreaseValue(Value);
	//10
	IncreaseValue(Value);
	

	//20
	cout << g_Value << endl << endl;

	cout << "\n";

	cout << "값 감소시킨 후" << endl;

	// - 10
	DecreaseValue(Value);
	// - 20
	DecreaseValue(Value);


	// 0
	cout << g_Value << endl << endl;


	// 다른 언어에서 부러워하는 기능
	// ㄴ 특정 영역안에 새로운 영역을 만드는 기능
	{
		int Value = 0;
		int g_ConstantValue = 0;

		//기존에 쓰던 값을 날리고 재 할당(속도문제 고려)
		Value = 100;
		g_ConstantValue = 200;


	}

	// 10
	cout << Value << endl;
	// 0
	cout << g_ConstantValue << endl;


}

//게임을 구현할 때, 충돌(개체와 다른개체 간의 상호작용)을 구현할 때 전역변수를 사용하는 경우가 많다.

void IncreaseValue(int Value)
{
	int localValue = 0; //상단과 하단의 LocalValue는 서로 다른 변수

	g_Value += Value;
	localValue += Value;

	cout << "값을 증가시키는 함수에 지역 변수: " << localValue << endl;

}

void DecreaseValue(int Value)
{
	// 함수 내에서 static
	// 한번만 초기화 됨 -> 지역 변수와 달리 함수를 빠져나가도 소멸되지 않는다.
	// 정적 변/상수는 특정에서만 접근이 가능한 지역 변수의 특징과 프로그램이 종료될때까지
	// 사라지지 않는 전역 변수의 특성을 모두 지니고 있다.
	// 그렇기 때문에 선언하는 영역과 실행이 되는 그 첫순간에만 유효하다는 것을 알 수 있다.
	static int LocalValue = 0;

	g_Value += Value;
	LocalValue += Value;

	cout << "값을감소시키는 함수에 지역 변수: " << LocalValue << endl;

}

