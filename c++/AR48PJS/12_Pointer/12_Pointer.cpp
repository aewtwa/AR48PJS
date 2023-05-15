#include <iostream>


void test(int* a, int* b)
{
    *a += 1;
    *b += 1;
}

int main()
{
    int num = 0;
    char ch = '\0';
    char* pCh = &ch;
    *pCh = 'B';

    std::cout << pCh; // 주소출력
    std::cout << *pCh; // ch 값을 출력


    int d = 0;
    int e = 0;
    test(&d, &e);
    // return 값이 두개 이상을 
    // 포인터변수로 활용가능하다.

    // 포인터 변수
    // 메모리의 주소값을 저장하는  변수타입
    //void* p = &num;
    // void 형은 주소값만 저장할떄 사용한다.

    int* p = &num;
    //0x000000d11337f9e4

    *p = 100;
    // 포인터 변수에는
    // 일반 변수와는 다르게
    // 특별한 한가지의 기능이 있다.

    int arrNum[5] = {};
    char arrCh[5] = {};

    return 0;
}