#include<iostream>

using std::cout;
using std::endl;

/*����2.�����

- (������ ���� / ���ϴ� / �»�� / ���ϴ�) �ϼ�ü 1����

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
   
    //������
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    //������
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
        for (int k = i-1; k < 5; ++k)
             printf(" ");
    }
    cout << endl;

    //�����
    for (int i = 0; i < 1; i++) {
        for (int j = i; j < 4; j++)
            cout << "*";
        cout << endl;
    }

        







}