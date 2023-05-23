//문제 1번
//아래의 2차배열을 하드코딩 해 주세요.
//A T K B
//C Z F D
//H G E I
//문자 1개를 입력받고
//y, x축의 offset 값을 입력받습니다.
//입력받은 문자 위치에서 offset만큼 떨어져 있는 곳의 문자를 출력 하세요.
//만약 T 2 1를 입력받았다면,
//T에서 y축으로 + 2, x축으로 + 1만큼 떨어진
//알파벳인 E를 출력하시면 됩니다.
//입력 예제
//T 2 1
//출력 결과
//E

#include <iostream>

int main()
{
    char map[3][5] =
    {
        "ATKB",
        "CZFD",
        "HGEI"
    };
    char A = 0;
    std::cin >> A;
    int a = 0;
    std::cin >> a;
    int b = 0;
    std::cin >> b;
    int Y = 0;
    int X = 0;
    int flag = 0;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (map[i][j] == A)
            {
                Y = i;
                X = j;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    std::cout << "Find : " << map[Y + a][X + b];
}

//문제 2번
//숫자배열을 하드코딩 해주세요.
//3 5 9
//4 2 1
//1 1 5
//그리고 matching 되는 3x3 비트배열을 입력 받으세요.
//masking 처리 후 나온 숫자들의 합을 출력하세요.
//입력 예제
//1 0 1
//0 1 1
//1 0 0
//출력 결과
//16

#include <iostream>

int main()
{
    int arr1[3][3] =
    {
        3,5,9,
        4,2,1,
        1,1,5
    };
    int sum = 0;
    char arr2[3][4] = {};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cin >> arr2[i][j];
            if (arr2[i][j] == '1')
            {
                sum = sum + arr1[i][j];
            }
        }
    }
    std::cout << sum;
}

//문제 3번
//아래 배열을 하드코딩 하고, 숫자 2개를 입력받습니다.
//5	9 4	6 1	5 8	9
//첫번째 숫자는 기준점 index 이고,
//두번째 숫자는 찾을 Target 숫자 값입니다.
//기준점 index로 부터 오른쪽으로 Target 숫자를 찾습니다.
//가장 가까운 거리에 있는 Target을 찾아, 그 Offset값을 출력 해 주세요
//* Offset : 기준점에서 얼만큼 떨어져 있는지를 나타내는 값
//예로들어 3과 8을 입력받았다면
//3번 index에서부터 오른쪽으로 숫자 8이 어디있는지 찾아야합니다.
//가장 가까운 8은 세 번째 떨어진 곳에 존재하므로,
//Offset값은 3 입니다.
//입력 예제
//1 6
//출력 결과
//2

#include <iostream>

int main()
{
    int arr[8] = { 5,9,4,6,1,5,8,9 };
    int a = 0;
    std::cin >> a;
    int b = 0;
    std::cin >> b;
    int index = 0;
    int target = 0;
    for (size_t i = 0; i < 8; i++)
    {
        if (arr[a] == arr[i])
        {
            index = i;
            break;
        }
    }
    for (size_t i = index; i < 8; i++)
    {
        if (arr[i] == b)
        {
            target = i;
            break;
        }
    }
    std::cout << target - index;
}

//문제 4번
//아래 배열을 하드코딩 해 주세요
//그리고 숫자 3개를 배열에다가 입력받아주세요
//3	5 9
//4	2 1
//5	1 5
//isExist함수를 이용해서 각각 입력받은 숫자가
//하드코딩한 배열안에 존재하는지 출력 해 주세요
//입력 예제
//3 7 1
//출력 결과
//3:존재
//7 : 미발견
//1 : 존재

#include <iostream>

int arr2d[3][3] =
{
    3,5,9,
    4,2,1,
    5,1,5
};

void isExist(int _a)
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (arr2d[i][j] == _a)
            {
                std::cout << _a << " : 존재\n";
                return;
            }
        }
    }
    std::cout << _a << " : 미발견\n";
}


int main()
{
    int a = 0;
    std::cin >> a;
    int b = 0;
    std::cin >> b;
    int c = 0;
    std::cin >> c;
    isExist(a);
    isExist(b);
    isExist(c);
}

//문제 5번
//아래 두 mask 배열을 합쳐주세요.
//그리고 비어있는 곳의 좌표를 출력하세요.
//0 0 0 1     1 1 1 1
//1 1 0 1     1 0 1 1
//1 0 0 1     1 0 0 0
//1 1 1 1     1 0 0 0
//출력 결과
//(2, 1)
//(2, 2)

#include <iostream>

int main()
{
    int arr1[4][4] =
    {
        0,0,0,1,
        1,1,0,1,
        1,0,0,1,
        1,1,1,1
    };
    int arr2[4][4] =
    {
        1,1,1,1,
        1,0,1,1,
        1,0,0,0,
        1,0,0,0
    };
    int arr3[4][4] = {};
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (arr1[i][j] == 1)
            {
                arr3[i][j] = 1;
            }
            else if (arr2[i][j] == 1)
            {
                arr3[i][j] = 1;
            }
        }
    }
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (arr3[i][j] == 0)
            {
                std::cout << "(" << i << " , " << j << ")\n";
            }
        }
    }
}

//문제 6번
//0 0 1 0 0
//0 0 1 1 1
//
//3 5 4 1 1
//3 5 2 5 6
//위 두 배열을 하드코딩 해주세요.
//숫자 1개를 입력하고
//masking 처리된 곳 중 입력 받은 숫자가 존재하는지 안하는지를 출력 해주세요.
//ex)
//- 5를 입력 하면 존재하기 때문에 "5 존재"
//- 1을 입력 하면 없기 때문에 "1 없음"
//입력 예제
//1
//출력 결과
//1 없음

#include <iostream>

int main()
{
    int arr2d1[2][5] =
    {
        0,0,1,0,0,
        0,0,1,1,1
    };
    int arr2d2[2][5] =
    {
        3,5,4,1,1,
        3,5,2,5,6
    };
    int arr2d3[2][5] = {};
    int a = 0;
    std::cin >> a;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (arr2d1[i][j] == 1)
            {
                arr2d3[i][j] = arr2d2[i][j];
            }
        }
    }
    int flag = 0;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (arr2d3[i][j] != 0 && arr2d3[i][j] == a)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        std::cout << a << " 존재";
    }
    else
    {
        std::cout << a << " 없음";
    }
}

//문제 7번
//아래와 같이 1차 배열을 하드코딩 해 주세요.
//B T K I G Z
//그리고 문자 4개를 target 이라는 배열에 입력 받으세요
//입력받은 문자 중 총 몇 개의 알파벳이 vect배열 안에 존재하는지 출력 하세요.
//예를들어,
//A B Y Z를 입력 하면, B와 Z가 존재하기 때문에 답은 2 입니다.
//예를들어,
//T K G F를 입력하시면, 숫자 3이 출력 됩니다.
//입력 예제
//A B Y Z
//출력 결과
//2

#include <iostream>

int main()
{
    char arr[6] = { 'B','T','K','I','G','Z' };
    char target[4] = {};
    for (size_t i = 0; i < 4; i++)
    {
        std::cin >> target[i];
    }
    int count = 0;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            if (arr[j] == target[i])
            {
                count++;
                break;
            }
        }
    }
    std::cout << count;
}

//문제 8번
//아래의 2차배열을 하드코딩 해 주세요.
//3 7 4
//2 2 4
//2 2 5
//숫자 3개를 target 배열에 입력받아 주세요.
//각각 vect에 몇개가 있는지 counting 하고, 이중 가장 빈도수가 높은 숫자를 출력 하세요.
//ex)
//2 3 4
//2는 4개, 3은 1개, 4는 2개가 있으므로
//2 를 출력 하시면 됩니다.
//입력 예제
//2 3 4
//출력 결과
//2

#include <iostream>

int main()
{
    int vect[3][3] =
    {
        3,7,4,
        2,2,4,
        5,5,5
    };
    int target[3] = {};
    for (size_t i = 0; i < 3; i++)
    {
        std::cin >> target[i];
    }
    int idxcount[3] = {};
    int maxidxcount = 0;
    for (size_t k = 0; k < 3; k++)
    {
        for (size_t i = 0; i < 3; i++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                if (vect[i][j] == target[k])
                {
                    idxcount[k]++;
                }
            }
        }
        if (maxidxcount < idxcount[k])
        {
            maxidxcount = idxcount[k];
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        if (idxcount[i] == maxidxcount)
        {
            std::cout << target[i];
        }
    }
}

//문제 9번
//합격자 발표가 났습니다.
//합격자 명단인 아래의 배열을 하드코딩 해 주세요.
//3 7 4 1 2 6
//이제, 존재여부를 찾을 숫자 4개를 univer 배열에 입력 받으세요.
//입력받은 숫자들이 존재하면 OK, 없으면 NO를 예제와 같이 출력 해 주세요.
//(isExist 함수를 써서 풀어 주세요)
//입력 예제
//1 3
//5 9
//출력 결과
//OK OK
//NO NO

#include <iostream>

void isExist(int* _a, int(*_b)[2])
{
    int a = 0;
    int arr[2][2] = {};
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            for (size_t k = 0; k < 6; k++)
            {
                if (_b[i][j] == _a[k])
                {
                    arr[i][j] = 1;
                }
            }
        }
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            if (arr[i][j] == 1)
            {
                std::cout << "OK ";
            }
            else
            {
                std::cout << "NO ";
            }
        }
        std::cout << "\n";
    }
}

int main()
{
    int arr[6] = { 3,7,4,1,2,6 };
    int univer[2][2] = {};
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            std::cin >> univer[i][j];
        }
    }
    char A[2][2] = {};
    isExist(arr, univer);
}

//문제 10번
//아래의 배열을 하드코딩 해 주세요.
//3 4 1 1 2 6 8 7 8 9 10
//getSum 함수를 위와 같이 정의 해 주세요.
//startIndex를 입력 받고 getSum 함수를 이용해서
//숫자 다섯개의 합을 출력 해 주세요.
//입력 예제
//1
//출력 결과
//14

#include <iostream>

void getSum(int* _a, int _b)
{
    int sum = 0;
    for (size_t i = _b; i < _b + 5; i++)
    {
        sum = sum + _a[i];
    }
    std::cout << sum;
}

int main()
{
    int arr[11] = { 3,4,1,1,2,6,8,7,8,9,10 };
    int startindex = 0;
    std::cin >> startindex;
    getSum(arr, startindex);
}

//문제 11번
//두명의 이름을 입력 받으세요.
//두명의 이름이 완전히 같으면 "동명" 다르면 "남남" 으로 출력 해주세요.
//(isSame 함수를 이용)
//입력 예제
//jason
//jason
//출력 결과
//동명

#include <iostream>

void isSame(char* _a, char* _b)
{
    int flag = 0;
    int same = 0;
    for (size_t i = 0; i < 256; i++)
    {
        for (size_t j = i; j < 256; j++)
        {
            if (_a[i] == '\0')
            {
                flag = 1;
                break;
            }
            if (_a[i] == _b[j])
            {
                same = 1;
                break;
            }
            else
            {
                same = 0;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (same == 1)
    {
        std::cout << "동명";
    }
    else
    {
        std::cout << "남남";
    }
}

int main()
{
    char a[256] = {};
    std::cin >> a;
    char b[256] = {};
    std::cin >> b;
    isSame(a, b);
}

//문제 12번
//아래에 그림처럼 vect배열을 하드코딩 하고, 비트배열을 입력 받으세요.
//마스킹 한 후 나오는 값을 7로 바꾸어 출력 해주세요
//3 5 4 2 6 6 5
//입력 예제
//0 1 1 0 1 1 0
//출력 결과
//0770770

#include <iostream>

int main()
{
    int vect[7] = { 3,5,4,2,6,6,5 };
    int bit[7] = {};
    for (size_t i = 0; i < 7; i++)
    {
        std::cin >> bit[i];
    }
    for (size_t i = 0; i < 7; i++)
    {
        if (bit[i] == 1)
        {
            std::cout << 7;
        }
        else
        {
            std::cout << 0;
        }
    }
}

//문제 13번
//금고 비밀번호는 3 7 4 9 입니다.
//그리고 네 자리 비밀번호를 input 배열에 입력받고,
//완전히 동일한 비밀번호인지 isSame 함수를 이용해서 풀어주세요.
//동일하면 "pass", 그렇지 않으면 "fail" 로 출력 해주세요.
//입력 예제
//3 7 4 9
//출력 결과
//pass

#include <iostream>

void input(int* _a)
{
    for (size_t i = 0; i < 4; i++)
    {
        std::cin >> _a[i];
    }
}

void isSame(int* _a, int* _b)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (_a[i] != _b[i])
        {
            std::cout << "fail";
            return;
        }
    }
    std::cout << "pass";
}

int main()
{
    int password[4] = { 3,7,4,9 };
    int arr[4] = {};
    input(arr);
    isSame(arr, password);
}

//문제 14번
//다이어트를 시작하기 위해 칼로리별로 과일이 몇 개 있는지 counting하려고 합니다.
//먼저 levelTable 배열을 하드코딩 해 주세요
//10  20
//30  60
//100 150
//200 300
//levelTable에서
//lev0(단계0)은 10 <= x <= 20 사이의 칼로리를,
//lev1(단계1)은 30 <= x <= 60 사이의 칼로리를,
//lev2(단계2)는 100 <= x <= 150 사이의 칼로리를,
//lev3(단계3)은 200 <= x <= 300 사이의 칼로리를 뜻합니다.
//이제 과일 6개의 칼로리를 입력 받으세요. (숫자 6개 입력)
//단계0부터 단계3까지 각 단계마다
//과일이 몇개 있는지 Counting 후 출력 해 주세요.
//입력 예제
//15 15 15 40 100 105
//출력 결과
//lev0 : 3
//lev1 : 1
//lev2 : 2
//lev3 : 0

#include <iostream>

int main()
{
    int arr2d[4][2] =
    {
        10,20,
        30,60,
        100,150,
        200,300
    };
    int arr[6] = {};
    for (size_t i = 0; i < 6; i++)
    {
        std::cin >> arr[i];
    }
    int arr2[4] = {};
    for (size_t k = 0; k < 6; k++)
    {
        for (size_t i = 0; i < 4; i++)
        {
            if (arr2d[i][0] <= arr[k] && arr[k] <= arr2d[i][1])
            {
                if (i == 0)
                {
                    arr2[i]++;
                }
                if (i == 1)
                {
                    arr2[i]++;
                }
                if (i == 2)
                {
                    arr2[i]++;
                }
                if (i == 3)
                {
                    arr2[i]++;
                }
            }
        }
    }
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << "Lev" << i << " : " << arr2[i] << "\n";
    }
}

//문제 15번
//map 배열을 하드코딩하고,
//pix 배열에 숫자 4개를 입력받으세요
//pix배열에 있는 색상값들이 map에 존재하는 컬러인지 확인해주는 프로그램을 작성 해주세요.
//만약 pix배열에
//1 10
//55 - 5
//값이 입력되었다면, 아래 그림같이 배열에 값이 채워집니다.
//pix 배열에 있는 컬러가 map에 있다면 Y를, 없다면 N을 출력하면 됩니다.
//ex)
//입력 예제
//1 10
//55 - 5
//출력 결과
//N N
//Y Y

#include <iostream>

int main()
{
    int map[2][3] =
    {
        3,55,42,
        -5,-9,-10
    };
    int pix[2][2] = {};
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            std::cin >> pix[i][j];
        }
    }
    int arr[2][2] = {};
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            for (size_t k = 0; k < 2; k++)
            {
                for (size_t l = 0; l < 3; l++)
                {
                    if (map[k][l] == pix[i][j])
                    {
                        arr[i][j] = 1;
                        break;
                    }
                    else
                    {
                        arr[i][j] = 0;
                    }
                }
                if (arr[i][j] == 1)
                {
                    break;
                }
            }
        }
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            if (arr[i][j] == 1)
            {
                std::cout << "Y ";
            }
            else
            {
                std::cout << "N ";
            }
        }
        std::cout << "\n";
    }
}

//문제 16번
//arr배열에 숫자 6개를 입력 받습니다.
//masking 처리 후 남은값들 중에서
//min값을 찾고 min값의 index를 출력 하세요.
//입력 예제
//3 5 4 2 5 1
//출력 결과
//arr[0] = 3

#include <iostream>

int main()
{
    int mask[6] = { 1,0,1,0,1,0 };
    int arr[6] = {};
    for (size_t i = 0; i < 6; i++)
    {
        std::cin >> arr[i];
    }
    int min = 987654321;
    int minidx = 0;
    for (size_t i = 0; i < 6; i++)
    {
        if (mask[i] == 1)
        {
            for (size_t j = 0; j < 6; j++)
            {
                if (arr[i] < min)
                {
                    min = arr[i];
                    minidx = i;
                }
            }
        }
    }
    std::cout << "arr[" << minidx << "] = " << min;
}

//문제 17번
//masking 처리 후, 3부터 5사이의 숫자가 존재하는지 출력.
//(3 <= x <= 5)
//ex)
//존재하면 "발견"
//존재하지 않으면 "미발견"
//입력 예제
//1 1 1
//1 0 0
//1 0 0
//출력 결과
//발견

#include <iostream>

int main()
{
    int arr1[3][3] =
    {
        3,1,9,
        7,2,1,
        1,0,8
    };
    int arr2[3][3] = {};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cin >> arr2[i][j];
        }
    }
    int flag = 0;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (arr2[i][j] == 1)
            {
                if (3 <= arr1[i][j] && arr1[i][j] <= 5)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        std::cout << "발견";
    }
    else
    {
        std::cout << "미발견";
    }
}

//문제 18번
//3	5 4	2
//위 배열을 하드코딩하고,
//네 자리 비트배열을 입력 받으세요.
//마스킹 처리 후, 남은 숫자들의 합을 구해서 출력하면 됩니다.
//예를들어
//0 1 0 1 을 입력했다면, 다음과 같이 그릴 수 있습니다.
//입력 예제
//0 1 0 1
//출력 결과
//7

#include <iostream>

int main()
{
    int arr[4] = { 3,5,4,2 };
    int arr1[4] = {};
    for (size_t i = 0; i < 4; i++)
    {
        std::cin >> arr1[i];
    }
    int sum = 0;
    for (size_t i = 0; i < 4; i++)
    {
        if (arr1[i] == 1)
        {
            sum = sum + arr[i];
        }
    }
    std::cout << sum;
}

//문제 19번
//A B C D E
//F G H I J
//K L M N O
//P Q R S T
//U V W X Y
//문자 1개를 입력 받으세요.
//해당 알파벳이 'M'(2, 2)로 부터 얼만큼 떨어져있는지 offset값을 출력 해주세요.
//(offset : y, x 기준)
//예를들어
//N은 0, 1 만큼 떨어져있고,
//H는 - 1, 0 만큼 떨어져있습니다.
//입력 예제
//F
//출력 결과
//- 1, -2

#include <iostream>

int main()
{
    char map[5][5] =
    {
        'A','B','C','D','E',
        'F','G','H','I','J',
        'K','L','M','N','O',
        'P','Q','R','S','T',
        'U','V','W','X','Y'
    };
    int y = 0;
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (map[i][j] == 'M')
            {
                y = i;
                x = j;
            }
        }
    }
    char a = 0;
    std::cin >> a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (map[i][j] == a)
            {
                std::cout << i - y << "," << j - x;
            }
        }
    }
}