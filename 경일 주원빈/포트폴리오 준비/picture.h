#include<iostream>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;


class picture // 도트 모음 클래스
{
public:
	void heartpicture();
	void penStand(int penY);
	void penJump(int penY);
	void penSlide(int penY);
	void background();
	void obstacle1();
	void obstacle2();
};

