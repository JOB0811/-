#include "picture.h"



void picture::heartpicture()
{
	gotoxy(5, 2);
	textColor(4, 4);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	gotoxy(4, 3);
	textColor(4, 4);
	cout << "������";
	gotoxy(5, 4);
	textColor(4, 4);
	cout << "����";
	gotoxy(6, 5);
	textColor(4, 4);
	cout << "��";
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
