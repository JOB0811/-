#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<Windows.h>
#include"VSpixel.cpp"
#include "turnFight.h"
#include "startOption.h"


using std::cout;
using std::cin;
using std::endl;
using std::setw;

class TurnFight;

void startOption::startGame()
{


	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << setw(100) << " ====================================================================\n " << endl;
	cout << setw(70) << "���� ����\n" << endl;
	cout << setw(70) << "���� ����\n" << endl;
	cout << setw(100) << "====================================================================\n " << endl;
	char input;
	cin >> input;

	if (input == '1')
	{
		system("cls");
		VS();
		TurnFight fight;
		fight.startTurnFight();
	}
	else if (input == '2')
	{
		endGame();
	}
	else
	{
		cout << "�߸��� �Է��Դϴ�." << endl;
		startGame();
	}
}

void startOption::endGame()
{
	exit(0);
}