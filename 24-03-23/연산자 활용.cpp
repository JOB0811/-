#include<iostream>

using std::cin;
using std::cout;
using std::endl;


/*����1.������ Ȱ��


a.�ΰ��� ������ �޾Ƽ� �� ���� ������ ������ ����� ����ϴ� ���α׷� �ۼ�

b. 3���� ����(num1, num2, num3)�� �޾Ƽ� ���� ������ ����� ����ϴ� ���α׷� �ۼ�
�� EX : (num1 + num2) * (num3 + num1) % num1 = ?

c.�Է� ���� �� ������ ���������� ��� �Ǵ� ��� �������� ����ϴ� ���α׷� �ۼ�
�� EX : 7�� 2�� �ԷµǸ� ������ 3, �������� 1�� ��µǸ� OK

*/

int main() {
	//a ����

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

	// b ����
	int num1, num2, num3, sum1;

	cin >> num1;
	cout << "\n";
	cin >> num2;
	cout << "\n";
	cin >> num3;
	cout << "\n";
	sum1 = (num1 + num2) * (num3 + num1) % num1;
	cout << sum1 << endl;


	// c ����

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