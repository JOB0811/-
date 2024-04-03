#include<iostream>

using std::cout;
using std::endl;

void main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 4; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            cout << "**";
        }

        cout << endl;
    }



    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--)
            cout << "**";
        cout << endl;
        for (int k = i - 1; k < 5; ++k)
            printf(" ");
    }
    cout << endl;
}