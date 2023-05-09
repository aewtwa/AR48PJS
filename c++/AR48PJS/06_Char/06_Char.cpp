// 06_Char.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::cout << "안녕 World!\n";

    char ch = 'A';

    std::cout << ch;


    char str[5] = { 'A' , 'B' , 'C' , 'D' , 'E' };

    //printf("%d", ch);

    //0 NULL nullptr '\0'  -> 값이 전부 0입니다.

    // 가독성의 차이가 생긴다.
    // 자료형의 유추가 가능하다.
    char ch = '\0';
    void* p = nullptr;
    int data = NULL;
    int num = 0;

    //char ch = 0;
    //void* p = 0;
    //int data = 0;
    //int num = 0;

    return 0;
}


