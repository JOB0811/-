#include<iostream>

using std::cout;
using std::endl;


#pragma region ������ + �ݺ���
/*

�� �����ڶ�?

- ���α׷��� ������ �� ������ �ִ� Ư�� ������ �����ϴ� Ű���带 �����ڶ�� �Ѵ�.
�� �����ڸ� �̿��ϸ� �پ��� ���α׷� ������ ������ ���� �����ϴ�.

�� �⺻���� �������� ����

- ��� ������ (+, -, *, /, %)
- �� ������ (==, !=, <, >, <=, >=)
- �Ҵ� ������ (=, +=, -=, *=, /=, %=)
- ��Ʈ ������ (&, |, ^)
- ���� ������ (&&, ||, !)
- ����ȯ ������ ((Ư�� �ڷ���))

   �� ��� ������

   + : ���ϱ�

   - : ����

   * : ���ϱ�

   / : ������
   �� ���� �����? / �������� ������?


   % : ������
   �� �������� �����?/ ���� ������?

   �� �� ������

   num == num2;      ->      num�� num2�� ����.
   num != num2;      ->      num�� num2�� �ٸ���. (���� �ʴ�.)
   num < num2;         ->      num�� num2���� �۴�.
   num > num2;         ->      num�� num2���� ũ��.
   num <= num2;      ->      num�� num2���� �۰ų� ����.
   num >= num2;      ->      num�� num2 ���� ũ�ų� ����.


   �� �Ҵ� ������

   = : ���� ������(���� ���� = �� -> ��)

   - +=
   - -=
   - *=
   - /=
   - %=

   �� ��Ʈ ������ (���ӳ����� �����̻� ȿ���� ��Ÿ���� �ַ� �̿���.)

   -> ���°� / ���� ����

   - ȿ���� �޸� ���� ���� ������ ����

   �ڡڰ��� ����ڡ� ���� 6���� ��Ʈ ������ ����
   �ڡ� ��Ʈ�������� ���, ������/�������� ����̶�� ���� �� ��� �� ���� �ڡ�
   &
   |
   ^
   ~
   <<
   >>

   �� �����ϴٰ� bitset ��� ���� ��, -> Ż��

   �ڡڡ� ���� ���� �ڡڡ� (����ȯ�� ������, ������ ��� �� ����.)
   �� ����ȯ ������

   - ((Ư�� �ڷ���)) ������ (int���� float�� �ٲ� ���� ���� ���µ�, float���� int�� ��ȯ ��, �Ҽ����� ����� �����Ͱ� �ҽǵ� �� �ִ�.)
   �� int Valueue = 0;
   �� (float)Value;

   - C/C++ ���� ����ȯ �����ڸ� �̿��ϸ� �����ϰ� �ش� ������ �ڷ����� �����ϴ°��� �����ϴ�.
   ex) ��í �ý��ۿ��� ����ȯ �ý����� Ȯ�� ���� ������� ���, ��í Ȯ���� ū ������ �ֱ� ������, ���� ��ȭ �ý��ۿ� ū Ÿ���� �� �� �ִ�.

   ������ ����ȯ�� ���ؼ�.

   - C ��Ÿ���� ������(� Ÿ������ �ٲ����� �߻������� �ʰ�) ����ȯ�� �⺻������ �������� �������� ���װ� ���� ������ �ٺ��ϴ�.
   �� "����"�� ���� �ٲ��ֱ� ����
   �� �ӵ��� ì����̸� C ��Ÿ�Ϸ� / �������� ì����̸� C++ ��Ÿ�Ϸ�

   EX:
   static_cast<int>(obj) -> obj�� type���� �ٲٰڴ�.
   ��. ��, ���������� ������ ��쿡�� ��ȯ ���� -> ������ UP

   - C++ Ÿ�� ĳ���� ������ �ø���
   - static_cast (v)
   - dynamic_cast
   - const_cast
   - reinterpret_cast



�� �ݺ����̶�?

- ���α׷��� Ư�� �κ��� ���� Ƚ�� �̻� �ݺ��ؼ� �����ϵ��� �ϱ� ���� ����
�� �ݺ����� �̿��ϸ� �ݺ������� �߻��ϴ� ������ ȿ����/�����ϰ� ó���ϴ� ���� �����ϴ�.
   �� ������ �� Ȱ���ϸ� �����԰� ȿ������ ���� ���

- �ݺ����� ����


�ڡ� ���� �������� ����ٸ�, for�� while���ٴ� ��뼺�� ���� do while�� ��� ���ɼ��� �ִ�. �ڡ�
1. for��

- ����
�� �ʱ�� : �ݺ��� ���� ������ ���� �� �ʱ�ȭ ����
�� ���ǽ� : �ݺ��� ������ �˻��ϴ� �������� ����
�� ������ : �ݺ��� ������ �������� ����� ���� �� ���� ����

EX)
for (�ʱ��; ���ǽ�; ������)
{
   �ݺ��� �Ǵ� ����
}

�� �ʱⰪ�� �� ó�� �ѹ��� ������ �ǰ� ���ǽ��� ���� ���ȸ� ���ɹ��� �ݺ� �����Ѵ�.
   �� �ݺ��� Ƚ���� ������ ���� ��, for���� ����Ѵ�.

2. while��

- ���� (loop) : �ݺ� ���ǿ� 1(��)�� �� ��� ���� ������ ������ �ȴ�.
   �� ������ true(��)�϶��� �۵�
   ��   �Ŀ� ��� ������� �������� �� �ִ�.

- while���� Ư�� ������ �ְ� �� ������ �����ϴ� ���� Ư�� ������ ����ؼ� �ݺ��ϴ� ����

�� while���� �ݺ��� ������ "����"���� ����� �� ���� �߿��ϴ�. (�ݺ��� ������ �������� ������, ���ѷ����� ���� �Ǳ� ����)


3. do ~ while��

- while���� ������ : ������ �˻��ϴ� ������ �ٸ���.
�� �ϴ� ������ �ѹ� ���� �� while���� ������ �˻��Ͽ� do ~while������ ������ �����Ұ������� ���Ͽ� �Ǵ��Ѵ�.




*/
#pragma endregion

void main() {
    int numberA = 0;
    numberA = 1;
    numberA++;
    numberA = 6;
    numberA++;
    numberA += 5;
    numberA--;
    numberA -= 2;
    numberA *= 3;
    numberA /= 2;

    // ? = 13
    cout << "numberA�� ��: " << numberA << endl;


    /*
    C/C++ ���� �����ڸ� �̿��ؼ� ����� ������ �ش� �����ڿ� ���� ������ �ڷ����� ���� ����� �޶�����.

    EX)
    ���� + ���� = ����
    ���� + �Ǽ� = �Ǽ�

    �⺻������ �����ڸ� ����Ҷ��� ������ �ڷ����� ������ ������ ������ �ϴ� ���� ��Ģ�̴�.
    ������, ���� �ڷ����� �ٸ� ��� �����ڿ� ���� �������� ����� ���� �ҽ� �� �� �ִ� ������ ���� �ڷ������� ���������.

    ��, ������ �����ڴ� ������ �����Ϳ��� ����ϴ� ���� �����ϴ�.
    */

    // C ��Ÿ�� -> �����Ϸ� ������ ���� ������
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << "[" << i << " ��°] " << "�����ϰ� �γ��ϸ� ���� ������" << endl;
    }

    int numberB = 0;
    for (; numberB < 5; numberB++)
    {
        cout << "�̷��� ����� �ϸ�...? " << endl;
    }

    printf("\n");

    /*
    - for���� �ʿ信 ���� �ʱ��, ���ǽ�, ������ ������ �����ϴ�.

    - ���� ����

    1. �ʱ�� ���� -> for (; i < 10; i++) ex (���� ��������� �Ѵٰ� ģ�ٸ�, ������ �ο����� ����ؼ� ���� ���Ǵ� ���ڰ� �뷱���� �Ǿ� �ϴµ�, �׶� �ַ� ����� �� �ִ�.)
    2. ���ǽ� ���� -> for (i = 1; ; i++)
    3. ������ ���� -> for(; i <10;)
    4. ��� ���� -> for ( ; ; )
    */

    // i++; ����
    // ++i; ����
    int j = 1;
    // ��ü���� ��Ÿ�� (C++)
    for (int i = 0; i < 5; i++)
    {
        cout << "ù��° ����? " << ++j << endl; // ������ ;�� ���� ����, �����Ϸ��� �������ڸ��� ���� �ٲ��. 
        cout << "�ι�° ����?" << j++ << endl; // ������ ;�� ������ ����(���� �Ѿ)�� �� �Ŀ� ���� �ٲ��.
    }

    // �ڡڸ��� �����ڡ� ���� = 1 2 3 4 (O)
    cout << '\n';
    cout << "\n";
    printf("\n"); // ()�� �� ���� �⺻������ �Լ��ε�, ()���� ���� ������ �� �ִ�(��������)���̰�, �ȿ� ���� �����Ѵٸ� ���縦 �����ϱ� ������ ������ �߰��ȴ�. -> ������.)
    cout << endl; // ���ø��� ���ԵǾ� ������, endl�� ������ ����������, Ȥ�� �ۼ��� �޶���(ȭ��Ʈ����)�� ���۰� �ִ����� üũ�� �� ������ �����ش�.(�ſ� ����)

    // �ǽ�
    // �� 1. 1 ~ 10���� ��� / 2. 10 ~ 1���� ��� => 2������ �غ���.
    // �ݺ����� ��ø�ɼ��� �ڽ�Ʈ�� �ſ� Ŀ����.(���ſ�����.)(2�߱��� ����� �� ������, 3���̻����� ����ϴ� ���� ȿ�������� �ʴ�.)

    for (int a = 0; a <= 10; a++)
        cout << a << endl;
    cout << "\n" << endl;
    for (int b = 10; 0 <= b; b--)
        cout << b << endl;

    // �ǽ� 3. ������ ���(2�� ~ 9��) / 4. �������� ����� �Ǹ� ���η� 3�ܾ� ���
    for (int gu = 2; gu < 10; gu++) {
        for (int i = 1; i < 10; i++)
            for (; gu %= 1;)



                //3���� ������, ���� �ٲ�� �ϰ� �ʹ�.

                cout << gu << " * " << i << " = " << gu * i << endl;
    }



    //���� 1

    int hw1, hw2;
    cin <<




}


/*
����1. ������ Ȱ��


a. �ΰ��� ������ �޾Ƽ� �� ���� ������ ������ ����� ����ϴ� ���α׷� �ۼ�

b. 3���� ����(num1, num2, num3)�� �޾Ƽ� ���� ������ ����� ����ϴ� ���α׷� �ۼ�
   �� EX : (num1 + num2) * (num3 + num1) % num1 = ?

c. �Է� ���� �� ������ ���������� ��� �Ǵ� ��� �������� ����ϴ� ���α׷� �ۼ�
   �� EX : 7�� 2�� �ԷµǸ� ������ 3, �������� 1�� ��µǸ� OK

����2. �����

- (������ ����/���ϴ�/�»��/���ϴ�) �ϼ�ü 1����

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

������ �׷�����

��������1. ������ ���

- ����: for�� 1�� + 1��(1���� for�� ���� 1��)
   �����ǹ� ��� x

���� ����. ���ǹ�.

- ��Ʈ�� ����´�.

- ������ ���� �����غ���.

*/