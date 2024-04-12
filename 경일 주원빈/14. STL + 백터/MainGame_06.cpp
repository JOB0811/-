#include "MainGame_06.h"
#include <iostream>
#include <vector>

//�� �����ڰ� ȣ���� �� ��, "�̷� ��������� ������!"��� �˷��� ������, �Ⱦ˷��� �������� �˷� �ִ� ��


MainGame_06::MainGame_06()
{
	/*
	�� STL ���Ϳ��� ���� ����ϴ� ���
	�ڡڡڡ� ���� ���� = push_back()�� emplace_back()�� ���� �����ΰ�? �� ��� �� ����.�ڡڡ�
	Because ? = Ǫ�ù�� ���÷��̽����� �����Ѵٴ� ���� vector�� �迭������ �޸� �帧�� �����ϰ� �ִٴ� �Ͱ� ���� �ǹ�!
	push_back = ó�� �ӵ� ��, �޸� �Ҵ� ȿ�� ��,  emplace_back = ó�� �ӵ� ��, �޸� �Ҵ� ȿ�� �� !

	// Vector���� front(index�� 0����)�� �ǵ帮�� ���� "�޸��� ���̵�"�� �ʿ��ϴ�.(�ڽ�Ʈ�� ���� �Ҹ��Ѵ�.)
	// ����ϴ� �޸𸮴� ����ϴ� �޸𸮿�����, �ӽ� �޸𸮴� �ӽ� �޸𸮿����� ����Ͽ��� �Ѵ�.

	push_back()
	�� ������ �ڿ������� ���� �߰�

	emplace_back()
	�� ������ �ڿ������� ���� �߰�(���� ����)
	����ϴ� ����! = �޸� ������ push_back()���� ���� �Ҵ��ϴ� ��� ó�� �ӵ��� �� ������ �����̴�!



	pop_back()
	�� ������ �ڿ������� ���� ����
	(pop_back�� �迭�� �� �ڿ� �ε��� ���� ������, �޸𸮸� �����ϰ� �ִ� ������ �������� �ʴ´�.)

	�ؽð��� ���� �ɸ��� ������ ó��
	1. �ݺ���
	2. ���ǹ��� ����


	size()
	�� ������ ����
	�� ���Ͷ�� �����̳� �ȿ� ��� �ε��� ���� (�ε����� �ѷ�)
	(Vector�� ���� �迭�̱� ������, �迭�� �ѷ��� �� �� ����. �׷��� �迭�� ũ�⸦ �� �� �ִ� size()�� �Լ��� �����Ѵ�.)


	resize()
	�� �޸� �翬�� (vector���� ������ �ȵǴ� �����.)
	(��� ����? -> ���� ������ ���鶧, pop_back���� �ε��� ���� ��Ҹ� ������. �޸� �Ҵ� ������ �״���ε� �ε����� ����־� �޸� ������ ���� �ȴ�.
	�׷���! resize�� �̿��� �޸� ������ �翬���ϰ�, ������� �ʴ� ������ ����༭ �޸� ���� ������ �� �ְ� ����� �� �ִ�.)

	clear()
	�� ���� ��� ����

	begin()
	�� ������ 0��° �ε����� �ǹ�

	end()
	�� ������ ������ �ε���

	insert()
	= ���� �ڷ� ���������� ���� ����ϸ� �ȵǴ� �����.(������ �����ҰŸ� vector���ٴ� list�ܿ��� �����ϴ� ���� ����.)
	�� �� ����

	erase()
	�� �ε��� ����


	*/

	int num[2];
	num[0] = 1;
	num[1] = 2;

	cout << num[0] << endl;
	cout << num[1] << endl;

	LinePrint();

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	for (int i = 0; i < 10; i++)
	{
		_vNumber.push_back(i + 1);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1); // ������ �ڿ��� ���� �߰�

	_vNumber.pop_back(); // ������ �ڿ��� ���� ����

	_vNumber.clear(); // �޸� �Ҵ� ���� ���� ����

	_vNumber.insert(_vNumber.begin() + 5, 100); // �ε��� 0 �� ��ġ + 5��ġ�� 100 ����

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);


	// ++i�� �ƴ� i++�� �ۼ��� ��� �������� �ִ�.
	// �ڵ� ������(��) -> ���� �����̱� ����
	// ��� ������ �ۼ��Ҷ��� ���ϴ��� vectorȰ�뿡 ���ݴ� �ٿ��� �� ������ ������.

	/* vector�� ��ȸ�Ҷ��� ������ ����ϴ� ����?
	ȣ�� ���� ����(Ŭ���� ���)���� vector�� �޸𸮰� ���� �Ҵ���� ���� ���¿��� �ݺ����� ���� �Ǹ� ���α׷��� �����⶧����
	������ ���� �޸��� ��ȿ���� Ȯ���ϰ� �ݺ����� �����ڴٴ� ���̴�.*/
	for (int i = 0; i < _vNumber.size(); ++i)
		for (int i = 0; i < _vNumber.size(); ++i)
		{
			cout << _vNumber[i] << endl;
		}

	//_viNumber���� _vNumber.begin()�� �������� ���ؼ��� _vNumber�� �޸� ���� �ּҸ� ������ ��� �ϱ� ������, _viNumber�� �����ּҿ� *�� ����Ѵ�.
	// 124~127 ������ �ڵ�� 129~132 ������ �ڵ�� ���� ����� ������ �ִ�.
	// ������ �Ҷ�, for each�� ����� �ڵ�� ������ ���忡�� �ſ� �����ϱ� ������, ����������Ʈ���� iterator�� ����ϴ� ���� ����.
	for (_viNumber = _vNumber.begin(); _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl;
	}

	for each (auto p in _vNumber)
	{
		cout << p << endl;
	}


	LinePrint();

	printVector();



}

MainGame_06::~MainGame_06()
{

}

/*
���� ���
C# / Unity / DB / C++ / STL �� ���ϼ� �ֵ��� ����ؾ���. (C++�� ���� �� ���ٸ� STL�̶� �δ��� ����϶�.)



*/


void MainGame_06::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "Ǫ�ù�" << endl;
	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	//2. insert
	// �� ������ �Ǹ� �ε����� �и���.
	cout << "����" << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 3. pop_Back

	cout << "�˹�" << endl;
	_vNumber.pop_back();

	// �� -> �ֻ�
	// ������ �ֻ��� �ڵ带 �ۼ����� �ʴ� ����? : �Ź� �ڵ带 �ۼ��Ҷ����� �ֻ��� �ڵ带 �ۼ��Ϸ��� ���� ���ŷӱ� �����̴�.(�޸� ��뷮 ������)
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	�� for each��

	- �־��� ������ ��� �����͸� �ϳ��� ��ȸ�ϸ� �����ϴ� ��쿡 ����� �� �ִ�.
	�� �⺻������ �����̳��� �ݺ��� ����
	�� ��, for each�� vector�� �����̳� ��Ҵ� �ƴϸ� �˰��� �Լ� ����� ���̴�.

	- ��� �����̳ʴ� �ݺ��ڸ� ������ ������ �̴� for each�� ����ؼ� �����̳��� ���� ������ �����ϴٴ� ���

	- for each�� ������ ������ ����Ʈ �����ͷ� ������� �����̱� �����̴�.
	�� �̴� ��ȸ�ϸ鼭 ���ϴ� ��ҿ� ������ �ϱⰡ �����ϴٴ� ���


	�� auto

	- �����Ϸ��� �����Ͻ� �ڵ����� �ڷ����� �߷��Ѵ�.

	- ��� / ���÷� �ڷ����� �߷��� �� �ִ°� �ƴ� �����Ϸ��� �ڷ����� �߷��ϱ� ���� ������� ������ �־����� �Ѵ�.

	- C/C++�� Ÿ�Կ� �ſ� ������ ����̱� ������ ������ �����Ҷ� �ڷ����� ����ؾ� �Ѵ�.
	�� ��, auto Ű���带 ����ϸ� ������ �ڷ����� ������� �ʴ��� �����Ϸ��� ���ؼ� �ڵ������� ������ �ڷ�����
	�����ȴ�.



	�� range based for

	- VS 2015���� �����ϴ� ����

		// �����̳ʸ� ��ȸ�� �� �ִ� �˰��� �Լ� (for each = �ð� ���⵵�� ������ �ΰ��� �Լ��̴�. ������ �Ͼ��, ��ȸ �ӵ��� �ſ� �������� Ư¡�� �ִ�.)
	for each (auto p in _vNumber)
	{
		cout << p << endl;
	}

	for (auto components :_vNumber)
	{

	}




	*/

	//4. erase
	// erase(begin() + index)
	// erase(begin() + s, begin() + e)
 
	cout << "erase" << endl;

	_vNumber.erase(_vNumber.begin() + 1);
	_vNumber.erase(_vNumber.begin(), _vNumber.begin() + 3); // ���� ǥ��

	LinePrint();

	//5. ����ȸ ( r= reverse -> v,r,iNumber�� ���̴�.)
	_vriNumber = _vNumber.rbegin();
	for (_vriNumber; _vriNumber != _vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}

	// �ڡڡڡڡڡڡ� ��� ���� ���� �ڡڡڡڡڡڡ�
	//6. �ε��� ����

	// at�� 4�� ������ ���, �տ� �ִ� 3�� ���� �ִ����� Ȯ���� ���� 4�� Ȯ���Ѵ�. (3�� ������� ���, NULL�� ��� ��ȯ�Ѵ�.)
	cout << _vNumber.at(4) << endl;
	// �� ���� ������ �Ѵ�. => �ӵ��� �������� �����ϴ�.(at�� ����� ���, for���� ����Ͽ� �����Ҷ� �Ϲ����� ����ó���� ���� �� �ִ�.)
	cout << _vNumber[4] << endl;
	// �� ���� ������ ���� �ʴ´�. -> �������� ��������


	//7. front

	cout << "����Ʈ" << endl;
	cout << _vNumber.front() << endl;

	// 8. back
	cout << "��" << endl;
	cout << _vNumber.back() << endl;

	// 9.size
	cout << "������" << endl;
	cout << vNumber.size() << endl;

	// 10. clear
	cout << "Ŭ����" << endl;
	_vNumber.clear();

	//. empty
	// �� ��� ������ T / �ϳ� �̻� ������ F

	// T
	if (_vNumber.empty())
	{
		cout << "���� ����°�?" << endl;

		return;
	}

	cout << _vNumber.at(2) << endl;

	LinePrint();

}
