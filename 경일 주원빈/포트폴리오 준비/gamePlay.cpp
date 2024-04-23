#include<conio.h>
#include<time.h>
#include<iostream>
#include<windows.h>
#include "character.h"


using std::cout;
using std::cin;
using std::endl;


void fullscreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
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

int GetKeyDown()
{
	if (_kbhit() != 0)
	{
		return _getch();
	}
	return 0;
}

int gamePlay()
{
    fullscreen();
    character pen;
    bool isJumping = false;
    bool isBottom = true;

    while (true) {
        // z 키를 눌렀을 때 점프
        if (GetKeyDown() == 'z' && isBottom) {
            isJumping = true;
            isBottom = false;
        }

      
        pen.penStand(pen&penY, isJumping, isBottom);

       
        system("cls");

        cout << "Current penY: " << penY << endl;

        // 키 입력을 대기하지 않고 1초마다 반복
        Sleep(1000);
    }

    return 0;
}



	









