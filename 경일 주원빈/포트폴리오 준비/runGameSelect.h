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
};



void runGameSelect::RunGameSelect()
{
	textColor(15,15);
	gotoXy(7, 5);
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
	gotoXy(7, 6);
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
	gotoXy(7, 7);
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
	gotoXy(7, 8);
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
	gotoXy(7, 9);
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
	gotoXy(5, 10);
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
	gotoXy(5, 11);
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
	gotoXy(5, 12);
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
	gotoXy(5, 13);
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
	gotoXy(5, 14);
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
	gotoXy(5, 15);
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
	gotoXy(35, 16);
	cout << "■■■" << endl;


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

