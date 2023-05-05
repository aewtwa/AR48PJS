﻿#include <iostream>

int main()
{
    // 사용자 입력에 따라서
    // 실행되는 코드의 분기를 나눌수있는 문법
    // 조건문 / 분기문 / If문

    // = 대입 연산자 (오른쪽에있는 값을 왼쪽으로 복사해서 넘겨주는 연산자)
    int a = 10;

    // 비교 연산자 
    // < , <=, >, >=, ==
    if (a == 5) // 조건이 참일때 실행되는 분기
    {
        std::cout << "참";
    }
    else // 참을 제외한 모든 조건에서의 실행 분기
    {
        std::cout << "거짓";
    }

    // 조건문은 얼마든지 중복으로 사용이 가능하다.
    if (a > 5)
    {
        if (a < 10)
        {
            std::cout << "참";
        }
    }
    else
    {
        std::cout << "거짓";
    }

    a = 7;
    //2중이상으로 조건을 두는 방법
    // 논리 연산자를 활용
    if (a > 5 && a == 10)
    {

    }

    if (a > 5 || a == 10)
    {

    }

    // 조건을 여러개 두고 다중으로 비교하고 싶을때

    a = 2;
    if (a == 1) // 조건이 참일때 실행되는 분기
    {
        std::cout << "1";
    }
    else if (a == 2) // 조건이 참일때 실행되는 분기
    {
        std::cout << "2";
    }
    else if (a == 3) // 조건이 참일때 실행되는 분기
    {
        std::cout << "3";
    }
    else if (a == 4) // 조건이 참일때 실행되는 분기
    {
        std::cout << "4";
    }
    else
    {
        // 위 네조건이 전부 아닌경우에는
    }

    // 중복 실행이 가능하다
    //if (a == 1) // 조건이 참일때 실행되는 분기
    //{
    //    std::cout << "1";
    //}
    //if (a == 2) // 조건이 참일때 실행되는 분기
    //{
    //    std::cout << "2";
    //}
    //if (a == 3) // 조건이 참일때 실행되는 분기
    //{
    //    std::cout << "3";
    //}
    //if (a == 4) // 조건이 참일때 실행되는 분기
    //{
    //    std::cout << "4";
    //}



    return 0;
}