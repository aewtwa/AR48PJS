//문제 1번
//숫자 1개를 입력받으세요
//짝수를 입력 받았다면 아래와 같이 2차 배열에 값을 채워주세요
//(1중 for문을 사용하세요)
//1
// 2
//  3
//   4
//그 숫자가 홀수면 다음과 같이 값을 채워주세요
//(1중 for문을 사용 해 주세요)
//   1
//  2
// 3
//4
//이렇게 채운 값을 2중 for문을 돌려 모두 출력 해 주세요
//[힌트] 값을 채워야 하는 좌표를 먼저 메모장에 써 보세요
//(0, 0) > (1, 1) > (2, 2) > (3, 3)
//그러면 규칙이 보입니다.x, y변수를 잘 활용해서 문제를 풀어보세요
//입력 예시
//2
//출력 예시
//1 0 0 0
//0 2 0 0
//0 0 3 0
//0 0 0 4

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int mod = a % 2;
	int arr2d[4][4] = {};
	int b = 1;
	int x = 3;
	int y = 0;
	if (mod == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr2d[i][i] = b;
			b++;
		}
	}
	b = 1;
	if (mod == 1)
	{
		for (int i = 0; i < 4; i++)
		{
			arr2d[y][x] = b;
			x--;
			y++;
			b++;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 2번
//main함수에서는 getChar를 호출하고,
//getChar에서 return받은 값을 출력 하면 됩니다.
//getChar에서는
//문자 2개를 입력 받고, 아스키코드값이 더 큰 문자를 return하면 됩니다.
//입력 예시
//A E
//출력 예시
//E

#include <iostream>

char getChar()
{
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	std::cout << getChar();;
}

//문제 3번
//번호 순서대로 배열에 값을 채우려 합니다.
//숫자 1개를 입력 받아주세요
//입력받은 숫자를 5으로 나누었을때 나머지 값이 1이라면
//9	6 3
//8	5 2
//7	4 1
//입력받은 숫자를 5로 나누었을때 나머지 값이 2이라면
//7	8 9
//4	5 6
//1	2 3
//위에 두 경우가 아니라면
//10 13	16
//11 14	17
//12 15	18
//이렇게 값을 채우고
//값을 채운 2차배열을 출력 해 주세요.
//입력 예시
//10
//출력 예시
//10 13 16
//11 14 17
//12 15 18

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int mod = 0;
	mod = a % 5;
	int arr2d[3][3] = {};
	int x = 0;
	int y = 0;
	int b = 9;
	if (mod == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[y][x] = b;
				y++;
				b--;
			}
			y = 0;
			x++;
		}
	}
	else if (mod == 2)
	{
		x = 2;
		y = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[y][x] = b;
				x--;
				b--;
			}
			x = 2;
			y++;
		}
	}
	else
	{
		x = 0;
		y = 0;
		b = 10;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[y][x] = b;
				y++;
				b++;
			}
			y = 0;
			x++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
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

//문제 19번

#include <iostream>

int main()
{

}

//문제 20번

#include <iostream>

int main()
{

}

//문제 21번

#include <iostream>

int main()
{

}