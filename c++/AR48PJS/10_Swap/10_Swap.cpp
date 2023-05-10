// 10_Swap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 변수 두개가 있을때
    // 서로를 바꿔주는 로직

    int a = 5;
    int b = 9;

    // 임시변수를 생성해서
    // 값을 저장해두고 교환해준다.

    int c = a;
    a = b;
    b = c;


    return 0;
}
