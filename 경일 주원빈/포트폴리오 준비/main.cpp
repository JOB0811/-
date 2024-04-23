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

	/*cout << "게임 시작";
	runTitle.gotoXy(35, 21);
	cout << "게임 종료";*/

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
	//			cout << "게임을 시작합니다" << endl;
	//			system("cls");
	//			/*pic.penJump();
	//			runTitle.textColor(0, 0);*/
	//			/*DrawGround(5);*/
	//			//게임 페이지 작성 후 넣기
	//			break;
	//		case KB_DOWN:
	//			cout << "게임을 종료합니다" << endl;
	//			exit(0);
	//		default:
	//			cout << "다른 키를 입력하세요." << endl;
	//			break;
	//		}
	//	}
	//}
}

