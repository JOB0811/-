#include "runGameSelect.h"
#include "key.h"
#include "character.h"
#include "map.h"
#include "backGround.h"
#include<iomanip>

int choice;


void fullscreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}



void main()
{
	fullscreen();
	map Map;
	character pic;
	backGround bg;
	Map.drawMap();
	bg.sun();
	pic.penStand(pic penY);
	/*runGameSelect runTitle;
	picture pic;
	(runTitle.* (&runGameSelect::RunGameSelect))(); */


	/*runTitle.textColor(15, 0);
	runTitle.gotoXy(35, 20);*/

	/*cout << "���� ����";
	runTitle.gotoXy(35, 21);
	cout << "���� ����";*/

	/*runTitle.among();*/


	


	//while (true)
	//{
	//	key enterkey;
	//	enterkey.keyControl();

	//	{

	//		/*runTitle.gotoXy(35, 22);*/
	//		choice = enterkey.keyControl();
	//		system("cls");

	//		switch (choice) {
	//		case KB_UP:
	//			cout << "������ �����մϴ�" << endl;
	//			system("cls");
	//			/*pic.penJump();
	//			runTitle.textColor(0, 0);*/
	//			/*DrawGround(5);*/
	//			//���� ������ �ۼ� �� �ֱ�
	//			break;
	//		case KB_DOWN:
	//			cout << "������ �����մϴ�" << endl;
	//			exit(0);
	//		default:
	//			cout << "�ٸ� Ű�� �Է��ϼ���." << endl;
	//			break;
	//		}
	//	}
	//}
}

