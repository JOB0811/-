#include<iostream>
#include<windows.h>



using std::cout;
using std::cin;
using std::endl;





class runGameSelect
{

public:
	void RunGameSelect(); //RUN 타이틀 그리는 함수
	void gotoXy(int x, int y);
	void textColor(int foreground, int background);
	void among();
};



void runGameSelect::RunGameSelect()
{

	int picY = 4;
	textColor(15,15);
	gotoXy(67, picY+10);
	cout << "■■■■■■■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■■■■ ";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■■■■■■■■■■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■■■■" << endl; //1라인
	gotoXy(67, picY + 21);
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■" << endl; //2라인
	gotoXy(67, picY + 22);
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■■■■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■" << endl; //3라인
	gotoXy(67, picY + 23);
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■" << endl; // 4라인
	gotoXy(67, picY + 24);
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■";
	textColor(0,0);
	cout << "■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■";
	textColor(0,0);
	cout << "■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■";
	textColor(15,15);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■";
	textColor(15,15);
	cout << "■" << endl; // 5라인
	gotoXy(65, picY + 25);
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15,15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■";
	textColor(0,0);
	cout << "■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■■■■■■■■■";
	textColor(15, 15);
	cout << "■■" << endl; // 6라인
	gotoXy(65, picY + 26);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■■■■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■■■";
	textColor(15, 15);
	cout << "■■" << endl; // 7라인
	gotoXy(65, picY + 27);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■■■■";
	textColor(15, 15);
	cout << "■■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■■■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■■";
	textColor(15, 15);
	cout << "■■■" << endl; // 8라인
	gotoXy(65, picY + 28);
	cout << "■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■■■";
	textColor(0, 0);
	cout << "■■■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■■";
	textColor(15, 15);
	cout << "■■" << endl; //9라인
	gotoXy(65, picY + 29);
	cout << "■";
	textColor(0,0);
	cout << "■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■■■■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■" << endl; // 10라인
	gotoXy(65, picY + 30);
	cout << "■■■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■■■■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■";
	textColor(0, 0);
	cout << "■■■";
	textColor(15, 15);
	cout << "■■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■■■■■■";
	textColor(0, 0);
	cout << "■";
	textColor(15, 15);
	cout << "■■■■■"; // 11라인
	gotoXy(95, picY + 31);
	cout << "■■■" << endl;


}


void runGameSelect::among()
{
	
	/*static bool legani = true;*/
	textColor(15, 15);
	cout << "   ■■■" << endl;
	cout << "■■■■■" << endl;
	cout << "■■■■■" << endl;
	cout << "  ■    ■" << endl;
}



void runGameSelect::gotoXy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void  runGameSelect::textColor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

