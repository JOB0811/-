//#include "Example_06_A.h"
//#include "Example_07.h"
#include "MainGame.h"

void main()

{
	//EXAMPLE_02::Example();


	/*
	- 선언문에 의해 생성된 클래스형의 변수를 인스턴스라고 한다.

	- 클래스는 어디까지나 타입일뿐이지 그 자체가 정보를 저장하는 변수는 아니다.

	- 클래스를 선언한다고 해서 구조체 변수가 생기는것이 아닌것처럼
	  클래스를 선언한다고 해서 실제로 값을 기억할 수 있는 메모리가 할당되지는 않는다.
	
	*/


	// 1. 정적 할당 
	MainGame mg; 
	mg.outPut();

	/*정적 할당 특징
	1. 왠만한 경우에서는 사용되지 않는다.
	2. 구조체와 결을 같이함.
	3. 속도가 느려질 수 있다.(프로그램이 무거워질수록)
	*/



	// 2. 동적 할당
	MainGame* mainG = new MainGame; //인스턴스화 됬다!
	mainG->showPosition();
	mainG->setPosition(100, 100);
	mainG->showPosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->showPosition();
	//값이 안들어가 있으면 쓰레기 값이 나온다.

	delete mainG;
}

/*

void main()

{
	
// 2. 동적 할당 (객체지향 프로그래밍일시, 이런 형태)
MainGame* mainG = new MainGame; //인스턴스화 됬다!
delete mainG;
}


*/