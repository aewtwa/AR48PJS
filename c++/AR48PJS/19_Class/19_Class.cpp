// 19_Class.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class Player
{
public:
    // 생성자 (라는 함수)
    Player()
        : x(0)
        , y(0)
        , grade(0)
    {
        
    }

public:
    int x;
    int y;
    char grade;
};


int main()
{
    Player warrior;

    int len = sizeof(warrior);

    // 바이트 패딩
    // 캐시적중율
    warrior.x = 10;
    warrior.y = 10;
    warrior.grade = 'A';

    return;
}

