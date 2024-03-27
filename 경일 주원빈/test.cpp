#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void main{
        int gugu1 = 2;
        int gugu2 = 1;
        int gugusum = gugu1 * gugu2;

        do {
            cout << gugu1 * gugu2 << " = " << gugusum << endl;
            gugu1++;
        } while (gugu1 < 9);



}