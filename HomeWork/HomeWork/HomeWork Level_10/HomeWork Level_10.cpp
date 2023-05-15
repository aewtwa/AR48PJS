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
	int b = 0;
	if (mod == 1)
	{
		b = 9;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[j][i] = b;
				b--;
			}
		}
	}
	else if (mod == 2)
	{
		b = 9;
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr2d[i][j] = b;
				b--;
			}
		}
	}
	else
	{
		b = 10;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[j][i] = b;
				b++;
			}
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
//아래 그림과 같이 프로그램을 작성 해 주세요
//main함수에서는 even(a / b); 또는 odd(a / b); 를 호출하면 됩니다.
//입력 예시
//5 2
//출력 예시
//4
//7

#include <iostream>

void printData(int _a)
{
	std::cout << _a << "\n";
}

void even(int _a)
{
	printData(_a * 2);
}

void odd(int _a)
{
	printData(_a - 10);
}

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int share = 0;
	share = a / b;
	int mod = 0;
	mod = share % 2;
	int Plus = 0;
	Plus = a + b;
	if (mod == 0)
	{
		even(share);
		printData(Plus);
	}
	if (mod == 1)
	{
		odd(share);
		printData(Plus);
	}
}

//문제 5번
//main 함수에서 GOP 함수와 SUM 함수를 호출 해 주세요.
//GOP 함수에서는 숫자 2개를 입력 받고 곱을 return 해 주세요.
//SUM 함수에서는 숫자 2개를 입력 받고 합을 return 해 주세요.
//main 함수에서는 GOP 함수의 return값과 SUM 함수의 return 값을 비교 해 주세요
//GOP 함수의 return 값이 크다면 "GOP>SUM" 출력
//SUM 함수의 return 값이 크다면 "GOP<SUM" 출력
//두 return 값이 같다면 "GOP==SUM" 출력 해 주세요
//입력 예시
//3 6
//11 7
//출력 예시
//GOP == SUM

#include <iostream>

int GOP()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	return a * b;
}

int SUM()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	return a + b;
}

int main()
{
	int a = 0;
	int b = 0;
	a = GOP();
	b = SUM();
	if (a > b)
	{
		std::cout << "GOP > SUM";
	}
	else if (a < b)
	{
		std::cout << "GOP < SUM";
	}
	else if (a == b)
	{
		std::cout << "GOP = SUM";
	}
}

//문제 6번
//아래의 2차원 배열을 2중 for문을 이용하여
//번호 순서대로 채우고, 출력하세요.
//입력 값은 없습니다.
//13 9 5 1
//14 10 6 2
//15 11 7 3
//16 12 8 4
//출력 예시
//13 9 5 1
//14 10 6 2
//15 11 7 3
//16 12 8 4

#include <iostream>

int main()
{
	int arr2d[4][4] = {};
	int a = 1;
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			arr2d[j][i] = a;
			a++;
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

//문제 7번
//2중 for문을 돌려 번호 순서대로 값을 채워주세요
//12 11	10 9
// 8  7  6 5
// 4  3  2 1
//숫자 1개를 입력받으세요
//그 숫자에 해당하는 열에 값을 0으로 채워주세요
//그리고 그 결과를 출력 해 주세요
//ex) 만약 숫자2를 입력받았다면
//아래와 같이 2번 열을 모두 0으로 채우시면 됩니다.
//12 11	0 9
// 8  7 0 5
// 4  3 0 1
//ex) 만약 숫자 0을 입력받았다면
//아래와 같이 0번 열을 모두 0으로 채우면 됩니다.
//0 11 10 9
//0	 7  6 5
//0	 3  2 1
//입력 예시
//2
//출력 예시
//12 11 0 9
// 8  7 0 5
// 4  3 0 1

#include <iostream>

int main()
{
	int arr2d[3][4] = {};
	int b = 1;
	int a;
	std::cin >> a;
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 3; j >= 0; j--)
		{
			if (j != a)
			{
				arr2d[i][j] = b;
			}
			else if (j == a)
			{
				arr2d[i][j] = 0;
			}
			b++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 8번
//2차배열(4X4)에 숫자들을 입력 받아주세요.
//다시 이중 for문을 돌려, 배열 안에 있는 숫자가
//짝수이면 # 을,
//홀수이면 @ 을
//0이면 !를 출력하는 프로그램을 작성 해 주세요.
//예를 들어
//3 8 10 2
//3 5 8 7
//2 8 6 4
//1 3 0 9
//로 입력했다면, 아래와 같이 출력하면 됩니다.
//@###
//@@#@
//####
//@@!@
//입력 예시
//3 8 10 2
//3 5 8 7
//2 8 6 4
//1 3 0 9
//출력 예시
//@###
//@@#@
//####
//@@!@

#include <iostream>

int main()
{
	int arr2d[4][4] = {};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> arr2d[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int mod = arr2d[i][j] % 2;
			if (arr2d[i][j] == 0)
			{
				arr2d[i][j] = '!';
			}
			else if (mod == 0)
			{
				arr2d[i][j] = '#';
			}
			else if (mod == 1)
			{
				arr2d[i][j] = '@';
			}
			std::cout << (char)(arr2d[i][j]);
		}
		std::cout << "\n";
	}
}

//문제 9번
//전역변수를 사용하지 않는 문제입니다
//숫자 하나를 입력받으면 그 숫자부터 1까지 출력하는 문제입니다
//아래와 같이 함수를 만들어서 풀어주세요
//입력 예시
//5
//출력 예시
//5 4 3 2 1

#include <iostream>

int input()
{
	int a;
	std::cin >> a;
	return a;
}

void CountDown(int _a)
{
	for (int i = _a; i >= 1; i--)
	{
		std::cout << i;
	}
}

int main()
{
	CountDown(input());
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