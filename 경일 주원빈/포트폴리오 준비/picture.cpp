#include "picture.h"



void picture::heartpicture()
{
	gotoxy(5, 2);
	textColor(4, 4);
	cout << "бс";
	textColor(15, 15);
	cout << "бс";
	gotoxy(4, 3);
	textColor(4, 4);
	cout << "бсбсбсбсбс";
	gotoxy(5, 4);
	textColor(4, 4);
	cout << "бсбсбс";
	gotoxy(6, 5);
	textColor(4, 4);
	cout << "бс";
}



void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void  textColor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
