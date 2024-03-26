#include<iostream>

using std::cin;
using std::cout;
using std::endl;


/*과제1.연산자 활용


a.두개의 정수를 받아서 두 수의 덧셈과 뺄셈의 결과를 출력하는 프로그램 작성

b. 3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성
ㄴ EX : (num1 + num2) * (num3 + num1) % num1 = ?

c.입력 받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
ㄴ EX : 7과 2가 입력되면 몫으로 3, 나머지는 1이 출력되면 OK

*/

int main() {
	//a 과제

	int numberA, numberB, numberC, numberD;
	cin >> numberA;
	cout << "\n";
	cin >> numberB;

	numberC = numberA + numberB;
	numberD = numberA - numberB;

	cout << "\n";


	cout << numberC << endl;

	cout << "\n";

	cout << numberD << endl;

	cout << "\n";

	// b 과제
	int num1, num2, num3, sum1;

	cin >> num1;
	cout << "\n";
	cin >> num2;
	cout << "\n";
	cin >> num3;
	cout << "\n";
	sum1 = (num1 + num2) * (num3 + num1) % num1;
	cout << sum1 << endl;


	// c 과제

	int cnum1, cnum2, csum1, csum2;

	cin >> cnum1;
	cout << "\n";
	cin >> cnum2;
	cout << "\n";
	csum1 = cnum1 / cnum2;
	csum2 = cnum1 % cnum2;
	cout << csum1 << endl;
	cout << csum2 << endl;
}