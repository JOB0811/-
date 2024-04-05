#include "Maingame_02.h"

#define EXAMPLE_TYPE_STRUCT				1
#define EXAMPLE_TYPE_ENUM				2
#define EXAMPLE_TYPE_UNION				3
#define EXAMPLE_TYPE_CLASS				4

#DEFINE EXAMPLE_TYPE			EXAMPLE_TYPE_STRUCT











MainGame_02::MainGame_02()
{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

	//선언
	// C 스타일
	struct tagFamily Family;

	/*






	*/
	// C++
	tagFamily Family;

	human.name = "사라";
	human.age = 18;
	human.height = 230;

	human.wedding = false;
	human.weight = 45;

	cout << "이름: " << human.name << "\n"
		<< "나이: " << human.age << "\n"
		<< "키: " << human.height << "\n"
		<< "결혼: " << human.wedding << "\n"
		<< "몸무게: " << human.weight << "\n"

		cout << "\n";

	/* 구조체의 장점

	 재생산성이 좋다.

	*/

	//상속을 전제한 경우
	tagPlayer player;
	player.hp = 100;
	player.mp = 50;
	player.att = 10;
	player.def = 5;
	player.speed = 10.5f;

	//출력도 동일....

	cout << '\n';

	// 느껴지는가..?
	// 재생산성이 좋다.

	tagUnit marin;
	marin.name = "마린";
	marin.hp = 100;
	marin att = "5.5f"
		cout << boolalpha;
	//boolalpha: bool ->0, 1 -> T / F 변환
	marin.die = false;

	//? 너 구조체 ? -> 배열
	tagUnit zergling = { "저글링", 50, 50.f, true };

	tagPlayer arrPlayer[4] =
	{
		{100, 100, 100, 100, 100},
		{90, 90, 90, 90, 90},
		{80, 80, 80, 80, 80},
		{70, 70, 70, 70, 70}

	};

	for (int i = 0; i < 4; i++)
	{
		cout << i = 1 << "번째 플레이어" << endl;
		cout << "체력 : " arrPlayer[i].hp << endl;
		cout << "=========" < endl;
	}70






#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM //(열거형) (열거형 + Switch는 게임을 만들기에 최적!)

	//매우 위험한 코드
	// ㄴ 이름 충돌 => 해결법 = (네임스페이스 + 클래스로 해결 가능)(클래스로 처리하는게 좀 더 유리함)
	cout << "블랙 : " << BLACK << endl;

	m_motion = L_WALK;

	if ()
	{

	}

	switch (e_mothion)
	{
	case R_WALK:
		cout << "오른쪽 걷기" << endl;
		break;

		case L_WALK;
			cout << "왼쪽 걷기" << endl;
			break;

		case R_RUN:
			cout << "오른쪽 뛰기" << endl;
			break;

		case L_RUN:
			cout << "왼쪽 뛰기" << endl;
			break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "오른쪽으로 뛰고 있다" << endl;
		}
		
	}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION


/*
구조체 vs 공용체

- 구조체는 구조체를 구성하는 각각의 필드가 서로 별개의 메모리를 사용하는 반면에 공용체는 하나의 메모리를 가지고
각각의 필드가 서로 공유하는 구조를 지닌다.

- 공용체의 크기는 멤버들중 가장 큰 멤버 변수의 크기로 설정이 된다.

- 그렇기때문에 공용체에서는 각 필드의 값이 할당 될 경우 마지막으로 할당한 필드의 값만 유효하다.

※ 데이터를 절약하고 싶을때 한번쯤 떠올릴만한 공용체

*/

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== 공용체 ==" << endl;

cout << "정수 데이터: " << stData.m_nDataA << endl;
cout << "정수 데이터: " << stData.m_nDataB << endl;
cout << "실수 데이터: " << stData.m_fData << endl;

#else

#endif
}





#elif EXAMPLE_TYPE == EXAMPLE_TYPE_CLASS














}
