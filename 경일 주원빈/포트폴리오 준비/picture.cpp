#include "picture.h"
#include<conio.h>
#include<time.h>

int standY = 2;
int jumpY = 1;

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

void picture::penStand(int penY)
{
	gotoxy(5, standY); // 1����
	textColor(8, 8);
	cout << "�����";
	gotoxy(4, standY + 1); // 2����
	textColor(8, 8);
	cout << "�������";
	gotoxy(3, standY + 2); // 3����
	textColor(8, 8);
	cout << "�����";
	textColor(15, 15);
	cout << "����";
	gotoxy(3, standY + 3); // 4����
	textColor(8, 8);
	cout << "����";
	textColor(15, 15);
	cout << "�����";
	textColor(14, 14);
	cout << "���";
	gotoxy(2, standY + 4); // 5����
	textColor(8, 8);
	cout << "�����";
	textColor(15, 15);
	cout << "����";
	textColor(14, 14);
	cout << "����";
	gotoxy(2, standY + 5); // 6����
	textColor(8, 8);
	cout << "�����";
	textColor(15, 15);
	cout << "�����";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, standY + 6); // 7����
	textColor(8, 8);
	cout << "������";
	textColor(15, 15);
	cout << "����";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, standY + 7); // 8����
	textColor(8, 8);
	cout << "������";
	textColor(15, 15);
	cout << "����";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, standY + 8); // 9����
	textColor(8, 8);
	cout << "���������";
	gotoxy(2, standY + 9); // 10����
	textColor(8, 8);
	cout << "����";
	textColor(14, 14);
	cout << "����";
	textColor(8, 8);
	cout << "���";
	gotoxy(4, standY + 10); // 11����
	textColor(8, 8);
	cout << "��";
	textColor(14, 14);
	cout << "����";
	textColor(8, 8);
	cout << "��";
}

void picture::penJump(int penY)
{
	gotoxy(6, jumpY); // 1����
	textColor(8, 8);
	cout << "����";
	gotoxy(5, jumpY + 1); // 2����
	textColor(8, 8);
	cout << "������"; // 4����
	gotoxy(4, jumpY + 2);
	textColor(8, 8);
	cout << "�����";
	textColor(15, 15);
	cout << "��";
	textColor(8, 8);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(8, 8);
	cout << "��";
	gotoxy(3, jumpY + 3); // 4����
	textColor(8, 8);
	cout << "�����";
	textColor(15, 15);
	cout << "����";
	textColor(8, 8);
	cout << "����";
	gotoxy(3, jumpY + 4); // 5����
	textColor(8, 8);
	cout << "����";
	textColor(15, 15);
	cout << "����";
	textColor(14, 14);
	cout << "���";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, jumpY + 5); // 6����
	textColor(8, 8);
	cout << "�����";
	textColor(15, 15);
	cout << "����";
	textColor(14, 14);
	cout << "���";
	gotoxy(1, jumpY + 6); // 7����
	textColor(8, 8);
	cout << "������";
	textColor(15, 15);
	cout << "�����";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, jumpY + 7); // 8 ����
	textColor(8, 8);
	cout << "������";
	textColor(15, 15);
	cout << "����";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, jumpY + 8); // 9����
	textColor(8, 8);
	cout << "�������";
	textColor(15, 15);
	cout << "��";
	textColor(8, 8);
	cout << "��";
	textColor(14, 14);
	cout << "���";
	gotoxy(2, jumpY + 9); // 10����
	textColor(8, 8);
	cout << "��";
	textColor(14, 14);
	cout << "���";
	textColor(8, 8);
	cout << "������";
	textColor(8, 8);
	cout << "���";
	gotoxy(3, jumpY + 10); // 11����
	textColor(14, 14);
	cout << "���";
	textColor(8, 8);
	cout << "�����";
	textColor(14, 14);
	cout << "���";
	gotoxy(3, jumpY + 11); // 12����
	textColor(14, 14);
	cout << "���";
	textColor(15, 15);
	cout << "�����";
	textColor(14, 14);
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

