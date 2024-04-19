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
	gotoXy(7, picY);
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
	gotoXy(7, picY + 1);
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
	gotoXy(7, picY + 2);
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
	gotoXy(7, picY + 3);
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
	gotoXy(7, picY + 4);
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
	gotoXy(5, picY + 5);
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
	gotoXy(5, picY + 6);
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
	gotoXy(5, picY + 7);
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
	gotoXy(5, picY + 8);
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
	gotoXy(5, picY + 9);
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
	gotoXy(5, picY + 10);
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
	gotoXy(35, picY + 11);
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

