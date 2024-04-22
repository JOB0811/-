#include<iostream>
#include<windows.h>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;


class stand
{

private:
	const int standY = 2;
	const int penY = 12;
	const int obstacle1_X = 45;
	const int obstacle1_Y = 20;

public:
	void penStand(int penY);
	void obstacle1(int obstacle1_X, int obstacle1_Y);
	void obstacle2();
	bool isCollision(const int penY, const int obstacle1_X)
};

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



void stand::penStand(int penY)
{
	gotoxy(5, standY); // 1����
	textColor(8, 8);
	cout << "��������";
	gotoxy(4, standY + 31); // 2����
	textColor(8, 8);
	cout << "������������";
	gotoxy(3, standY + 32); // 3����
	textColor(8, 8);
	cout << "��������";
	textColor(15, 15);
	cout << "������";
	gotoxy(3, standY + 33); // 4����
	textColor(8, 8);
	cout << "������";
	textColor(15, 15);
	cout << "��������";
	textColor(14, 14);
	cout << "����";
	gotoxy(2, standY + 34); // 5����
	textColor(8, 8);
	cout << "��������";
	textColor(15, 15);
	cout << "������";
	textColor(14, 14);
	cout << "������";
	gotoxy(2, standY + 35); // 6����
	textColor(8, 8);
	cout << "��������";
	textColor(15, 15);
	cout << "��������";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, standY + 36); // 7����
	textColor(8, 8);
	cout << "����������";
	textColor(15, 15);
	cout << "������";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, standY + 37); // 8����
	textColor(8, 8);
	cout << "����������";
	textColor(15, 15);
	cout << "������";
	textColor(8, 8);
	cout << "��";
	gotoxy(2, standY + 38); // 9����
	textColor(8, 8);
	cout << "����������������";
	gotoxy(2, standY + 39); // 10����
	textColor(8, 8);
	cout << "������";
	textColor(14, 14);
	cout << "������";
	textColor(8, 8);
	cout << "����";
	gotoxy(4, standY + 0); // 11����
	textColor(8, 8);
	cout << "��";
	textColor(14, 14);
	cout << "������";
	textColor(8, 8);
	cout << "��";
}


void stand::obstacle1(const int obstacle1_X, const int obstacle1_Y)
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

bool isCollision(const int obstacle1_X, const int penY)
{
	gotoxy(0, 0);
	printf("obstacle1_X : %d, penY : %d", obstacle1_X, penY);
	if (obstacle1_X <= 8 && obstacle1_X >= 4 && penY > 8)
	{
		return true;
	}
	return false;
}

int main(void)
{

	bool isJumping = false;
	bool isBottom = true;
	constexpr int gravity = 3;

	int penY = const int penY;
	int treeX = TREE_BOTTOM_X;

	int score = 0;
	clock_t start, curr;
	start = clock();

	while (true)
	{
		if (isCollision(treeX, penY))
			break;

		if (GetKeyDown() == 'z' && isBottom)
		{
			isJumping = true;
			isBottom = false;
		}

		if (isJumping)
		{
			penY -= gravity;
		}
		else
		{
			penY += gravity;
		}

		if (penY >= const int penY)
		{
			penY = const int penY;
			isBottom = true;
		}

		if (penY <= 2)
		{
			isJumping = false;
		}

		treeX -= 2;
		if (treeX <= 0)
		{
			treeX = TREE_BOTTOM_X;
		}

		DrawDino(penY);
		DrawTree(treeX);

		curr = clock();
		if (((curr - start) / CLOCKS_PER_SEC) >= 1)
		{
			score++;
			start = clock();
		}
		Sleep(60);
		system("cls");

		GotoXY(22, 0);
		printf("Score : %d ", score);
	}
	DrawGameOver(score);
	return 0;
}