#pragma once
#include<iostream>
#include<conio.h>



class key
{
private:
#define KB_UP 72
#define KB_DOWN 80
#define KB_LEFT 75
#define KB_RIGHT 77


public:
	int keyControl();

};



int key::keyControl()
{

	


	char enter = _getch();
	if (enter == KB_UP)
	{
		return KB_UP;
	}
	else if (enter == KB_DOWN)
	{
		return KB_DOWN;
	}
	else if (enter == KB_LEFT)
	{
		return KB_LEFT;
	}
	else if (enter == KB_RIGHT)
	{
		return KB_RIGHT;
	}

}
