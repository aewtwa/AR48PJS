// 08_ASCII.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";

    char ch = 'A';
    std::cout << ch;

    //caps lock
    int a = 'A';
    std::cout << a;


    //'d'

    int d = 'a' - 'A';

    if (ch >= 'A' && ch <= 'Z')
    {
        // 대문자
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        // 소문자
    }
    else if (ch >= '0' && ch <= '9')
    {
        // 숫자
    }

    // 프로그래밍 실력판단 요건 3가지
    // 1. 디버깅 2.파일입출력 3. 문자열



    return 0;
}