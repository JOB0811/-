//#include "Example_06_A.h"
//#include "Example_07.h"
#include "MainGame.h"

void main()

{
	//EXAMPLE_02::Example();


	/*
	- ���𹮿� ���� ������ Ŭ�������� ������ �ν��Ͻ���� �Ѵ�.

	- Ŭ������ �������� Ÿ���ϻ����� �� ��ü�� ������ �����ϴ� ������ �ƴϴ�.

	- Ŭ������ �����Ѵٰ� �ؼ� ����ü ������ ����°��� �ƴѰ�ó��
	  Ŭ������ �����Ѵٰ� �ؼ� ������ ���� ����� �� �ִ� �޸𸮰� �Ҵ������ �ʴ´�.
	
	*/


	// 1. ���� �Ҵ� 
	MainGame mg; 
	mg.outPut();

	/*���� �Ҵ� Ư¡
	1. �ظ��� ��쿡���� ������ �ʴ´�.
	2. ����ü�� ���� ������.
	3. �ӵ��� ������ �� �ִ�.(���α׷��� ���ſ�������)
	*/



	// 2. ���� �Ҵ�
	MainGame* mainG = new MainGame; //�ν��Ͻ�ȭ ���!
	mainG->showPosition();
	mainG->setPosition(100, 100);
	mainG->showPosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->showPosition();
	//���� �ȵ� ������ ������ ���� ���´�.

	delete mainG;
}

/*

void main()

{
	
// 2. ���� �Ҵ� (��ü���� ���α׷����Ͻ�, �̷� ����)
MainGame* mainG = new MainGame; //�ν��Ͻ�ȭ ���!
delete mainG;
}


*/