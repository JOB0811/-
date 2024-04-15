#include "turnFight.h"

TurnFight::TurnFight() {
	userCharacter = "�÷��̾�";
	enemyCharacter = "��";
	userHP = 100;
	enemyHP = 100;
	userAtk = 10;
	enemyAtk = 10;
	userDef = 10;
	skill_1 = 20;
	skill_2 = 30;
}

void TurnFight::attack(string attacker, string target, int& targetHP, int damage) {
	cout << attacker << "��(��) " << target << "��(��) �����ߴ�!" << endl;
	targetHP -= damage;
	cout << target << "�� ���� ü��: " << targetHP << endl;
}

void TurnFight::defend(string defender, string attacker, int& defenderHP, int damage) {
	if (damage == userDef)
	{
		cout << defender << "��(��) " << attacker << "�� ������ ���Ҵ�!" << endl;
	}
	else {
		cout << defender << "�� �� �����ߴ�!" << endl;
		defenderHP -= damage;
	}
	cout << defender << "�� ���� ü��: " << defenderHP << endl;
}

void TurnFight::startTurnFight() {
	cout << "=== �� �� ���� ���� ===" << endl;
	srand(time(NULL));

	while (userHP > 0 && enemyHP > 0) {
		playerTurn();
		if (enemyHP <= 0) {
			cout << "���� ��ġ����!" << endl;
			break;
		}

		enemyTurn();
		if (userHP <= 0) {
			cout << "������ ���ߴ�.." << endl;
			break;
		}
	}

	cout << "=== ���� ���� ===" << endl;
}

void TurnFight::playerTurn() {
	cout << "\n�÷��̾��� �����Դϴ�." << endl;
	cout << "1. �����ϱ�" << endl;
	cout << "2. ��ų 1 ����ϱ�" << endl;
	cout << "3. ��ų 2 ����ϱ�" << endl;
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
		cout << "�߸��� �Է��Դϴ�. �ٽ� �������ּ���." << endl;
		playerTurn();
	}

}

void TurnFight::enemyTurn() {
	cout << "\n���� �����Դϴ�." << endl;
	attack(enemyCharacter, userCharacter, userHP, enemyAtk);
	
}