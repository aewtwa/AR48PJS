﻿//문제 1번
//다섯칸으로 된 1차배열 을 만들고,
//3 x 2 크기의 2차배열을 만들어 주세요
//그리고 각각 아래와 같이 하드코딩 해 주세요
//3	5	2	4	1
//9	8
//7	1
//3	4
//이제 숫자 하나를 입력 받으세요.
//만약 그 숫자가 홀수 일 경우 1차원 배열을 출력 해 주세요.
//만약 그 숫자가 짝수 일 경우 2차원 배열을 출력 해 주세요.
//[TIP] 2차원 배열 하드코딩 예시
//int vect[2][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };
//배열의 윗줄에는 1 2 3 4 5 값이 들어가고
//아랫줄에는 6 7 8 9 10 값이 들어갑니다.
//[TIP] 꼭 알아두세요 % 연산자(= MOD, =모드 연산자)
//% 는 숫자를 나누었을 때 나머지를 뜻합니다.
//예로들어 10을 2로 나누었을때 값은 5가 되지만 나머지는 0 입니다.따라서 10 % 2은 0 입니다.
//예를 들어 9를 2로 나누었을 때 값은 4가되지만 나머지는 1 입니다.따라서 9 % 2는 1 입니다.
//짝수인지 홀수인지 구분하려면 2로 나누었을 때 나머지값을 확인하면됩니다.
//아래 코드를 이해 해 보세요
//int t = 9;
//if (t % 2 == 0)
//{
//	//짝수입니다.
//}
//else
//{
//	//홀수입니다.
//}
//입력 예시
//10
//출력 예시
//98
//71
//34

#include <iostream>

int main()
{
	int arr[5] = { 3,5,2,4,1 };
	int arr2d[3][2] =
	{
		{ 9 ,8 },
		{ 7 ,1 },
		{ 3 ,4 }
	};
	int a;
	std::cin >> a;
	int b = a % 2;
	if (b == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr[i];
		}
	}
	else
	{
		for (int x = 0; x < 3; x++)
		{
			for (int y = 0; y < 2; y++)
			{
				std::cout << arr2d[x][y];
			}
			std::cout << "\n";
		}
	}
}

//문제 2번
//숫자 2개를 입력 받으세요
//큰 수에서 작은 수를 뺀 수가 홀수 인지 짝수인지 확인해주세요.
//그리고 홀수이면 "고백한다", 짝수이면 "짝사랑만" 을 출력 해 주세요
//주의 : 입력 받는 첫번째 숫자가 클 수도 있고 작을 수 도 있습니다.
//입력 예시
//5 2
//출력 예시
//고백한다

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c = a - b;
	int d = c % 2;
	if (d == 1 || d == -1)
	{
		std::cout << "고백한다.";
	}
	else
	{
		std::cout << "짝사랑만.";
	}
}

//문제 3번
//아래의 2차 배열을 하드코딩 해 주세요.
//3 1 1
//2 3 2
//위 2차배열을 2중 for문을 이용하여 출력 해 주세요.
//출력 예시
//311232

#include <iostream>

int main()
{
	int arr2d[2][3] =
	{
		{3,1,1},
		{2,3,2}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cout << arr2d[i][x];
		}
	}
}

//문제 4번
//for문을 돌려 숫자 5개를 배열에 입력받으세요.
//그리고 3 ~7 사이에 있는 숫자가 배열 안에 몇 개 있는지 Counting 후 출력 하세요.
//(3 <= arr[x] <= 7)
//입력 예시
//1 2 3 4 5
//출력 예시
//3

#include <iostream>

int main()
{
	int arr[5] = {};
	int i = 0;
	int count = 0;
	for (i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		if (3 <= arr[i] && arr[i] <= 7)
		{
			count++;
		}
	}
	std::cout << count;
}

//문제 5번
//점수 하나를 입력 받고(숫자 1개 입력), 평가 결과를 출력 해 주세요
//만약 80 보다 같거나 크면 "수" 출력
//만약 70 보다 같거나 크면 "우" 출력
//만약 60 보다 같거나 크면 "미" 출력
//모두 아니라면 "재시도" 출력
//입력 예시
//96
//출력 예시
//수

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a >= 80)
	{
		std::cout << "수";
	}
	else if (a >= 70)
	{
		std::cout << "우";
	}
	else if (a >= 60)
	{
		std::cout << "미";
	}
	else
	{
		std::cout << "재시도";
	}
}

//문제 6번
//정답맞추기 게임을 만들려고 합니다.
//숫자 하나를 입력받고,
//20보다 작은 수를 입력했다면 "더 큰수를 입력하세요" 라고 출력
//20보다 큰 수를 입력했다면 "더 작은수를 입력하세요" 라고 출력
//만약 20을 입력하였다면 "정답입니다" 출력하면 됩니다.
//이 게임을 총 4번 반복하는 프로그램을 작성 해 주세요
//입력 예시
//15 20 23 20
//출력 예시
//더 큰수를 입력하세요
//정답입니다
//더 작은수를 입력하세요
//정답입니다

#include <iostream>

int main()
{
	int a;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> a;
		if (a == 20)
		{
			std::cout << "정답입니다." << "\n";
		}
		else if (a < 20)
		{
			std::cout << "더 큰 수를 입력하세요." << "\n";
		}
		else if (a > 20)
		{
			std::cout << "더 작은 수를 입력하세요." << "\n";
		}
	}
}
//문제 7번
//숫자 3개를 입력받아주세요
//숫자 3개 중 가장 큰 값을 출력 해 주세요(MAX값 출력)
//그리고 숫자 3개 중 가장 작은 값도 출력 해 주세요(MIN값 출력)
//[힌트]
//a b c에 각각 숫자가 들어 있습니다.
//만약 a >= b && a >= c 이라면 a가 가장 큰 숫자입니다.
//a가 가장 크진 않지만 b >= a && b >= c 이라면
//b가 가장 큰 숫자입니다.
//둘 다 아니면 c가 가장 큰 것입니다.
//입력 예시
//5 3 3
//출력 예시
//MAX = 5
//MIN = 3

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	if (a >= b && a >= c)
	{
		std::cout << "MAX = " << a;
	}
	else if (b >= a && b >= c)
	{
		std::cout << "MAX = " << b;
	}
	else
	{
		std::cout << "MAX = " << c;
	}
}

//문제 8번
//아래의 배열을 하드코딩 해 주세요.
//3 4 1
//2 1 4
//3 3 0
//홀수와 짝수가 각각 몇개인지 출력하면 됩니다.
//(0은 짝수로 취급합니다.)
//출력 예시
//짝수 : 4
//홀수 : 5

#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		{3,4,1},
		{2,1,4},
		{3,3,0}
	};
	int i = 0;
	int j = 0;
	int countA = 0;
	int countB = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			int mod = arr2d[i][j] % 2;
			if (mod == 0)
			{
				countA++;
			}
			else
			{
				countB++;
			}
		}
	}
	std::cout << "짝수 : " << countA << "\n";
	std::cout << "홀수 : " << countB;
}

//문제 9번
//배열 5칸에 5명의 점수를 입력 받아주세요
//만약 70점 이상(>= )이면 "PASS" 출력
//만약 50점 이상(>= )이면 "RETEST" 출력
//50점 아래라면 "FAIL" 출력을 해야 합니다.
//5명의 채점결과를 출력해주는 프로그램을 작성 해 주세요
//입력 예시
//90 30 60 30 100
//출력 예시
//1번사람은90점PASS
//2번사람은30점FAIL
//3번사람은60점RETEST
//4번사람은30점FAIL
//5번사람은100점PASS

#include <iostream>

int main()
{
	int arr[5] = {};
	int i;
	for (i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	if (arr[i] >= 70)
	{
		std::cout << "PASS";
	}
	else if (arr[i] >= 50)
	{
		std::cout << "RETEST";
	}
	else if (arr[i] < 50)
	{
		std::cout << "FAIL";
	}
}

//문제 10번

#include <iostream>

int main()
{

}

//문제 11번

#include <iostream>

int main()
{

}

//문제 12번

#include <iostream>

int main()
{

}