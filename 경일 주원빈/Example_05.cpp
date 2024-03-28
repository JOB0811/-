#include<iostream>
//std::string? = ���� �� ����(���� ���� ������/ĳ���� ������ ���� ����� ������ ������ ��ɰ� �Լ����� Ű���� ��� ����� �� �ְ� ���ֱ� ���� -> �Ұ� ���ٰ� �׳� �Ѱ� ���� �װ� ���� ���/�Լ����� �𸦼� ����.

// STL String�� �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� ��ɰ� �Լ����� �����ϴ� ���

// �ڡ� ���� ���� ����!(�ſ��߿�) : ȸ�翡�� �޸� ���� �ɷ��� �����ϱ� ���ؼ� ���ڿ� ���ڿ��� ���� ������ ���ڵ����� ���ִ� ����� ��ȣ�Ѵ�!

// �ڡ� ������ ������ �ۼ��� (���/����/�ڵ� ����)�� �翬�� �� �� �־�� �Ѵ�.(���� ������ٴ� ���� ���� + ���� �ɷ� ����)

// �� �����ڵ� ����Ұ��̸� wchar.h
#include<string>
#include<wchar.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;
// 05. �Լ� + ��/��� + ��ó����

#pragma region �Լ�
/*

�� �Լ�

- ����� ���Ǳ�
�� (����� ���Ǳ�� ������� �����ϴ� ���)

- �Լ��� ����ϴ� ����

- �ߺ����� ����
- ���� ������
- ������ ���
- ����

- �Լ��� �����ϴ� ���
��ȯ �ڷ��� �Լ� �̸� (�Է� �ڷ���(���� / �Լ� /�Ķ����)) �ڡ�(C++������ �Լ��� �μ�, C#������ �Ķ���Ͷ� Ī�Ѵ�.)�ڡ�

(  <- �Լ� ����

	�Լ� ����

)	<- �Լ� ��

- ����

- �Լ� �̸� : �� �״�� �Լ��� �̸��̸�, �Լ��� ����(ȣ��)�� �� ����Ѵ�.
- ����(�μ�) : �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾��Ÿ���� �� �� �ִ�.
- ��ȯ �ڷ��� : �Լ��� �����ϴ� ���� ������ ���̸� �Լ��� �۾� ������ �� �� �ִ�.
- �Լ� ���� : () �ȿ� �Լ��� ���� �ڵ尡 �����Ѵ�.

�� �Լ��� �̸��� "�⺻��"���� �����ؾ� �Ѵ�.
�� ������ �̸��� �Լ��� N�� �̻� �����ϴ� ���� �Ұ����ϴ�.


�� void�� �Լ���?


- ������ ���� ���� �Լ�

- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� �Լ��� ��/����� ���ٶ�� ���� ����Ѵ�.

�� �츮�� �˰� �𸣰� ����� �Լ���
�� rand(): �������� �̴� �Լ�

�� �Լ� ������ �⺻������ ���� �Լ� ���ʿ� ����� �Ѵ�.

�� C/C++ ����� �Լ� ������ �ʿ��� ����

- C/C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.

- �̶� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ���� ��� �����Ϸ���
�̿� ���� ������ ���� �𸣱� ������ ������ �߻��Ѵ�.

- �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� �츮�� ���� ������Ʈ ���� ��򰡿�
�ִٴ� ���� �˷���� �Ѵ�.

- ��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ��Ѵ�.

- �Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.
�ڡ�( �Լ��� �ۼ��� �� �Ľ�Į �������� ������!)�ڡ�


*/


#pragma endregion

//�Լ� ����
void OutputValueA();


// ��Ʈ���� �ް� ������ ��ȯ�� ���� �ʴ´�. (void)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

//���ڿ�
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);




// �Լ��� �̸��� �⺻������ �ߺ��� �ȵȴ�.
// �ߺ��� �Լ��� ������ ������ ȣ���� �� �ִ� ����� ������?


namespace NS_FUNC_A //�ڡڰ����� �� ���� �� ���ӽ����̽��� �̿��ؼ� ����� ����!(������ ������ ���� ������)
{

	void Sample()
	{
		cout << "���� �ٷ� Sample 1" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "���� �ٷ� Sample 2" << endl;
	}
}

void main()
{
	//���� ��ǻ���ε�...
	// �� ���߾�.
	//NS_FUNC_A::Sample();
	//NS_FUNC_B::Sample();

	// ?
	OutputValueA();
	OutputValueB(5);
	OutputValueC(1, 9);
	OutputString("������ �ʹ� ����. ^^");

	int nResultA = GetAddValue(18, 25);

	OutputValueB(nResultA);

	string sResultB = GetStringFunc("��ſ�", "���α׷���");
	OutputString(sResultB);

	nResultA = CheckingString("�ʹ� ��մ�.", "�ʹ� ��մ�.");

	OutputValueB(nResultA);

	// �Լ���� ����... C? /// C++?


	int numL = 0;
	int numR = 0;

	cout << "���� (2��) �Է�:" << endl;
	cin >> numL >> numR;

	//ȣ���� ��, ������ ���� ���, cout���� printf�� �� ����.
	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d + %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d + %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d + %d = %d\n", numL, numR, GetDivideValue(numL, numR));




	cout << '\n';

	/*
	- ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�.

	- C/C++ ����� �Լ� ����

	- �Է� O, ��� O
	- �Է� O, ��� X
	- �Է� X, ��� O
	- �Է� X, ��� X

	void ShowInfo(int nAge, char* psName);
	�� �Է� O, ��� X
	int GetRandomValue(void);
	�� �Է� X, ��� O
	void SomeFunction(void);
	�� �Է� X, ��� X

	
	*/



}

void OutputValueA()
{
	cout << "���� �ٷ� �Լ���!" << endl;
}


void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	//����Ű
	// ���� / ���ڿ��� ���ؼ��� -> ��Ģ ���� X
	

	/*
	�Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ������� ��ȯ�ϴ� ���� ����
	�Լ��� ������� �Է°��� �޸� �ϳ��� ������� ��ȯ�� �� �ִ�.
	�� ����
	*/



	// C��� 4�� + 2�� = 6�� ���ڿ� �ڡ�(���� �غ��� ��, C����� ĳ���� �迭 ������ ���������� �н��϶�.)�ڡ�
	// C++ String
	// C# String
	return strA.append(strB);
	return strA + strB;
}

int CheckingString(string strA, string strB)
{	// ������ 1 / �ٸ��� 0 ��ȯ
	return strA == strB;
}

// ? -> ��ü����
int GetAddValue(int numA, int numB)
{
	cout << numA;
	
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;

}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;

}

float GetDivideValue(int numA, int numB)
{
	return numA / (float)numB;

}
