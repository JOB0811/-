#include "runGameSelect.h"
#include "key.h"
//#include "gamePlay.h"
//#include "gamePlay.cpp"
#include<iomanip>

int choice;


void main()
{
	runGameSelect runTitle;
	void (runGameSelect:: * RunGameSelect)() = &runGameSelect::RunGameSelect; // ��� �Լ� ������ ����

	(runTitle.*RunGameSelect)(); // ��� �Լ� �����͸� ���� ��� �Լ� ȣ��

	runTitle.textColor(15, 0);
	runTitle.gotoXy(35, 20);

	cout << "���� ����";
	runTitle.gotoXy(35, 21);
	cout << "���� ����";

	runTitle.among();


	while (true)
	{
		key enterkey;
		enterkey.keyControl();


		{

			runTitle.gotoXy(35, 22);
			choice = enterkey.keyControl();
			system("cls");

			switch (choice) {
			case KB_UP:
				cout << "������ �����մϴ�" << endl;
				system("cls");
				/*DrawGround(5);*/
				//���� ������ �ۼ� �� �ֱ�
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
}