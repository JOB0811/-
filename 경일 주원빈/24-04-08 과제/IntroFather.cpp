#include "Family.h"

void IntroFather(Family& Family)
{
	cin >> Family.Name;
	cout << "�ƹ����� ������" << Family.Name << "�̽ð�" << endl;
	cin >> Family.Age;
	cout << "�ƹ����� ���̴�" << Family.Age << "�� �̽ø�" << endl;
	cin >> Family.Hobby;
	cout << "�ƹ����� ��̴�" << Family.Hobby << "�� �ϴ°��� �����Ͻø�" << endl;
	cin >> Family.Region;
	cout << "�ƹ����� �����Ͻô� ������" << Family.Region << "�� �����Ͻʴϴ�.";
}