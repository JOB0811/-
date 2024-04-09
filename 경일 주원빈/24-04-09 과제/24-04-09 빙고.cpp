#include<iostream>
#include<time.h>
#include<stdlib.h>

using std::cout;
using std::cin;
using std::endl;

int bingo[25];


void main()
{
	for (int i = 0; i < 25; i++)
	{
		bingo[i] = i;
		if (i < 10)
		{	
			cout << bingo[i] << " ";
			if (i % 5 == 4)
			{
				cout << endl;
			}

		}
	}
}