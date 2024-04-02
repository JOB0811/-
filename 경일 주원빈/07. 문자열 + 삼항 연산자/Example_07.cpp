#include "Example_07.h"

using std::cout;
using std::cin;
using std::endl;

#define EXAMPLE_TYPE_PRINT		1

#define EXAMPLE_TYPE_TERNARY_OPERATOR		2
#define EXAMPLE_TYPE_STRING		3

#define EXAMPLE_TYPE	EXAMPLE_TYPE_PRINT

namespace EXAMPLE_02
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		cout << "심볼릭 세팅을 하려면 이곳에서" << endl;

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR
		
		cout << "삼항 연산자" << endl;

		int numA, numB;
		cout << "정수 입력 : ";
		cin >> numA;

		// numB의 절대값을 출력하는 삼항 연산자를 출력하는 형식
		// 삼항을 쓰는 이유? : 절대값 형식은 if로도 구현할 수 있으나, ?연산자를 씀으로써 코드가 훨씬 간결화 되었다. (메모리 사용성↑)
		numB = (numA > 0) ? numA : numA * (-1);
		cout << "입력한 수의 값: " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;

		cout << "정수 입력: ";
		cin >> numberA;

		// resut값에 (numberA < 10과 비교하는 ?연산자를 넣어) 참이면 numberA;, 거짓이면 nubmerB = 100 출력
		result = numberA < 10 ? numberA : numberB;

		//
		cout << "삼항 연산의 결과값: " << result << endl;



#else
		char moonja = 'A';
		int numA = 20;
		float numB = 3.0f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : 바이트" << endl; //1
		cout << sizeof(numA) << " : 바이트" << endl;  //4
		cout << sizeof(numB) << " : 바이트" << endl; //4
		cout << sizeof(numC) << " : 바이트" << endl; //4

		printf("\n");

		/*
		C/C++은 타입에 엄격한 언어
			ㄴ이는 오류를 방지하기 위함이다.

		- 기본적으로 타입 오류를 예방할 수 있는게 NULL이다.
		
		★ 문자는 기본적으로 NULL문자가 추가 되지 않는다.
		
		- NULL?

		- <iostream>에 정의되어 있다.

		- NULL은 0 주소를 의미하며 그렇기에 포인터 변수를 초기화 할때 사용할 수 있다.

		char* p = NULL;		==		char* p = 0;
		
		int n = NULL; ->	!=		int n = 0;
		(int n = NULL 비유 :택배 상자를 받았고, 그안에 0이 있다.)

		※ 전자는 p 변수의 주소값에 0을 넣는 것이고 후자는 정수 0을 n에 넣는다는 의미!
		*/


		/*
		C / C++ 언어의 문자열 표현 방법
		ㄴ " " 조합을 통해서 문자열을 표현하는것이 가능하며 이때 char의 배열을 이용한다.
		ㄴ 또한 문자열 상수를 통해 초기화를 할 경우 널 문자를 명시적으로 기입하지 않아도 된다.
		*/

		char strA = 'A';
		char strB[4] = "abc";
		// ㄴ 1Byte가 더 들어간다.
		// ㄴ 널 문자를 마지막에 기입하기 위함

		//배열은 같은 자료형으로만 기입할 수 있다.
		//비선형 자료구조는 find를 해줘야 하지만, 선형 자료구조는 find를 해줄 수 없다.
		char strC[20] = "i like game.!";

		//i like game.!
		cout << strC << endl;

		strC[10] = '\0';

		//I like
		cout << strC << endl;

		// i + 공백만 출력
		strC[2] = '\0';

		cout << strC << endl;

		// ===============================================



		/*
		▶ 4대 문자열 + @

		- 기본적으로 문자열 조작 함수
		ㄴ 문자와 문자열을 다룰때 일반적으로 사용할 수 있는 기능들의 집합
		(하단의 기능들이 런타임 라이브러리에 속함)

		1. strlen
		ㄴ 문자열의 길이를 계산하는 기능


		2. strcmp
		ㄴ 문자열을 비교하는 기능


		3. strcpy
		ㄴ 문자열을 복사하는 기능


		4. strcat
		ㄴ 문자열을 합치는 기능		
		
		*/

		cout << "4대 문자열" << endl;

		cout << '\n';

		/*
		1. strlen(): 문자열 길이
		ㄴ. EX) strlen("문자열");

		int strlen()
		{
			return 함수;
		}
		*/


		//배열을 쓰려면 왠만한 상황에서는 포인터를 같이 써줘야 한다.
		//strlen을 쓰는 이유? : 배열에 입력된 "값만큼"만 읽어들인 후, 나머지 공간은 사용하지 않기 때문이다.(안정성↑)
		char strD[100] = "abcdef";
		int lenA = strlen(strD);

		cout << strlen(strD) << endl;
		cout << "문자열의 길이: " << lenA << endl;

		cout << '\n';

		/*
		★★ 요거 물어보는 회사가 많다더라!
		2. strcmp(문자열, 문자열) : 문자열 비교
		
		strcmp의 정의를 물어보는 것이 아니라, strcmp를 사용했을 때 나오는 값에 대해 자주 물어봄!

		//★★각자 어떤 상황에서 나오는 반환값이냐?★★
		EX)
		int strcmp(char* str1, char* str2)
		{
			if(두 문자가 같은지?)
			{
				return 0;
			}

			else
			{
				if(앞 문자가 큰지?)
				{
					return -1;
				}

				else
				{
					return 1;
				}
			}
			return 0;
		}
		*/


		char strB[10] = "abc";
		char strC[10] = "abc";
		char strD[10] = "abb";

		//게임 첫 접속 후 -> ID + PW 검증 할때 주로 사용함!
		int lenB = strcmp(strB, strC);
		int lenC = strcmp(strB, strD);


		cout << lenB << endl;
		cout << lenC << endl;

		cout << '\n';

		/*
		3. strcpy(문자열, 문자열) : 문자열 복사

		EX (cpy는 반환형이 void라는 걸 기억하자!)
		{
		void 
		}		
		*/


		char strE[10] = "ABCDEFG";
		char strF[10] = "HIJK";

		cout << strE << endl;

		//주의사항! cpy를 사용할 때 배열의 길이를 동일하게 맞춰주지 않으면, 논리오류가 발생할 것이다.
		strcpy(strF, strE);

		cout << strF << endl;

		cout << '\n';


		/*
		4. strcat(문자열, 문자열): 문자열 연결
		*/


		char strG[100] = "오늘 과제는 ";
		char strH[100] = "없으면 좋겠지?";

		char << strG << endl;

		strcat(strG, strH);
		// strncat =  유니코드나 멀티바이트냐를 선택할 수 있는 기능
		
		// strcat_s(strG, strH, bufferSize) = strcat의 확장형
		// EX) strcat_s(strG, strH, 10); ? = 오늘 과제는 없으면 => 두 문자열을 합쳐 10만큼의 크기를 출력 -> 프로그램을 터트리지 않음!(중요!)



		cout << strG << endl;

		cout << endl;
		cout << '\n';


		// 5. strtok(): 문자열 자르기
		// ㄴ 4대 문자열은 아니지만 파일 입출력에 많이 쓰이는 녀석
		// ㄴ 자를 조건(EX: _ / \ 등등 .... -> 이지만 ,는 왠만하면 사용 금지!)


		char strI[10] = "ABCD EFGH";

		strtok(strI, " ");

		cout << strI << endl;

		char strJ[100] = "이곳에 문자를"; // 캐릭터형에 배열 붙여서 써보는걸 연습하자!
		/*const*/ char* strK = "이렇게도 사용 가능";
		std::string strZ = "이게 된다고?";
		






#endif
	}
}


/*
(오늘 배운 문자열 지식을 이용해서 과제를 만들어보자. /4대 문자열 시리즈는 사용하지 않았으면 좋겠다)
과제1. 주민번호 생성기

-시작하면 원하는 생년월일 년도를 입력 받는다. (4자리, 2자리)
ㄴ 1980 / 80 => 20 / 05 (24년도보다 이후거나 너무 이전년도일경우 자동으로 앞자리 수가 적용되게 조건 적용)

ㄴ 월과 일을 입력(2자리, 1자리)
	ㄴ EX: 06 / 6

ㄴ 예외처리 : 31일이 있는 달과 30일 까지만 있는 달, 2월도 처리를 해올 것

- 성별 선택
ㄴ 남자는 1 또는 3 / 여자는 2 또는 4
ㄴ 만약 다른 값을 입력하면 성별을 랜덤하게 설정한다.

- 그리고 마지막 6자리는 랜덤으로 출력
ㄴ 단 0이 오면 안된다. (뒷자리 주민번호를 생성할때 0이라는 숫자가 하나라도 들어가면 안되게 예외처리)



(배열, 반복문, 조건문을 주로 사용해서 제작.)
과제2. 로또 당첨기

- 당첨 번호 6개 + 보너스 번호 1개

- 6개 입력

- 1등 : 당첨 번호 6개와 내가 입력한 6개의 숫자가 같을때.

- 2등 : 당첨 번호 5개 + 보너스번호 1개와 내가 입력한 6개 숫자가 일치할때

- 3등 : 당첨 번호 5개와 내가 입력한 5개의 숫자가 같을때

- 4등 : 당첨번호 4개와 내가 입력한 4개의 숫자가 같을때

- 5등 : 당첨번호 3개와 내가 입력한 3개의 숫자가 같을때




한줄 조사. 사용자 정의 자료형 조사해오기

- 노트에 적어온다.

- 비유할 것 생각해 온다.

*/