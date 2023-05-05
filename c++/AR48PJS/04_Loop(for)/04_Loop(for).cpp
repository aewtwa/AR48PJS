// 04_Loop(for).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int test = 0;
    test = 123;

    // 반복문 (코드를 반복해서 실행한다.)

    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";

    //int i;
    //for (i = 0; i < 10; i++)
    //{
    //    std::cout << "Hello World!\n";
    //}
    //int i;
    //for (초기화; 조건식; 증감식)
    //{
    //
    //}
    // 초기식 , 조건식, 증감식은 프로그래머
    // 마음대로 바꿀수 있다.

    int d = 0;
    std::cin >> d;
    int k;
    for (k = 0; k < d; k++)
    {
        std::cout << "Hello World!\n";
    }

    //int k;
    //for (k = 1; k < 2; k++)
    //{
    //    std::cout << "Hello World!\n";
    //}

    //for문 안에도 if문을 사용이 가능하다.
    int j;
    for (j = 0; j < 10; j++)
    {
        if (j % 2 == 0)
        {
            std::cout << j << " 는 짝수입니다.\n";
        }
        else
        {
            std::cout << j << " 는 홀수입니다.\n";
        }
    }

    return 0;
}
