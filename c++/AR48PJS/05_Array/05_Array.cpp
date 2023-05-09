// 05_Array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;


    //0 으로 배열을 전부초기화 하는 방법
    //int arr[5] = { };

    // 배열을 특정 값으로 초기화 하는 방법
    int arr[5] = { 1,2,0,4,5 };


    // 배열의 인덱스
    // 가각의 배열에 원소에 접근할수있는 번호
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 2;
    arr[4] = 3;

    // 배열에서 꼭 주의 해야할 점
    // 꼭 해당 배열의 최대 인덱스가 
    // 배열의 크기를 넘어가지 않는지 
    // 주의해줘야한다.
    std::cout << arr[5];

    //int num = 10;

    std::cout << a;
    std::cout << arr[2];
    std::cout << arr[3];
    //std::cin >> arr[0];

    int i;
    for (i = 0; i < 5; i++)
    {
        arr[i] = 10;
        //std::cout << arr[i];
    }

    // 5칸짜리 배열을 만들고
    // 3~7 까지 for문을 이용해서 채워 넣어라



    int k;
    for (k = 3; k <= 7; k++)
    {
        arr[k - 3] = k;
    }

    // 문제를 풀때는
    // 항상 필요한만큼 얼마든지
    // 변수를 만들어서 활용해줘라
    int num = 3;
    int x;
    for (x = 0; x < 5; x++)
    {
        arr[x] = num;
        num++;
    }

    // 왜 메모리를 더 사용하는것 변수를 더 할당하는것
    // 이 문제가 안되냐?

    // 요새 컴퓨터는 메모리가 넘친다.
    // 전혀 아낄 필요가 없다.



    //int arr[1024] = {};

    int arr1[5];
    //int arr2[5];
    //int arr3[5];

    int arr2D[3][5] =
    {
        {1,2,3,4,5},
        {1,2,3,9,5},
        {1,2,3,4,5}
    };

    arr2D[2][1] = 3;

    int num2 = 1;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            arr2D[y][x] = num2;
            num2++;
        }
    }
    std::cout << std::endl;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            std::cout << arr2D[y][x];
        }
        std::cout << std::endl;
    }


    return 0;
}