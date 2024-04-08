#include "Family.h"

void IntroMe(Family& Family)
{
	cin >> Family.Name;
	cout << "나의 이름은" << Family.Name << "이고" << endl;
	cin >> Family.Age;
	cout << "나의 나이는" << Family.Age << "이며" << endl;
	cin >> Family.Hobby;
	cout << "나의 취미는" << Family.Hobby << "을 하는것을 좋아하고" << endl;
	cin >> Family.Region;
	cout << "내가 거주하는 지역은" << Family.Region << "에 거주하고 있습니다";
}