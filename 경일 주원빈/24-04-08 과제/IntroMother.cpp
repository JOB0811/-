#include "Family.h"

void IntroMother(Family& Family)
{
	cin >> Family.Name;
	cout << "어머니의 성함은" << Family.Name << "이시고" << endl;
	cin >> Family.Age;
	cout << "어머니의 나이는" << Family.Age << "세 이시며" << endl;
	cin >> Family.Hobby;
	cout << "어머니의 취미는" << Family.Hobby << "을 하는것을 좋아하시며" << endl;
	cin >> Family.Region;
	cout << "어머니가 거주하시는 지역은" << Family.Region << "에 거주하십니다.";
}