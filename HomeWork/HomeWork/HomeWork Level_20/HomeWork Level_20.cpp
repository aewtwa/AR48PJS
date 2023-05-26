//문제 1번
//아래 그림과 같이 재귀 함수를 구현해주세요.
//(전역변수를 쓰지 않습니다)
//입출력 값이 없는 문제입니다.
//----------------------------------------
//Trace 연습을 많이 해야합니다.
//F10, F11, ctrl + F10 버튼을 이용해서
//능숙해지도록 연습을 꼭 해보세요!!

#include <iostream>

void bbq(int _a)
{
	if (_a == 3)
		return;
	bbq(_a + 1);
}

int main()
{
	bbq(0);
}

//문제 2번

#include <iostream>

void function(int _a)
{
	if (_a == 0)
	{
		std::cout << _a << " ";
		return;
	}
	std::cout << _a << " ";
	function(_a - 1);
	std::cout << _a << " ";
}

int main()
{
	int n = 0;
	std::cin >> n;
	function(n);
}

//문제 3번
//마이클잭슨은 앞으로 갔다가 뒤로가는 백스탭 춤을 추곤합니다.
//이 무브먼트(움직임)를 재귀를 사용해 출력 해주세요.
//만약,
//3 5 4 6 2 9   를 입력 받으면
//3 5 4 6 2 9 2 6 4 5 3   이 출력 됩니다.
//입력 예제
//1 2 3 4 5 6
//출력 결과
//1 2 3 4 5 6 5 4 3 2 1

#include <iostream>

int arr[6] = {};

void movement(int _a)
{
	if (_a == 5)
	{
		std::cout << arr[_a];
		return;
	}
	std::cout << arr[_a];
	movement(_a + 1);
	std::cout << arr[_a];
}

int main()
{
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	movement(0);
}
//문제 4번
//다음과 같이 동작하는 프로그램을 작성해 주세요
//한번 재귀호출 될 때 마다, 2씩 증가됩니다.
//그리고 3번 재귀 함수 진입 후, 리턴되면서 값을 출력 하면 됩니다.
//만약 1을 입력받았다면,
//출력 결과 : 7 5 3 1
//입력 예제
//1
//출력 결과
//7 5 3 1

#include <iostream>

void function(int _a, int _b)
{
	if (_b == 3)
	{
		std::cout << _a;
		return;
	}
	function(_a + 2, _b + 1);
	std::cout << _a;
}

int main()
{
	int a = 0;
	std::cin >> a;
	int re = 0;
	function(a, re);
}

//문제 5번
//다섯 글자를 배열에 넣어주세요.
//그리고 0번~4번 index까지 출력 하고
//4번~0번 index까지 출력하는 프로그램을
//재귀호출로 만들어 주세요
//입력 예제
//abcde
//출력 결과
//abcde
//edcba

#include <iostream>

char arr[5] = {};

void abc(char* _a, int _b)
{
	if (_b == 4)
	{
		std::cout << _a[_b] << "\n" << _a[_b];
		return;
	}
	std::cout << _a[_b];
	abc(arr, _b + 1);
	std::cout << _a[_b];
}

int main()
{
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	abc(arr, 0);
}

//문제 6번
//a, b 숫자 2개를 입력 받고,
//재귀호출을 이용하여
//a-- > b-- > a 까지 출력 해 주세요.
//ex ) 3 9
//3 4 5 6 7 8 9 8 7 6 5 4 3
//입력 예제
//3 9
//출력 결과
//3 4 5 6 7 8 9 8 7 6 5 4 3

#include <iostream>

void abc(int _a, int _b)
{
	if (_a == _b)
	{
		std::cout << _a;
		return;
	}
	std::cout << _a;
	abc(_a + 1, _b);
	std::cout << _a;
}

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	abc(a, b);
}


//문제 7번
//3 7 4 1 9 4 6 2
//index 숫자 한개를 입력받으세요
//해당 index부터 0번 index까지 출력 한 후
//0번 index부터 입력받은 index까지 출력 하는 프로그램을 작성 해 주세요.
//재귀호출을 이용하여 문제를 풀어주세요.
//ex ) 3
//1 4 7 3 7 4 1
//입력 예제
//3
//출력 결과
//1 4 7 3 7 4 1

#include <iostream>

void abc(int* _a, int _b)
{
	if (_b == 0)
	{
		std::cout << _a[_b];
		return;
	}
	std::cout << _a[_b];
	abc(_a, _b - 1);
	std::cout << _a[_b];
}

int main()
{
	int arr[8] = { 3,7,4,1,9,4,6,2 };
	int a = 0;
	std::cin >> a;
	abc(arr, a);
}
//문제 8번
//숫자 1개를 입력받고
//그 숫자가 0이 될때까지 2로 나누어 주세요
//0이 된 이후에는 return하기 시작하여
//되돌아 가는 값을 출력 하면 됩니다.
//ex) 17
//1 2 4 8 17
//입력 예제
//17
//출력 결과
//1 2 4 8 17

#include <iostream>

void abc(int _a)
{
	if (_a == 0)
		return;
	abc(_a / 2);
	std::cout << _a;
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(a);
}

//문제 9번

#include <iostream>

void BBQ(int _a)
{
	if (_a == 2)
	{
		return;
	}
	BBQ(_a + 1);
}

int main()
{
	BBQ(0);
}

//문제 10번
//한 문장을 입력 받으세요.(최대 10글자)
//그리고 예제와 같이 계단식으로 출력하세요.
//중첩 2중 for문을 이용해서 풀어주세요
//for문을 돌리는 방향 및 순서를 유의 해 주세요
//입력 예제
//78ATQP
//출력 결과
//P
//QP
//TQP
//ATQP
//8ATQP
//78ATQP

#include <iostream>

int main()
{
	char arr[11] = {};
	std::cin >> arr;
	int arrlen = 0;
	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			arrlen = i;
			break;
		}
	}
	int a = 1;
	for (int i = 0; i < arrlen; i++)
	{
		for (int j = arrlen - a; j < arrlen; j++)
		{
			std::cout << arr[j];
		}
		a++;
		std::cout << "\n";
	}
}

//문제 11번
//한 문장을 입력 받으세요.(최대 10글자)
//그리고 문장의 길이 / 2 를 하여 2등분 해주세요.
//예를들어 "ABCDEAB" 문장을 2등분하면 7 / 2 = 3 이므로
//0~2번 index 글자 : ABC
//3~6번 index 글자 : DEAB
//이렇게 2등분 할 수 있습니다.
//이렇게 나누어진 두 문장이 동일한 문장인지 확인하는 프로그램을 작성 해주세요.
//ex1)
//입력: ABCABC
//출력 : 동일한문장
//ex2)
//입력: ABCDEAB
//출력 : 다른문장
//입력 예제
//ABCABC
//출력 결과
//동일한문장

#include <iostream>

char left[6] = {};
char right[6] = {};

void division(char* _a, int _b, int _c)
{
	for (size_t i = 0; i < _c; i++)
	{
		left[i] = _a[i];
	}
	for (size_t i = _c; i < _b; i++)
	{
		right[i - _c] = _a[i];
	}
}

int isSame(char* _a, char* _b, int _c)
{
	for (size_t i = 0; i < _c; i++)
	{
		if (_a[i] != _b[i])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr[11] = {};
	std::cin >> arr;
	int arrlen = 0;
	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			arrlen = i;
			break;
		}
	}
	int div = arrlen / 2;
	division(arr, arrlen, div);
	if (isSame(left, right, div) == 0)
	{
		std::cout << "동일한 문장";
	}
	else
	{
		std::cout << "다른 문장";
	}
}

//문제 12번
//두 비트배열을 입력 받아주세요.
//두 비트배열을 겹쳤을때,
//색칠한 부분이 겹치면, "걸리다" 출력
//겹치는 부분이 없다면, "걸리지않는다" 라고 출력 해주세요.
//(색칠된곳은 1 로 입력을 받고, 색칠안된곳은 0 으로 입력 받으면 됩니다)
//입력 예제
//1 1 1 1
//1 0 0 1
//1 0 0 0
//0 0 1 0
//0 0 0 0
//0 0 0 0
//1 1 1 1
//0 1 0 0
//출력 결과
//걸리다

#include <iostream>

int main()
{
	int arr2d1[4][4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> arr2d1[i][j];
		}
	}
	int arr2d2[4][4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> arr2d2[i][j];
		}
	}
	int flag = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr2d1[i][j] == arr2d2[i][j])
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
		std::cout << "걸리다.";
	}
	else
	{
		std::cout << "걸리지 않는다.";
	}
}

//문제 13번
//문자 1개를 입력받으세요
//ASCII코드값 기준 입력 받은 문자에서 부터 - 3 문자부터 + 3 문자까지 출력하면 됩니다.
//만약 G를 입력받았다면 DEFGHIJ 를 출력하면 됩니다.
//만약 N를 입력받았다면 KLMNOPQ 를 출력하면 됩니다.
//그런데 만약 출력해야 하는 문자가 A 이전이라면, Z를 출력하면 되고,
//만약 출력해야 하는 문자가 Z 다음 문자라면 A를 출력하면 됩니다.
//따라서
//만약 Y를 입력받았다면 VWXYZAB 를 출력하면 되고,
//만약 B를 입력받았다면 YZABCDE를 출력하면 됩니다.
//입력 예제
//Y
//출력 결과
//VWXYZAB

#include <iostream>

int main()
{
	char a = 0;
	std::cin >> a;
	for (int i = a - 3; i <= a + 3; i++)
	{
		if (i < 'A')
		{
			std::cout << (char)(i + 26);
		}
		else if (i > 'Z')
		{
			std::cout << (char)(i - 26);
		}
		else
		{
			std::cout << (char)i;
		}
	}
}

//문제 14번
//숫자 7개를 배열에 입력 받아주세요.
//1층 3번 index까지 출력
//2층 4번 index까지 출력
//3층 5번 index까지 출력
//4층 6번 index까지 출력
//ex)
//3 5 7 1 4 2 8 을 입력 받았다면 아래와 같이 출력 하면 됩니다.
//3 5 7 1
//3 5 7 1 4
//3 5 7 1 4 2
//3 5 7 1 4 2 8
//중첩 2중 for문을 활용해서 출력 해주세요.
//입력 예제
//3 5 7 1 4 2 8
//출력 결과
//3 5 7 1
//3 5 7 1 4
//3 5 7 1 4 2
//3 5 7 1 4 2 8

#include <iostream>

int main()
{
	int arr[7] = {};
	for (size_t i = 0; i < 7; i++)
	{
		std::cin >> arr[i];
	}
	int a = 3;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j <= a; j++)
		{
			std::cout << arr[j];
		}
		std::cout << "\n";
		a++;
	}
}

//문제 15번
//한문장을 입력 받으세요.
//한문장을 아래와 같이 출력 해주세요.
//ex)
//[입력]
//BBQWORLD
//[출력]
//B
//BB
//BBQ
//BBQW
//BBQWO
//BBQWOR
//BBQWORL
//BBQWORLD
//ex)
//[입력]
//GDPK
//[츨력]
//G
//GD
//GDP
//GDPK
//입력 예제
//BBQWORLD
//출력 결과
//B
//BB
//BBQ
//BBQW
//BBQWO
//BBQWOR
//BBQWORL
//BBQWORLD

#include <iostream>

int main()
{
	char arr[256] = {};
	std::cin >> arr;
	int arrlen = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr[i] == '\0')
		{
			arrlen = i;
			break;
		}
	}
	int a = arrlen - 1;
	for (int i = 0; i < arrlen; i++)
	{
		for (int i = 0; i < arrlen - a; i++)
		{
			std::cout << arr[i];
		}
		a--;
		std::cout << "\n";
	}
}

//문제 16번
//정렬되어 있는 네칸짜리 두 배열에 각각 숫자 4개씩 입력 받습니다.
//두배열에 있는 8개 숫자들을 합쳐 하나의 배열에 정렬된 상태로 넣으려고 합니다.
//아래의 알고리즘으로 동작되도록 코딩해주세요.
//입력 예제
//1 3 3 7
//2 3 4 6
//출력 결과
//1 2 3 3 3 4 6 7

#include <iostream>

int main()
{

}

//문제 17번
//3 5 4 2 5
//3 3 3 2 1
//3 2 6 7 8
//9 1 1 3 2
//위 배열을 하드코딩 해주세요.패턴 size를 입력 받으세요.
//만약 2, 2 를 입력 받았다면
//2x2 패턴을 적용 시키면 됩니다.
//그리고 패턴을 적용시키면 합을 구할 수 있습니다.
//ex)  2, 2 size의 패턴을 0, 0에 적용시키면 합은 3 + 5 + 3 + 3 = 14 입니다.
//패턴의 size를 입력받고 패턴을 적용시켜 합을 구하여.max값이 나오는 위치를 출력 해주세요.
//주의 : 입력하실때 y좌표부터 입력받아주세요 ex) 2, 3은 y = 2, x = 3
//입력 예제
//2 2
//출력 결과
//(2, 3)

#include <iostream>

int map[4][5] =
{
	3,5,4,2,5,
	3,3,3,2,1,
	3,2,6,7,8,
	9,1,1,3,2
};

int sum(int _a, int _b, int _maxY, int _maxX)
{
	int sum = 0;
	for (int i = _maxY; i < _a + _maxY; i++)
	{
		for (int j = _maxX; j < _b + _maxX; j++)
		{
			sum += map[i][j];
		}
	}
	return sum;
}

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int max = 0;
	int maxY = 0;
	int maxX = 0;
	for (int i = 0; i < 4 - a + 1; i++)
	{
		for (int j = 0; j < 5 - b + 1; j++)
		{
			if (max < sum(a, b, i, j))
			{
				max = sum(a, b, i, j);
				maxY = i;
				maxX = j;
			}

		}
	}
	std::cout << "(" << maxY << "," << maxX << ")";
}