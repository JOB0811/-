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
	cout << "��";
	textcolor(15, 15);
	cout << "��";
	gotoxy(4, 3);
	textcolor(4, 4);
	cout << "������";
	gotoxy(5, 4);
	textcolor(4, 4);
	cout << "����";
	gotoxy(6, 5);
	textcolor(4, 4);
	cout << "��";
}

void picture::penStand()
{
	gotoxy(5, standy); // 1����
	textcolor(8, 8);
	cout << "�����";
	gotoxy(4, standy + 1); // 2����
	textcolor(8, 8);
	cout << "�������";
	gotoxy(3, standy + 2); // 3����
	textcolor(8, 8);
	cout << "�����";
	textcolor(15, 15);
	cout << "����";
	gotoxy(3, standy + 3); // 4����
	textcolor(8, 8);
	cout << "����";
	textcolor(15, 15);
	cout << "�����";
	textcolor(14, 14);
	cout << "���";
	gotoxy(2, standy + 4); // 5����
	textcolor(8, 8);
	cout << "�����";
	textcolor(15, 15);
	cout << "����";
	textcolor(14, 14);
	cout << "����";
	gotoxy(2, standy + 5); // 6����
	textcolor(8, 8);
	cout << "�����";
	textcolor(15, 15);
	cout << "�����";
	textcolor(8, 8);
	cout << "��";
	gotoxy(2, standy + 6); // 7����
	textcolor(8, 8);
	cout << "������";
	textcolor(15, 15);
	cout << "����";
	textcolor(8, 8);
	cout << "��";
	gotoxy(2, standy + 7); // 8����
	textcolor(8, 8);
	cout << "������";
	textcolor(15, 15);
	cout << "����";
	textcolor(8, 8);
	cout << "��";
	gotoxy(2, standy + 8); // 9����
	textcolor(8, 8);
	cout << "���������";
	gotoxy(2, standy + 9); // 10����
	textcolor(8, 8);
	cout << "����";
	textcolor(14, 14);
	cout << "����";
	textcolor(8, 8);
	cout << "���";
	gotoxy(4, standy + 10); // 11����
	textcolor(8, 8);
	cout << "��";
	textcolor(14, 14);
	cout << "����";
	textcolor(8, 8);
	cout << "��";
}

void picture::penJump(int penY)
{
	gotoxy(6, jumpy); // 1����
	textcolor(8, 8);
	cout << "����";
	gotoxy(5, jumpy + 1); // 2����
	textcolor(8, 8);
	cout << "������"; // 4����
	gotoxy(4, jumpy + 2);
	textcolor(8, 8);
	cout << "�����";
	textcolor(15, 15);
	cout << "��";
	textcolor(8, 8);
	cout << "��";
	textcolor(15, 15);
	cout << "��";
	textcolor(8, 8);
	cout << "��";
	gotoxy(3, jumpy + 3); // 4����
	textcolor(8, 8);
	cout << "�����";
	textcolor(15, 15);
	cout << "����";
	textcolor(8, 8);
	cout << "����";
	gotoxy(3, jumpy + 4); // 5����
	textcolor(8, 8);
	cout << "����";
	textcolor(15, 15);
	cout << "����";
	textcolor(14, 14);
	cout << "���";
	textcolor(8, 8);
	cout << "��";
	gotoxy(2, jumpy + 5); // 6����
	textcolor(8, 8);
	cout << "�����";
	textcolor(15, 15);
	cout << "����";
	textcolor(14, 14);
	cout << "���";
	gotoxy(1, jumpy + 6); // 7����
	textcolor(8, 8);
	cout << "������";
	textcolor(15, 15);
	cout << "�����";
	textcolor(8, 8);
	cout << "��";
	gotoxy(2, jumpy + 7); // 8 ����
	textcolor(8, 8);
	cout << "������";
	textcolor(15, 15);
	cout << "����";
	textcolor(8, 8);
	cout << "��";
	gotoxy(2, jumpy + 8); // 9����
	textcolor(8, 8);
	cout << "�������";
	textcolor(15, 15);
	cout << "��";
	textcolor(8, 8);
	cout << "��";
	textcolor(14, 14);
	cout << "���";
	gotoxy(2, jumpy + 9); // 10����
	textcolor(8, 8);
	cout << "��";
	textcolor(14, 14);
	cout << "���";
	textcolor(8, 8);
	cout << "������";
	textcolor(8, 8);
	cout << "���";
	gotoxy(3, jumpy + 10); // 11����
	textcolor(14, 14);
	cout << "���";
	textcolor(8, 8);
	cout << "�����";
	textcolor(14, 14);
	cout << "���";
	gotoxy(3, jumpy + 11); // 12����
	textcolor(14, 14);
	cout << "���";
	textcolor(15, 15);
	cout << "�����";
	textcolor(14, 14);
	cout << "��";

}

void picture::penSlide(int penY)
{
	gotoxy(4, slidey); // 1����
	textcolor(8, 8);
	cout << "��������";
	gotoxy(3, slidey + 1); // 2����
	textcolor(8, 8);
	cout << "���������";
	textcolor(15, 15);
	cout << "��";
	gotoxy(3, slidey + 2); // 3����
	textcolor(8, 8);
	cout << "�������";
	textcolor(15, 15);
	cout << "�����";
	gotoxy(3, slidey + 3); // 4����
	cout << "������";
	textcolor(15, 15);
	cout << "������";
	gotoxy(2, slidey + 4); // 5����
	textcolor(14, 14);
	cout << "����";
	textcolor(8, 8);
	cout << "��";
	textcolor(15, 15);
	cout << "������";
	textcolor(14, 14);
	cout << "����";
	gotoxy(2, slidey + 5); // 6����
	textcolor(14, 14);
	cout << "���";
	textcolor(8, 8);
	cout << "���";
	textcolor(15, 15);
	cout << "������";
	textcolor(14, 14);
	cout << "��";
	textcolor(8, 8);
	cout << "��";
	gotoxy(4, slidey + 6); // 7����
	textcolor(8, 8);
	cout << "���";
	textcolor(15, 15);
	cout << "������";
	textcolor(8, 8);
	cout << "��";
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

