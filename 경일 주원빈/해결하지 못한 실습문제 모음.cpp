#include<iostream>

using std::cout;
using std::cin;
using std::endl;






int main() {

    // Example_03 실습 1. 구구단 찍기(2단 ~ 9단) / 4. 구구단이 출력이 되면 가로로 3단씩 출력
    for (int gu = 2; gu < 10; gu++) {
        for (int i = 1; i < 10; i++) {
            
            cout << gu << " * " << i << " = " << gu * i << endl;




            //3번씩 나오면, 줄이 바뀌게 하고 싶다. (해결해보지 못했음.)

    // Example_03 실습 2.
        // ㄴ do ~ while 구구단 출력하기

            int gugu1 = 2;
            int gugu2 = 1;
            int gugusum = gugu1 * gugu2;

            do {
                cout << gugu1;
                gugu1++;
            } while (gugu1 < 10);

            // 2 4 6 8 10 12 14 16 18 .....



        }
    }
}