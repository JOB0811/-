/*����2.�����ϴ� ĳ���� ��� II

- 1�� ������ ���������� �÷�Ǯ�ϰ� ����� �� ��

- �ּ� ������ : 50 x 50 */

#include<iostream>
#include<Windows.h>

using namespace std;





void TextColor(int font, int backGround);

void main()
{
	cout << "\n"
		, cout << "\n"
		, cout << "\n"
		, cout << "\n"
		, cout << "\n"
		, cout << "\n"
		, cout << "\n"
		, cout << "\n"
		, cout << "\n"
		/*
	cout << "�������������������������������������������""\n";
		cout << "���������������������������������������������""\n";
		cout << "��������������������������������������������""\n";
		cout << "���������������������������������������������""\n";
		cout << "��������������������������������������������""\n";
		cout << "�����������������������������������������""\n";
		cout << "��������������������������������������������""\n";
		cout << "���������������������������������������������""\n"; 
		cout << "��������������������������������������������""\n"; 
		cout << "��������������������������������������������""\n"; 
		cout << "���������������������������������������������""\n"; 
		cout << "���������������������������������������������""\n";
		cout << "��������������������������������������������""\n"; 
		cout << "���������������������������������������������""\n"; �۾� �Ϸ�
		cout << "���������������������������������������������""\n";
		cout << "���������������������������������������������""\n";
		cout << "������������������������������������������""\n";
		cout << "                " << endl;
		*/


		, TextColor(15, 15);
	cout << "��������������������������������������" << endl;
	TextColor(15, 15);
	cout << "��������������������������������������" << endl;
	TextColor(15, 15);
	cout << "����������������������";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "���������������������";
	TextColor(14, 14);
	cout << "��";
	TextColor(14, 14);
	cout << "�����";
	TextColor(14, 14);
	cout << "��";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "�����������������";
	TextColor(14, 14);
	cout << "���";
	TextColor(15, 15);
	cout << "��";
	TextColor(14, 14);
	cout << "��";
	TextColor(14, 14);
	cout << "�������";
	TextColor(14, 14);
	cout << "��";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "�����������������";
	TextColor(14, 14);
	cout << "�����";
	TextColor(14, 14);
	cout << "���";
	TextColor(0, 0);
	cout << "������";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "����������������";
	TextColor(14, 14);
	cout << "������";
	TextColor(14, 14);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(11, 11);
	cout << "������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "����������������";
	TextColor(14, 14);
	cout << "������";
	TextColor(0, 0);
	cout << "��";
	TextColor(11, 11);
	cout << "��������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "����������������";
	TextColor(14, 14);
	cout << "�������";
	TextColor(0, 0);
	cout << "��";
	TextColor(11, 11);
	cout << "������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "����������������";
	TextColor(14, 14);
	cout << "��������";
	TextColor(0, 0);
	cout << "������";
	TextColor(14, 14);
	cout << "��";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "����������������";
	TextColor(14, 14);
	cout << "��������������";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "�����������������";
	TextColor(14, 14);
	cout << "���";
	TextColor(15, 15);
	cout << "��";
	TextColor(14, 14);
	cout << "����������";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "��������������������";
	TextColor(14, 14);
	cout << "����������";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "��������������������";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "��";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "��������������������";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "��";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "��������������������";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "��";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "�����������" << endl;
	TextColor(15, 15);
	cout << "��������������������";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "��";
	TextColor(14, 14);
	cout << "�����";
	TextColor(15, 15);
	cout << "�����������" << endl;




























		

	



          
		 


}


void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}
