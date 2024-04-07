#include<iostream>

using std::cout;
using std::cin;
using std::endl;

char alpha[5] = { 'a', 'b', 'c', 'd','\0'};

int main()
{
    for (int i = 4; i < sizeof(alpha) / sizeof(alpha[0]); --i) 
    {
        cout << alpha[i];

    }
    cout << endl;


    for (int i = 0; i < sizeof(alpha) / sizeof(alpha[0]); i++)
    {
        cout << alpha[i];
    }
    cout << endl;

    for (int i = 0; i < sizeof(alpha) / sizeof(alpha[0]); ++i) {
        if (alpha[i] == alpha[1]) {
            alpha[1] = alpha[3];
            alpha[3] = 'b';
            break;
        }
    }

    cout << alpha << endl;


    
}