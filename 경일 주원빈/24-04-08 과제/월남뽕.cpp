#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "¿ù³²»Í.h"

using std::cout;
using std::cin;
using std::endl;

¿ù³²»Í::¿ù³²»Í() {
    money = 10000;
    turn = 0;
    gameCount = 0;
    srand(time(NULL));

    for (int i = 0; i < 52; i++) {
        card[i] = i;
    }

    for (int i = 0; i < 10000; i++) {
        int index1 = rand() % 52;
        int index2 = rand() % 52;
        int temp = card[index1];
        card[index1] = card[index2];
        card[index2] = temp;
    }
}

void ¿ù³²»Í::play() {
    while (true) {
        system("cls");

        for (int i = 0; i < 3; i++) {
            shape[i] = card[turn + i] / 13;
            number[i] = card[turn + i] % 13;
            switch (shape[i]) {
            case 0:
                cout << "¢¼";
                break;
            case 1:
                cout << "¡ß";
                break;
            case 2:
                cout << "¢¾";
                break;
            case 3:
                cout << "¢À";
                break;
            }
            switch (number[i]) {
            case 0:
                cout << "A \t";
                break;
            case 10:
                cout << "J \t";
                break;
            case 11:
                cout << "Q \t";
                break;
            case 12:
                cout << "K \t";
                break;
            default:
                cout << number[i] + 1 << "\t";
                break;
            }
        }
        cout << endl;

        cout << "ÃÑ ±Ý¾×: " << money << endl;
        cout << "¹èÆÃ ÇÏ½Ã¿À." << endl;
        cin >> betting;

        if (betting < 100 || betting > money) {
            cout << "´Ù½Ã ¹èÆÃÇÏÀÚ." << endl;
            Sleep(500);
            continue;
        }

        if ((number[0] < number[2] && number[2] < number[1]) ||
            (number[0] > number[2] && number[2] > number[1])) {
            cout << "Ä«µå ¼ýÀÚ: " << number[2] + 1 << endl;
            money += betting * 10;
            cout << betting * 10 << "µ· È¹µæ" << endl;
            Sleep(500);
        }
        else {
            cout << "Ä«µå ¼ýÀÚ: " << number[2] + 1 << endl;
            money -= betting;
            cout << betting << "µ· ¼ÒÁø" << endl;
            Sleep(500);
        }

        turn += 3;
        gameCount++;

        if (gameCount == 17) {
            cout << "Ä«µå°¡ ¾ø´Ù." << endl;
        }

        if (money < 100) {
            cout << "³Ê´Â ºóÅÐÅÍ¸®¾ß" << endl;
            break;
        }
    }
}