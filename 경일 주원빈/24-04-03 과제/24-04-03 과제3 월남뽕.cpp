#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#include<random>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::shuffle;
using std::random_device;
using std::mt19937;
/*

-타임 어택 과제 - (금요일 시행)
과제 3. 월남뽕

- 치트 필수

♠스페이드 / 1 ~13까지의 카드
◆다이아 / 1 ~13까지의 카드
♥하트 / 1 ~13까지의 카드
♣클로버 / 1 ~13 까지의 카드

종류별 13장의 카드 = > 총 52장의 카드 사용

예외처리
ㄴ A = 1
ㄴ J = 11
ㄴ Q = 12
ㄴ K = 13


- 52장의 카드를 최소 한번 랜덤으로 섞고 그후 매턴마다 3장씩 뒤집는다.


- 앞쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상의 금액을 배팅
ㄴ 최소 배팅액 : 1, 000 / 소지금 : 10, 000


- 배팅 후 세번째 카드의 수가 앞서 오픈된 카드 숫자의 사이에 있다면 배팅 금액의 10배가 되어
소지금 추가

반대라면 소지금에서 배팅한 만큼 마이너스

※ 한 턴이 끝나고 사용된 카드는 버려져서 더 이상 사용할 수 없다.

게임 종료 조건 : 소지금이 다 떨어지거나, 카드가 다 떨어지거나.

배팅 폭이 없음.

*/


int count = 0;
int betting = 10000;
int betMoney = 1000;
string card[] = { "♣1","♣2","♣3","♣4","♣5","♣6","♣7","♣8","♣9","♣10","♣11","♣12","♣13"
				 ,"♠1","♠2","♠3","♠4","♠5","♠6","♠7","♠8","♠9","♠10","♠11","♠12","♠13"
				 ,"♥1","♥2","♥3","♥4","♥5","♥6","♥7","♥8","♥9","♥10","♥11","♥12","♥13"
				 ,"◆1","◆2","◆3","◆4","◆5","◆6","◆7","◆8","◆9","◆10","◆11","◆12","◆13" };


void main()
{
		int size = sizeof(card) / sizeof(card[0]);
		random_device Shuffle;
		mt19937 g(Shuffle());
		shuffle(begin(card), end(card), g);


		cout << "셔플된 카드: ";
		for (int i = 0; i < size; ++i) {
			string fNumber = card[i].substr(0,1); //특수문자 or 특수문자와 십의자리
			string bNumber = card[i].substr(1); //일의자리 숫자
			cout << fNumber <<  bNumber << " ";
		}
		cout << endl;
	} 
