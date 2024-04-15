#include "turnFight.h"

TurnFight::TurnFight() {
	userCharacter = "플레이어";
	enemyCharacter = "적";
	userHP = 100;
	enemyHP = 100;
	userAtk = 10;
	enemyAtk = 10;
	userDef = 10;
	skill_1 = 20;
	skill_2 = 30;
}

void TurnFight::attack(string attacker, string target, int& targetHP, int damage) {
	cout << attacker << "이(가) " << target << "을(를) 공격했다!" << endl;
	targetHP -= damage;
	cout << target << "의 남은 체력: " << targetHP << endl;
}

void TurnFight::defend(string defender, string attacker, int& defenderHP, int damage) {
	if (damage == userDef)
	{
		cout << defender << "이(가) " << attacker << "의 공격을 막았다!" << endl;
	}
	else {
		cout << defender << "의 방어에 실패했다!" << endl;
		defenderHP -= damage;
	}
	cout << defender << "의 남은 체력: " << defenderHP << endl;
}

void TurnFight::startTurnFight() {
	cout << "=== 턴 제 전투 시작 ===" << endl;
	srand(time(NULL));

	while (userHP > 0 && enemyHP > 0) {
		playerTurn();
		if (enemyHP <= 0) {
			cout << "적을 해치웠다!" << endl;
			break;
		}

		enemyTurn();
		if (userHP <= 0) {
			cout << "적에게 당했다.." << endl;
			break;
		}
	}

	cout << "=== 전투 종료 ===" << endl;
}

void TurnFight::playerTurn() {
	cout << "\n플레이어의 차례입니다." << endl;
	cout << "1. 공격하기" << endl;
	cout << "2. 스킬 1 사용하기" << endl;
	cout << "3. 스킬 2 사용하기" << endl;
	int choice;
	cin >> choice;

	if (choice == 1) {
		attack(userCharacter, enemyCharacter, enemyHP, userAtk);
	}
	else if (choice == 2) {
		attack(userCharacter, enemyCharacter, enemyHP, skill_1); 
	}
	else if (choice == 3) {
		attack(userCharacter, enemyCharacter, enemyHP, skill_2); 
	}
	else
	{
		cout << "잘못된 입력입니다. 다시 선택해주세요." << endl;
		playerTurn();
	}

}

void TurnFight::enemyTurn() {
	cout << "\n적의 차례입니다." << endl;
	attack(enemyCharacter, userCharacter, userHP, enemyAtk);
	
}