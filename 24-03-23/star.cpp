#include<iostream>

using std::cout;
using std::endl;

/*과제2.별찍기

- (마름모 우상단 / 우하단 / 좌상단 / 좌하단) 완성체 1가지

*****
****
***
**
*

*****
 ****
  ***
   **
    *

*
**
***
****
*****

    *
   **
  ***
 ****
*****


**
****
******
********
**********
************
**********
********
******
****
**
*


*/

void main()
{
   
    //우하향
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    //좌하향
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
        for (int k = i-1; k < 5; ++k)
             printf(" ");
    }
    cout << endl;

    //우상향
    for (int i = 0; i < 1; i++) {
        for (int j = i; j < 4; j++)
            cout << "*";
        cout << endl;
    }

        







}