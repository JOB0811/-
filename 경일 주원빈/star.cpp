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




     **   5 -> ? % ? = ?
    ****  4
   ****** 3
  ******** 2
 ********** 1
************ 0
 ********** 1
  ******** 2
   ****** 3
    **** 4
     ** 5


     도전 과제1. 마름모 찍기
     조건: for문 1번 + 1줄
     조건문 x

     ★★★ 도전 과제(마름모 찍기 해설 케이스) 설명★★★
     //1 ( 1번이 소스도 간단하고 제일 간결하게 해결 가능)
     for (int i = 1; 1 < 12; i++)
     {
        반복문 내부 정리
     }
     //2
     for (int i = 0; i < 11; i++)
     {
        printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", i % 11 = 5.....)
     }
     //3
     char c
     = '';
     for (int i = 1; char c; i<= 30; c = (i == 3 || i == 8 || ......))
     {
        cout << c;
     }

     //4
     for (int i = 0; j = 0; i < 66; i++, (6 -((i % 6) + 1 == 0 ? j++ : j)
     {
        (i / 36) < 1 ? (6 - ((i % 6) + 1) < = j)......
     }



     한줄 조사, 조건문

     노트에 적어오기
     비유할 것 생각해 오기 (좋은 예시 : 검문소)
     조건문은 OOO이다.
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
        for (int k = i - 1; k < 5; ++k)
            printf(" ");
    }
    cout << endl;

    //우상향
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 4; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            cout << "*";
        }

        cout << endl;



    }
}
