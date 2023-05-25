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

int main()
{

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

//문제 13번

#include <iostream>

int main()
{

}

//문제 14번

#include <iostream>

int main()
{

}

//문제 15번

#include <iostream>

int main()
{

}

//문제 16번

#include <iostream>

int main()
{

}

//문제 17번

#include <iostream>

int main()
{

}