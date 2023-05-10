#include <iostream>


// 사용자 정의 자료형


// 구조체는 접근제한 지정가가 기본값이 public이다

struct Player
{
    int hp;
    int mp;
    int att;
    int def;
};

//struct Player
//{
//public:
//    int hp;
//    int mp;
//
//private:
//    int att;
//    int def;
//};

// 클래스에는 접근 제한 지정자가 있다
// 클래스는 디폴트(기본) 접근제한 지정자가 private;
//class Player
//{
//public:
//    int hp;
//    int mp;
//
//private:
//    int att;
//    int def;
//};

int main()
{
    //int playerHP = 0;
    //int playerMP;
    //int playerATT;
    //int playerDEF;

    //int player2HP;
    //int player2MP;
    //int player2ATT;
    //int player2DEF;

    Player warrior;
    warrior.mp = 100;
    warrior.hp = 100;
    //warrior.

    Player archer;
    Player magicion;

    // 구조체를 쓰는 이유
    // 여러개의 변수들을 묶은 형태로 그룹화 하고 싶을때
    // 특성 상황에서 소스코드를 보다 간결하게 표현할수 있다.
    // 차후에 자료구조 및 알고리즘을 배울 때 구조체,클래스가 사용되는데
    // 이를 위해 미리 익숙해져야 한다.

    return 0;
}