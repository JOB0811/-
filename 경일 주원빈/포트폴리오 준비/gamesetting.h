#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#include<iostream>
#include "character.h"

using std::cout;
using std::cin;
using std::endl;


class gameSetting
{

    int jump = 5;
    // int standY = 34; 펭귄의 초기 y위치

public:
	void fullscreen();
	int getKeyDown();
    void gameOver(const int score);
    void gotoxy(int x, int y);
    void  textColor(int foreground, int background);
    void penJump();

};


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


int getKeyDown()
{
    if (_kbhit() != 0)
    {
        return _getch();
    }
    return 0;
}


void gameOver(const int score)
{
    system("cls");
    int x = 90;
    int y = 25;
    gotoxy(x, y);
    cout << "game Over" << endl;
    cout << "Score :  " << score;
}

void penJump()
{
    bool penJumping = false;
    bool onBottom = true;
    constexpr int gravity = 5;

    
    while (true)
    {
        if (GetAsyncKeyState(0x5A)) //z키 입력받을 시,
        {
            penJumping = true;
            onBottom = false;
        }

        if (penJumping)
        {
            penY = 
        }
    }

}