#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// ����
int card[52];      
int shape[5];     
int number[5];     
int betting = 0;      
int turn = 0;  
int money = 10000;


void main()
{

   
    srand(time(NULL));
     
    for (int i = 0; i < 52; i++)
    {
        card[i] = i;
    }
    
    for (int i = 0; i < 10000; i++)
    {
   
        int index1 = rand() % 52;
        int index2 = rand() % 52;
        int temp = card[index1];
        card[index1] = card[index2];
        card[index2] = temp;
    }

    // ����
    while (true)
    {
        // ġƮ
        system("cls");

        // ī�� 5�� ���
        for (int i = 0; i < 5; i++)
        {
            shape[i] = card[turn + i] / 13;
            number[i] = card[turn + i] % 13;
            int sixCard = card[turn + i] % 13 + 1;
            switch (shape[i])
            {
            case 0:
                cout << "��";
                break;
            case 1:
                cout << "��";
                break;
            case 2:
                cout << "��";
                break;
            case 3:
                cout << "��";
                break;

            default:
                break;
            }
            switch (number[i])
            {
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
        cout << "\n";
        int sixCard = card[turn + 5] % 13 + 1;

        cout << "������ : " << money << endl;
        cout << "�󸶸� �����Ͻðڽ��ϱ� ? : ";
        cin >> betting;

        if (betting > money || betting < 1000)
        {
            cout << "���ñݾ��� ���ñݺ��� ���ų� 1000������ ������ �����ϴ�!" << endl;
            continue;
        }

        string predict;
        cout << "high, low, seven �� �����ϼ���: ";
        cin >> predict;

        for (int i = 0; i < predict.length(); i++)
            predict[i] = tolower(predict[i]);

        if (predict != "high" && predict != "low" && predict != "seven")
        {
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���." << endl;
            Sleep(300);
            continue;
        }

            int seven = 7;
            if (sixCard == seven && predict == "high")
            {
                cout << "����! ���ñ� ȹ��!" << endl;
                Sleep(300);
                money += betting;
                continue;
            }
            else if (sixCard < seven && predict == "low")
            {
                cout << "����! ���ñ� ȹ��!" << endl;
                Sleep(300);
                money += betting;
                continue;
            }
            else if (sixCard == seven && predict == "seven")
            {
                cout << "����! ���ñ��� 15�� ȹ��!" << endl;
                Sleep(300);
                money += betting * 15;
                continue;
            }
            else
            {
                cout << "Ʋ�Ƚ��ϴ�. ���� �ݾ��� �Ҿ����ϴ�." << endl;
                Sleep(300);
                money -= betting;

            }

            // ���� ���� ����

            if (money < 1000)
            {
                cout << "���ñ��� �����մϴ٤� ������ �����մϴ�." << endl;
                break;
            }
        }
}