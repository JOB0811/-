#include<iostream>
#include<time.h>
using std::cout;
using std::endl;
/*-1 ~5������ �������ڸ� �������� ��ƶ�.

- 6 ~19������ �������ڸ� �������� ��ƶ�.

- 23 ~189������ ���� ���ڸ� �������� ��ƶ�.

*/

// 1~5 ���� ����.
int main() {
	srand(time(NULL));
	int numberA,numberB,numberC = 0;
	numberA = rand() % 5 + 1;
	numberB = rand() % 14 + 6;
	numberC = rand() % 168 + 23;
	cout << numberA << endl;
	cout << numberB << endl;
	cout << numberC;

	


}
