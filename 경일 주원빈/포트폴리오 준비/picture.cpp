#include "picture.h"
#include<conio.h>
#include<time.h>

int standy = 2;
int jumpy = 1;
int slidey = 2;

void picture::heartpicture()
{
	gotoxy(5, 2);
	textcolor(4, 4);
	cout << "■";
	textcolor(15, 15);
	cout << "■";
	gotoxy(4, 3);
	textcolor(4, 4);
	cout << "■■■■■";
	gotoxy(5, 4);
	textcolor(4, 4);
	cout << "■■■";
	gotoxy(6, 5);
	textcolor(4, 4);
	cout << "■";
}

void picture::penStand()
{
	gotoxy(5, standy); // 1라인
	textcolor(8, 8);
	cout << "■■■■";
	gotoxy(4, standy + 1); // 2라인
	textcolor(8, 8);
	cout << "■■■■■■";
	gotoxy(3, standy + 2); // 3라인
	textcolor(8, 8);
	cout << "■■■■";
	textcolor(15, 15);
	cout << "■■■";
	gotoxy(3, standy + 3); // 4라인
	textcolor(8, 8);
	cout << "■■■";
	textcolor(15, 15);
	cout << "■■■■";
	textcolor(14, 14);
	cout << "■■";
	gotoxy(2, standy + 4); // 5라인
	textcolor(8, 8);
	cout << "■■■■";
	textcolor(15, 15);
	cout << "■■■";
	textcolor(14, 14);
	cout << "■■■";
	gotoxy(2, standy + 5); // 6라인
	textcolor(8, 8);
	cout << "■■■■";
	textcolor(15, 15);
	cout << "■■■■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(2, standy + 6); // 7라인
	textcolor(8, 8);
	cout << "■■■■■";
	textcolor(15, 15);
	cout << "■■■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(2, standy + 7); // 8라인
	textcolor(8, 8);
	cout << "■■■■■";
	textcolor(15, 15);
	cout << "■■■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(2, standy + 8); // 9라인
	textcolor(8, 8);
	cout << "■■■■■■■■";
	gotoxy(2, standy + 9); // 10라인
	textcolor(8, 8);
	cout << "■■■";
	textcolor(14, 14);
	cout << "■■■";
	textcolor(8, 8);
	cout << "■■";
	gotoxy(4, standy + 10); // 11라인
	textcolor(8, 8);
	cout << "■";
	textcolor(14, 14);
	cout << "■■■";
	textcolor(8, 8);
	cout << "■";
}

void picture::penJump(int penY)
{
	gotoxy(6, jumpy); // 1라인
	textcolor(8, 8);
	cout << "■■■";
	gotoxy(5, jumpy + 1); // 2라인
	textcolor(8, 8);
	cout << "■■■■■"; // 4라인
	gotoxy(4, jumpy + 2);
	textcolor(8, 8);
	cout << "■■■■";
	textcolor(15, 15);
	cout << "■";
	textcolor(8, 8);
	cout << "■";
	textcolor(15, 15);
	cout << "■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(3, jumpy + 3); // 4라인
	textcolor(8, 8);
	cout << "■■■■";
	textcolor(15, 15);
	cout << "■■■";
	textcolor(8, 8);
	cout << "■■■";
	gotoxy(3, jumpy + 4); // 5라인
	textcolor(8, 8);
	cout << "■■■";
	textcolor(15, 15);
	cout << "■■■";
	textcolor(14, 14);
	cout << "■■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(2, jumpy + 5); // 6라인
	textcolor(8, 8);
	cout << "■■■■";
	textcolor(15, 15);
	cout << "■■■";
	textcolor(14, 14);
	cout << "■■";
	gotoxy(1, jumpy + 6); // 7라인
	textcolor(8, 8);
	cout << "■■■■■";
	textcolor(15, 15);
	cout << "■■■■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(2, jumpy + 7); // 8 라인
	textcolor(8, 8);
	cout << "■■■■■";
	textcolor(15, 15);
	cout << "■■■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(2, jumpy + 8); // 9라인
	textcolor(8, 8);
	cout << "■■■■■■";
	textcolor(15, 15);
	cout << "■";
	textcolor(8, 8);
	cout << "■";
	textcolor(14, 14);
	cout << "■■";
	gotoxy(2, jumpy + 9); // 10라인
	textcolor(8, 8);
	cout << "■";
	textcolor(14, 14);
	cout << "■■";
	textcolor(8, 8);
	cout << "■■■■■";
	textcolor(8, 8);
	cout << "■■";
	gotoxy(3, jumpy + 10); // 11라인
	textcolor(14, 14);
	cout << "■■";
	textcolor(8, 8);
	cout << "■■■■";
	textcolor(14, 14);
	cout << "■■";
	gotoxy(3, jumpy + 11); // 12라인
	textcolor(14, 14);
	cout << "■■";
	textcolor(15, 15);
	cout << "■■■■";
	textcolor(14, 14);
	cout << "■";

}

void picture::penSlide(int penY)
{
	gotoxy(4, slidey); // 1라인
	textcolor(8, 8);
	cout << "■■■■■■■";
	gotoxy(3, slidey + 1); // 2라인
	textcolor(8, 8);
	cout << "■■■■■■■■";
	textcolor(15, 15);
	cout << "■";
	gotoxy(3, slidey + 2); // 3라인
	textcolor(8, 8);
	cout << "■■■■■■";
	textcolor(15, 15);
	cout << "■■■■";
	gotoxy(3, slidey + 3); // 4라인
	cout << "■■■■■";
	textcolor(15, 15);
	cout << "■■■■■";
	gotoxy(2, slidey + 4); // 5라인
	textcolor(14, 14);
	cout << "■■■";
	textcolor(8, 8);
	cout << "■";
	textcolor(15, 15);
	cout << "■■■■■";
	textcolor(14, 14);
	cout << "■■■";
	gotoxy(2, slidey + 5); // 6라인
	textcolor(14, 14);
	cout << "■■";
	textcolor(8, 8);
	cout << "■■";
	textcolor(15, 15);
	cout << "■■■■■";
	textcolor(14, 14);
	cout << "■";
	textcolor(8, 8);
	cout << "■";
	gotoxy(4, slidey + 6); // 7라인
	textcolor(8, 8);
	cout << "■■";
	textcolor(15, 15);
	cout << "■■■■■";
	textcolor(8, 8);
	cout << "■";
}



void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void textcolor(int foreground, int background) {
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

