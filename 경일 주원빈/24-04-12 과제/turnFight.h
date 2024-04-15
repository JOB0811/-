#ifndef TURNFIGHT_H
#define TURNFIGHT_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class TurnFight {
public:
	TurnFight();
	void attack(string attacker, string target, int& targetHP, int damage);
	void defend(string defender, string attacker, int& defenderHP, int damage);
	void startTurnFight();
	void playerTurn();
	void enemyTurn();

private:
	string userCharacter;
	string enemyCharacter;
	int userHP;
	int enemyHP;
	int userAtk;
	int enemyAtk;
	int userDef;
	int skill_1;
	int skill_2;

};

#endif // TURNFIGHT_H