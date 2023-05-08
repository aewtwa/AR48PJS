// 07_Function.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 전역 변수
// 프로그램 시작과 동시에
// 메모리할당이 된다.
// 프로그램 종류 될떄까지 안사라진다.
// 초기화 하지 않아도 자동으로 0으로 초기화 된다.
int g = 0;

// 함수란 
// 소스코드를 묶어서 
// 반복적인 작업이나 또는 나만의 기능
// 명령어를 만드는 기능


//반환값 함수이름()
void HelloWorld(/*int a*/)
{
    //int i;
    //for (i = 0; i < 5; i++)
    //{
    //    std::cout << "Hello World!\n";
    //}

    std::cout << "Hello World!\n";
    std::cout << "Hello World!\n";
    std::cout << "Hello World!\n";
    std::cout << "Hello World!\n";
    std::cout << "Hello World!\n";

    return;
}


void Increase()
{
    // 지역 변수
    // 해당 지역안에서만 사용이가능하고
    // 지역을 벗어나면 메모리에서 해제된다.
    // 초기화 하지 않으면 쓰레기값이 할당되어있다.
    int d = 0;

    g++;
    std::cout << g;
}


int main()
{

    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";

    //int i;
    //for (i = 0; i < 5; i++)
    //{
    //    std::cout << "Hello World!\n";
    //}

    //int i;
    //for (i = 0; i < 5; i++)
    //{
    //    std::cout << "Hello World!\n";
    //}

    //int i;
    //for (i = 0; i < 5; i++)
    //{
    //    std::cout << "Hello World!\n";
    //}

    //int i;
    //for (i = 0; i < 5; i++)
    //{
    //    std::cout << "Hello World!\n";
    //}

    //int i;
    //for (i = 0; i < 5; i++)
    //{
    //    std::cout << "Hello World!\n";
    //}

    //a++;

    HelloWorld();
    HelloWorld();
    HelloWorld();
    HelloWorld();
    HelloWorld();

    //지역 변수
    int a = 0;

    Increase();
    g--;

    return 0;