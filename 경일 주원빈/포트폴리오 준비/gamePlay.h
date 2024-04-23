#include<iostream>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;


int mapWidth = 120;
int mapHeight = 50;

class gamePlay
{
public:

	void printSilling()
	{
		for (int i = 0; i <= mapWidth; i++)
		{
			gotoxy(i, mapHeight / 4);
			cout << "_";
		}
	}


	void printRoad()
	{
		for (int i = 0; i <= mapWidth; i++)
		{
			gotoxy(i, mapHeight / 2 + 2);
			cout << "_";
		}
	}

	void gotoxy(int x, int y)
	{
		COORD pos;
		pos.X = x;
		pos.Y = y;

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
};


