#include<iostream>
#include<time.h>
using std::cout;
using std::endl;
/*-1 ~5까지의 랜덤숫자를 정수형에 담아라.

- 6 ~19까지의 랜덤숫자를 정수형에 담아라.

- 23 ~189까지의 랜덤 숫자를 정수형에 담아라.

*/

// 1~5 랜덤 숫자.
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
