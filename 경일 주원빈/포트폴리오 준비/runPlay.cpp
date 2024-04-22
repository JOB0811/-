#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>





void SetConsoleView()
{
    system("mode con : cols = 100 lines = 25");
}

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = 2 * x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int GetKeyDown()
{
    if (_kbhit() != 0)
    {
        return _getch();
    }
    return 0;
}