//문제 1번
//세 문장을 2차 배열(3 x 10)에 입력 받아주세요
//각 문장의 맨 마지막 글자들을 출력하시면 됩니다
//입력 예제
//MINCODING
//APPLE
//SKTOWN
//출력 결과
//GEN

#include <iostream>

int main()
{
	char arr2d[3][10] = {};
	int last[3] = {};
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr2d[i];
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr2d[i][j] == '\0')
			{
				last[i] = j - 1;
				break;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr2d[i][last[i]];
	}
}

//문제 2번
//아래 배열을 하드코딩 해주세요.
//A B K T
//K F C F
//B B Q Q
//T P Z F
//문자 2개를 입력 받아주세요.
//그리고 입력받은 문자들이 배열에 몇개 존재하는지 출력해주세요.
//만약 B, F를 입력 받았다면,
//B : 3개, F : 3개 총 6개이므로 6을 출력하면 됩니다.
//입력 예제
//B F
//출력 결과
//6

#include <iostream>

int main()
{
	char arr2d[4][5] =
	{
		"ABKT",
		"KFCF",
		"BBQQ",
		"TPZF"
	};
	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	int count = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr2d[i][j] == a)
			{
				count++;
			}
			else if (arr2d[i][j] == b)
			{
				count++;
			}
		}
	}
	std::cout << count;
}

//문제 3번
//한 문장과 숫자 하나를 입력 받으세요(입력 문장은 최대 5글자)
//그 숫자에 해당하는 배열 index에다가 문자 "A"를 추가한 후 출력 해 주세요
//입력 예제
//show
//2
//출력 결과
//shAow

#include <iostream>

int main()
{
	char arr[256] = {};
	std::cin >> arr;
	int a = 0;
	std::cin >> a;
	int arrlen = 0;
	for (int i = 0; i < 256; i++)
	{
		if (arr[i] == '\0')
		{
			arrlen = i;
			break;
		}
	}
	arr[arrlen] = 'A';
	for (int i = arrlen; i > a; i--)
	{
		int c = arr[i - 1];
		arr[i - 1] = arr[i];
		arr[i] = c;
	}
	for (int i = 0; i < arrlen + 1; i++)
	{
		std::cout << arr[i];
	}
}
//문제 4번

#include <iostream>

int main()
{

}

//문제 5번

#include <iostream>

int main()
{

}

//문제 6번

#include <iostream>

int main()
{

}

//문제 7번

#include <iostream>

int main()
{

}

//문제 8번

#include <iostream>

int main()
{

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

//문제 18번

#include <iostream>

int main()
{

}