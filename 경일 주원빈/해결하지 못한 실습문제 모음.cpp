#include<iostream>

using std::cout;
using std::cin;
using std::endl;






int main() {

    // Example_03 �ǽ� 1. ������ ���(2�� ~ 9��) / 4. �������� ����� �Ǹ� ���η� 3�ܾ� ���
    for (int gu = 2; gu < 10; gu++) {
        for (int i = 1; i < 10; i++) {
            
            cout << gu << " * " << i << " = " << gu * i << endl;




            //3���� ������, ���� �ٲ�� �ϰ� �ʹ�. (�ذ��غ��� ������.)

    // Example_03 �ǽ� 2.
        // �� do ~ while ������ ����ϱ�

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