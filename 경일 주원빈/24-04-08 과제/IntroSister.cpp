#include "Family.h"

void IntroSister(Family& Family)
{
	cin >> Family.Name;
	cout << "������ �̸���" << Family.Name << "�̰�" << endl;
	cin >> Family.Age;
	cout << "������ ���̴�" << Family.Age << "�� �̸�" << endl;
	cin >> Family.Hobby;
	cout << "������ ��̴�" << Family.Hobby << "�� �ϴ°��� �����ϰ�" << endl;
	cin >> Family.Region;
	cout << "������ �����ϴ� ������" << Family.Region << "�� �����ϰ� �ֽ��ϴ�";
}