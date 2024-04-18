
#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>
using namespace std;

//좌표지정 함수
void goToXY(int x, int y) {
    COORD coord = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

const int hurdleCount = 4;


//플래피 버드 클래스 선언
class Flappy_Bird
{
    int hurdlePos[hurdleCount][2]; // 장애물
    int screenWidth = 79; // 맵 가로
    int screenHeight = 25; // 맵 세로
    int hurdleGap = 8; // 장애물 옵션?
    int betweenHurdleGap; // 장애물 지나가는 판정 추측

    int birdX = 17;
    int birdY = 15;

    int jump = 4;
    int score = 0;
public:
    Flappy_Bird()
    {
        srand(time(NULL));

        betweenHurdleGap = (screenWidth / hurdleCount) + 10; // 장애물 사이의 간격 계산 화면 너비 / 장애물 개수
        for (int i = 0; i < hurdleCount; i++) { 
            hurdlePos[i][0] = betweenHurdleGap * (i + 1); // 각 장애물의 가로 위치

            int breakPos = rand() % (screenHeight / 5) + hurdleGap; // 각 장애물의 세로 위치
            hurdlePos[i][1] = breakPos; //계산된 새로위치를 hurdlepos의 세로값에 저장
        }
    }

    void printHurdle() { //장애물 출력
        int count = 0;
        for (int i = 0; i < hurdleCount; i++) {                  //4번
            for (int j = 0; j < screenHeight; j++) {            //25

                if (hurdlePos[i][1] == j) count = hurdleGap;

                if (count == 0) {
                    if (hurdlePos[i][0] < screenWidth) {
                        goToXY(hurdlePos[i][0] + 1, j);
                        cout << " ";

                        goToXY(hurdlePos[i][0], j);
                        cout << i;
                    }
                }
                else {
                    if ((count == 1 || count == hurdleGap) && hurdlePos[i][0] < screenWidth) {
                        if (hurdlePos[i][0] + 1 > 0) {
                            goToXY(hurdlePos[i][0] + 1, j);
                            cout << "   ";
                        }

                        if (hurdlePos[i][0] - 1 > 0) {
                            goToXY(hurdlePos[i][0] - 1, j);
                            cout << "===";
                        }
                    }

                    count--;
                }
            }

            hurdlePos[i][0]--;

            if (hurdlePos[i][0] == -1) {
                int prev;
                if (i == 0)
                    prev = hurdleCount - 1;
                else
                    prev = i - 1;

                hurdlePos[i][0] = hurdlePos[prev][0] + betweenHurdleGap;

                int breakPos = rand() % (screenHeight / 3) + hurdleGap;
                hurdlePos[i][1] = breakPos;

                for (int i = 0; i < screenHeight; i++) {
                    goToXY(0, i);
                    cout << " ";
                }
            }
        }
    }

    bool collisionCheck() {
        if (birdY == 0 || birdY + 3 == screenHeight) return true;

        for (int i = 0; i < hurdleCount; i++) {
            if (
                hurdlePos[i][0] == birdX &&
                (
                    birdY >= hurdlePos[i][1] ||
                    birdY + 3 <= (hurdlePos[i][1] + hurdleGap)
                    )
                ) {
                score++;
            }

            if (hurdlePos[i][0] >= birdX - 5 &&
                hurdlePos[i][0] <= birdX &&
                (
                    birdY <= hurdlePos[i][1] ||
                    birdY + 3 >= (hurdlePos[i][1] + hurdleGap)
                    )
                ) {
                return true;
            }
        }
        return false;
    }

    void clearBird() // 새를 지우는 함수
    {

        goToXY(birdX - 5, birdY);
        cout << "   ";
        goToXY(birdX - 5, birdY + 1);
        cout << "      ";
        goToXY(birdX - 5, birdY + 2);
        cout << "       ";
    }

    void printScore() // 점수 출력하는 함수
    {
        goToXY(0, screenHeight + 4);
        cout << "Score: " << score;
    }

    void printBird() //새 출력 함수
    {
        goToXY(birdX - 5, birdY);      cout << " __";
        goToXY(birdX - 5, birdY + 1);   cout << "/-/o\\";
        goToXY(birdX - 5, birdY + 2);      cout << "\\_\\-/";
    }

    void printRoad() {
        for (int i = 0; i <= screenWidth; i++) {
            goToXY(i, screenHeight);      cout << "_";
            goToXY(i, screenHeight + 1);   cout << "/";
            goToXY(i, screenHeight + 2);   cout << "=";
        }
    }

    void play() {
        printRoad();
        int someDelay = 0;
        while (true) {
            if (GetAsyncKeyState(VK_SPACE)) { //스페이스 키가 눌리면 새의 위치를 위로 이동
                birdY -= jump;
            }

            printHurdle();
            printBird();
            printScore();

            if (collisionCheck()) break; //충돌여부 확인

            Sleep(100);
            clearBird(); // 1초후 이전 새의 위치를 지우고 Y위치를 1증가시켜 아래로 이동
            birdY += 1;
        }
    }
};

int main() {

    while (true) {
        Flappy_Bird fb;
        fb.play();
        goToXY(30, 30);
        cout << "Do you want to play again? (Y/N)";

        char ch;
        cin >> ch;
        if (ch == 'N' || ch == 'n') {
            break;
        }
        system("cls");
    }

    return 0;
}