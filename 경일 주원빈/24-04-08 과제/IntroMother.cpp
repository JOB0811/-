#include "Family.h"

void IntroMother(Family& Family)
{
	cin >> Family.Name;
	cout << "��Ӵ��� ������" << Family.Name << "�̽ð�" << endl;
	cin >> Family.Age;
	cout << "��Ӵ��� ���̴�" << Family.Age << "�� �̽ø�" << endl;
	cin >> Family.Hobby;
	cout << "��Ӵ��� ��̴�" << Family.Hobby << "�� �ϴ°��� �����Ͻø�" << endl;
	cin >> Family.Region;
	cout << "��Ӵϰ� �����Ͻô� ������" << Family.Region << "�� �����Ͻʴϴ�.";
}