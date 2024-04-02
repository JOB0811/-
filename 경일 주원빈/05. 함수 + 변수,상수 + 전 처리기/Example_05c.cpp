#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#pragma region 전처리기
/*

▶ 전처리기

-실행 파일을 생성하는 과정에서 컴파일하기 직전, 소스 파일 내에 존재하는 선행 처리 지시문을
처리하는 작업을 의미한다.

- 전처리가 실행되면 각 코드 파일에서 지시자를 찾는다.
ㄴ. 지시자는 #으로 시작해서 줄 바꿈으로 끝나는 코드

※ 선행 처리를 위한 명령에는 맨 앞에 #기호가 붙는다는 공통점이 있다.


▷ C/C++ 코드를 실행하는 과정

- 전처리기 -> 컴파일러 -> 어셈블러 -> 링커

	1. 전처리기(Preprocessor)
	ㄴ. 헤더 파일 삽입, 코드의 주석 제거, 문법 검토, 매크로등을 치환하는 기능을 한다.

	2. 컴파일러
	ㄴ. 어셈블리 파일로 변환한다.

	3. 어셈블러
	ㄴ. 어셈블리 코드를 기계어(0 or 1)로 변환하여 오브젝트 파일을 생성한다.

	4. 링커
	ㄴ. 각각의 오브젝트 파일들을 묶어서 실행 코드 파일로 변환한다.

- 소스 코드 -> 바이너리 -> 실행 파일

* 디테일

1. 내가 작성한 소스파일은 먼저 소스파일 처리를 하는 선행 처리기를 가지고
2. 컴파일 되어
3. 오브젝트 파일이 생성되고
4. 각각의 오브젝트 파일들을 묶어서 실행 코드 파일로 변환된다.

▶ 선행처리를 위한 명령

- 전처리기문 * 전처리기 연산자

- 파일 처리를 위한 전처리기문

1. #include
#include<파일 이름>
ㄴ 표준 라이브러리(미리 정의된 include 폴더에서 파일을 찾는다)
#include"파일 이름" (.hpp = 헤더 파일과 cpp 파일을 동시에 인식시키겠다.)
ㄴ 사용자 정의 헤더 파일 (현재의 소스 코드가 저장되어 있는 폴더에서 먼저 찾고,
						  파일이 없다면 미리 정의된 include 폴더에서 파일을 찾는다.)



2. 형태 정의를 위한 전처리기문

1. #define (전처리문 중 #define이 제일 많이 사용 됨)
ㄴ define 키워드는 매크로 상수 또는 매크로 함수를 정의하는 키워드

2. #undef
ㄴ 매크로를 해제해 주는 키워드

- 조건부 컴파일 시리즈들(콘솔 포트폴리오 작성시 반드시 들어가줘야 하는 것들)

1. #if, #ifdef, #ifndef, #else, #elif, #endif

#ifdef : 식별자가 정의되어 있다면 참

#ifndef : 식별자가 정의되어 있지 않다면 참

#endif: #if or #ifdef or #ifndef에 대한 전처리기 부분을 종료

※ 코드 설계에서 잘 적용이 된다면 실행 속도에 따른 큰 이득을 볼 수 있다.
ㄴ 선택적 컴파일 수행할것이기 때문


- #pragma

- 컴파일러의 기능을 확장시킬 수 있게 나온 문법
ㄴ 어떠한 동작/ 행위를 정해주기 위해 사용한다.

- 사용중인 컴파일러의 버전 / OS에 따라 동작 여부가 갈린다.
- 윈도우 코드는 윈도우만 / 리눅스 코드는 리눅스만

#pragma once : 링크가 수행될때 헤더 파일이 한번만 포함되게 한다.


#pragma region
-> 코드를 개요/ 축소가 가능하게 묶어주는 기능
#pragma endregion

#pragma message("Example_05_C.cpp 수정  금지)
ㄴ 컴파일시 출력창에 메세지 출력
ㄴ 주로 협업시 / 혹은 본인이 한 중요한 작업 까먹지 않게 기입할때 사용한다.

▶ 매크로 상수를 정의할때 주의점

1. #define문은 코드를 생성하는 명령이 아니며 매크로의 이름도 일종의 명칭이기 때문에
명칭 규격에 맞게 작성해야 한다.

2. 매크로 이름에는 공백이 들어갈 수 없지만 매크로 실제 값은 공백을 가질 수 있다.
	ㄴ#define MESSAGE "똑바로 합시다."

3. 문자열 상수내에 있는 매크로나 다른 명칭의 일부로 포함된 경우는 치환되지 않는다.
	ㄴ #define NUM -> NUM을 찾아 5로 치환

4. 매크로는 중첩이 가능
	ㄴ define A 3
	S  define B (A * 3)


5. 값을 가지지 않는 빈 매크로도 정의 가능
	ㄴ. #define AAA => 값 자체가 없기 때문에 매크로 상수 자체만 존재할 뿐이다.

6. 매크로 상수는 단순히 컴파일 전에 코드를 튜닝하는 전처리기에 의해서 자라나는 상수이기 때문에
컴팡일러 입장에서는 리터럴 상수와 동일 시 된다.
	ㄴ 컴파일러는 매크로 상수의 존재를 알지 못한다.

*/
#pragma endregion

//#pragma message("Example_05_C.cpp 수정 금지")

// 매크로 정의 : #define 매크로명 실제값
// ㄴ 매크로에 표기법은 대문자 + 스네이크

#define EXAMPLE_1 1 
#define EXAMPLE_2 1

#undef EXAMPLE_2
#define EXAMPLE_2 2

// c언어 스타일
#define TRUE 1
#define FALSE 0

#define ADD(a) ((a)) * (a))

void GetMultipleValue(int numA);

void main() 
{
	cout << ADD(5) << endl;
	GetMultipleValue(5);
}

#ifdef EXAMPLE_1
cout << "1번 예시 출력" << endl;
#endif // End of EXAMPLE_1

#if(EXAMPLE_2 == 1)
	cout << "2번 예시 출력" << endl;
#elif EXAMPLE_3
	cout << "3번 예시 출력" << endl;
#elif(EXAMPLE_2 == 2)
	cout << "4번 예시 출력" << endl;
#endif // End of EXAMPLE_2

void GetMultipleValue(int numA)
{
	cout << numA * numA << endl;
}