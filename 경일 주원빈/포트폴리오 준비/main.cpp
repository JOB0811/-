#include "runGameSelect.h"
#include "picture.h"
#include "key.h"
#include<iomanip>

int choice;

void main()
{
	runGameSelect runTitle;
	void (runGameSelect:: * RunGameSelect)() = &runGameSelect::RunGameSelect;

	(runTitle.*RunGameSelect)();

	runTitle.textColor(15, 0);
	runTitle.gotoXy(35, 20);
	cout << "���� ����";
	runTitle.gotoXy(35, 21);
	cout << "���� ����";

	runTitle.among();

	key enterkey;
	picture pic;

	while (true)
	{
		runTitle.gotoXy(35, 22);
		choice = enterkey.keyControl();

		switch (choice) {
		case KB_UP:
			cout << "������ �����մϴ�" << endl;
			pic.penStand();
			break;
		case KB_DOWN:
			cout << "������ �����մϴ�" << endl;
			exit(0);
		default:
			cout << "�ٸ� Ű�� �Է��ϼ���." << endl;
			break;
		}
	}
}