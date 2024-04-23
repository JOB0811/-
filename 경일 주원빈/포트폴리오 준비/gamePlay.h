#include<conio.h>
#include<time.h>
#include<iostream>
#include<windows.h>


using std::cout;
using std::cin;
using std::endl;



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

int GetKeyDown()
{
	if (_kbhit() != 0)
	{
		return _getch();
	}
	return 0;
}



{
	void among(int amongY)
	{
		gotoxy(0, amongY);
		static bool legani = true;
		textColor(15, 15);
		cout << "   ¡á¡á¡á" << endl;
		cout << "¡á¡á¡á¡á¡á" << endl;
		cout << "¡á¡á¡á¡á¡á" << endl;
		cout << "  ¡á    ¡á" << endl;
	}


	void DrawGround(int groundY)
	{
		gotoxy(0, groundY);
		textColor(15, 15);
		for (int i = 0; i < 80; ++i)
		{
			cout << "_";
		}
	}

	void Obstacle(int ObstacleX)
	{
		gotoxy(obstacleX, )






