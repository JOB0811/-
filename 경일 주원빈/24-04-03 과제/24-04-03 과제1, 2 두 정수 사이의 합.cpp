#include<iostream>
#include<stdlib.h>
#include<time.h>

using std::cout;
using std::cin;
using std::endl;

/*

 과제1. 하단의 출력문에서 어떤 값이 출력될지 생각해보고(틀려도 됨), 다만 왜 이 값이 나오는 지에 대해서 논리적으로 사고해서 주석 달아보기.
	int* pArrB[] = { pNumA, pNumB, pNumC };
	int** dpArr = pArrB;
	
	//pArrB[0]의 첫번째 인덱스 주소
	왜냐하면 int* pArrB는 처음 선언할때부터 포인터 배열 형식으로 선언 되있어, 그안에 들어가는 요소의 주소값을 저장하게 된다.
	pNumA는 pArrB[]의 첫번째 요소이고, 첫번째 요소는 인덱스[0]이기 때문에  인덱스 첫번째 주소일 것이다.
	cout << pNumA << endl;
	//pArrB[0]의 첫번째 인덱스 주소
	왜냐하면 pArrB[]라는 배열의 첫번째 요소는 pNumA이므로, pArrB를 참조했을때 제일 먼저 나오는 값은 첫번째 요소의 인덱스일 것이라고
	생각했기 때문이다.
	cout << pArrB << endl;
	//pNumA의 요소 값
	왜냐하면 dpArr은 pArrB에서 **를 통해 참조를 두번 하였기 때문에
	*참조 한번은 pArrB[]의 첫번째 주소값. **참조 두번은 그 주소값 안의 요소값이 나올 것이라고 생각했기 때문이다.
	cout << dpArr << endl;


	



과제 2. 간단한 복습 과제

- 두 정수 사이의 합을 구하는 프로그램을 만들어 올 것
ㄴ 두개의 숫자를 사용자를 통해 입력 받는다.
ㄴ 입력한 두 숫자의 사이의 합을 출력하면 OK
ㄴ 예외처리 : 5번과 1번을 누른다->재입력 처리(큰 숫자가 앞에 오면 재입력)
ㄴ 예외처리2 : 결과값이 100 미만이라면 프로그램은 계속 돌아간다.
ㄴ 또한 숫자의 합이 100이상이면 프로그램은 종료된다.
ㄴ EX) 1과 5를 입력 = 결과값: 9

*/

int numA;
int numB;
int sum;
int betnum;


int count = 0;


void main()
{
	while (sum <= 100)
	{
		cout << "두 정수를 입력해주세요 : ";
		cin >> numA;
		cin >> numB;

		if (numB < numA)
		{
			cout << "앞에 입력받는 수는 뒤에 있는 수보다 클 수 없습니다! 다시 입력해주세요" << endl;
			continue;
		}
		betnum = numB - numA - 1;
		sum = ((numA + numB) * betnum) / 2;
		cout << "두 정수 사이의 의 합은" << sum << "입니다." << endl;

		if (sum < 100)
		{
			cout << "두 정수의 합이 100 미만이므로 숫자를 다시 입력 받겠습니다." << endl;
			continue;
		}
	}
}