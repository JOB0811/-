#include<iostream>
#include<windows.h>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;

int standY = 2;
int jumpY = 1;
int slideY = 2;
int penY = 12;
int obstacle1_X = 45;
int obstacle1_Y = 20;



class picture // ��Ʈ ���� Ŭ����
{
private:
	int standY = 2;
	int jumpY = 1;
	int slideY = 2;
	int penY = 12;

public:
	void gotoxy(int x, int y);
	void  textColor(int foreground, int background);
	void heartpicture();
	void penStand();
	void penJump();
	void penSlide();
	void background();
	void obstacle1();
	void obstacle2();
};

void picture::gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void picture::textColor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}



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


void picture::penJump()
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
	cout << "���������";
	textColor(14, 14);
	cout << "���";
	gotoxy(2, jumpY + 9); // 10����
	textColor(8, 8);
	cout << "��";
	textColor(14, 14);
	cout << "���";
	textColor(8, 8);
	cout << "������";
	textColor(14, 14);
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

void picture::penSlide()
{
	gotoxy(4, slideY); // 1����
	textColor(8, 8);
	cout << "��������";
	gotoxy(3, slideY + 1); // 2����
	textColor(8, 8);
	cout << "���������";
	textColor(15, 15);
	cout << "��";
	gotoxy(3, slideY + 2); // 3����
	textColor(8, 8);
	cout << "�������";
	textColor(15, 15);
	cout << "�����";
	gotoxy(3, slideY + 3); // 4����
	cout << "������";
	textColor(15, 15);
	cout << "������";
	gotoxy(2, slideY + 4); // 5����
	textColor(14, 14);
	cout << "����";
	textColor(8, 8);
	cout << "��";
	textColor(15, 15);
	cout << "������";
	textColor(14, 14);
	cout << "����";
	gotoxy(2, slideY + 5); // 6����
	textColor(14, 14);
	cout << "���";
	textColor(8, 8);
	cout << "���";
	textColor(15, 15);
	cout << "������";
	textColor(14, 14);
	cout << "��";
	textColor(8, 8);
	cout << "��";
	gotoxy(4, slideY + 6); // 7����
	textColor(8, 8);
	cout << "���";
	textColor(15, 15);
	cout << "������";
	textColor(8, 8);
	cout << "��";
}


void picture::obstacle1()
{
	
		gotoxy(obstacle1_X, obstacle1_Y);
		printf("��");
		gotoxy(obstacle1_X, obstacle1_Y + 1);
		printf(" �� ");
		gotoxy(obstacle1_X, obstacle1_Y + 2);
		printf(" �� ");
		gotoxy(obstacle1_X, obstacle1_Y + 3);
		printf(" �� ");
	
}

