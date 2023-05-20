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
//크기가 4인 배열 A B 두개를 만들고,
//숫자 8개를 A배열과 B배열에 입력받아주세요
//1중 for문을 돌려
//아래의 규칙대로 result 배열을 완성시켜주세요
//완성된 result 배열을 출력하면 됩니다.
//입력 예제
//3 4 1 2
//5 3 8 9
//출력 결과
//12 12 4 7

#include <iostream>

int main()
{
	int A[4] = {};
	int B[4] = {};
	int result[4] = {};
	for (int i = 0; i < 4; i++)
	{
		std::cin >> A[i];
	}
	for (int i = 3; i >= 0; i--)
	{
		std::cin >> B[i];
	}

	for (int i = 0; i < 4; i++)
	{
		result[i] = A[i] + B[i];
		std::cout << result[i] << " ";
	}
}

//문제 5번
//문장 하나를 입력받고 제거할 index를 입력 받으세요.
//해당하는 index의 글자를 제거하고 출력하세요.
//입력 예제
//gtkbacd
//3
//출력 결과
//gtkacd

#include <iostream>

int main()
{
	char a[256] = {};
	std::cin >> a;
	int deleteidx = 0;
	std::cin >> deleteidx;
	for (size_t i = 0; i < 256; i++)
	{
		if (a[i] != '\0')
		{
			if (i < deleteidx)
			{
				std::cout << a[i];
			}
			else if (deleteidx < i)
			{
				std::cout << a[i];
			}
		}
		else
		{
			break;
		}
	}
}

//문제 6번
//세 문장을 입력받고 이 문장에 M 이라는 글자가 존재하는지 찾아 출력 해 주세요.
//(각 문장당 최대 10글자)
//isExist 함수를 이용하여 찾아 주세요.
//M을 찾으셨다면 M이 존재합니다
//M을 찾지 못하였다면 M이 존재하지 않습니다
//를 출력 해 주세요.
//입력 예제
//NINCODING
//MBC
//WORLD
//출력 결과
//M이 존재합니다

#include <iostream>

void isExist(char* _a, char* _b, char* _c)
{
	for (size_t i = 0; i < 256; i++)
	{
		if (_a[i] == 'M')
		{
			std::cout << "M이 존재합니다.";
			return;
		}
		else if (_b[i] == 'M')
		{
			std::cout << "M이 존재합니다.";
			return;
		}
		else if (_c[i] == 'M')
		{
			std::cout << "M이 존재합니다.";
			return;
		}
		else
		{
			std::cout << "M이 존재하지 않습니다.";
			return;
		}
	}
}

int main()
{
	char a[256] = {};
	std::cin >> a;
	char b[256] = {};
	std::cin >> b;
	char c[256] = {};
	std::cin >> c;
	isExist(a, b, c);
}

//문제 7번
//아래 배열을 하드코딩 해 주세요
//M T	K C
//그리고 찾을 문자를 하나 입력받아주세요
//Flag기법을 쓰지않고, isExist함수를 써서
//입력받은 문자가 위 배열에 존재하는지 출력 해 주세요
//"발견" 또는 "미발견"을 출력하시면 됩니다
//입력 예제
//T
//출력 결과
//발견

#include <iostream>

void isExist(char* _a, char _b)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_a[i] == _b)
		{
			std::cout << "발견";
			return;
		}
	}
	std::cout << "미발견";
}

int main()
{
	char arr[4] = { 'M','T','K','C' };
	char a = 0;
	std::cin >> a;
	isExist(arr, a);
}

//문제 8번
//아래 배열을 하드코딩 하고, 문자 2개를 입력받아주세요
//G	K T
//P	A C
//입력받은 문자 2개가 모두 배열안에 존재한다면 "대발견" 출력,
//문자 둘 중 하나만 발견된다면 "중발견" 출력,
//아무 문자도 없다면 "미발견" 출력 해 주세요
//isExist 함수를 써서 문제를 풀어주세요.
//입력 예제
//G A
//출력 결과
//대발견

#include <iostream>

void isExist(char(*_a)[3], char _b, char _c)
{
	int b = 0;
	int c = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_a[i][j] == _b)
			{
				b = 1;
			}
			else if (_a[i][j] == _c)
			{
				c = 1;
			}
		}
	}
	if (b == 1 && c == 1)
	{
		std::cout << "대발견";
		return;
	}
	else if (b == 1 || c == 1)
	{
		std::cout << "중발견";
		return;
	}
	else
	{
		std::cout << "미발견";
		return;
	}
}

int main()
{
	char arr2d[2][3] =
	{
		{'G','K','T'},
		{'P','A','C'}
	};
	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	isExist(arr2d, a, b);
}
//문제 9번
//숫자 6개를 배열에 입력받아 주세요.
//1차원 배열에 1중 for문을 다음과 같은 규칙 돌려주세요.
//반복적으로 누적합을 아래와 같이 구하면 됩니다.
//최종적으로 완성된 배열을 출력 해 주세요
//입력 예제
//3 4 1 4 2 6
//출력 결과
//3 7 8 12 14 20

#include <iostream>

int main()
{
	int arr[6] = {};
	int sum = 0;
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 6; i++)
	{
		arr[i] = arr[i] + sum;
		sum = arr[i];
		std::cout << arr[i] << " ";
	}
}

//문제 10번
//숫자 3개를 변수 a, b, c에 입력 받으세요
//a ~b까지 숫자를 c번 반복해서 출력 해 주세요
//입력 예제
//2 5 3
//출력 결과
//2 3 4 5
//2 3 4 5
//2 3 4 5

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int c = 0;
	std::cin >> c;
	int d = 0;
	d = a;
	for (size_t i = 0; i < c; i++)
	{
		for (size_t i = 1; i < b; i++)
		{
			std::cout << a << " ";
			a++;
		}
		std::cout << "\n";
		a = d;
	}
}

//문제 11번
//아래와 같이 'A'에서부터 알파벳 순서대로 2차 배열에 값을 채워주세요
//(2중 for문을 이용해서 값을 채워주세요)
//그리고 좌표를 입력 받고, 좌표에 해당하는 값을 출력 해 주세요
//[힌트] 아래와 같이 for문을 돌리면 됩니다.
//아래와 같이 for를 돌리면 되는 이유를 생각해보세요
//for (x = 2; x >= 0; x--)
//for (y = 5; y >= 0; y--)
//입력 예제
//0 2
//출력 결과
//F

#include <iostream>

int main()
{
	char arr[6][3] = {};
	char A = 'A';
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 5; j >= 0; j--)
		{
			arr[j][i] = A;
			A++;
		}
	}
	int Y = 0;
	std::cin >> Y;
	int X = 0;
	std::cin >> X;
	std::cout << arr[Y][X];
}

//문제 12번
//숫자 6개를 입력받고, 2x3배열에 입력받은 숫자로 값을 채워주세요
//만약 1, 3, 5, 2, 6, -5를 입력 받았다면, 아래와 같이 값을 채우면 됩니다.
//그리고
//max의 좌표를 구해주는 함수와
//min의 좌표를 구해주는 함수를 각각 만들고,
//Max와 Min의 좌표를 출력 해주세요.
//입력 예제
//1 3 5 2 6 - 5
//출력 결과
//(1, 1)
//(1, 2)

#include <iostream>

void MAX(int(*_a)[3], int* _b, int* _c)
{
	int max = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_a[i][j] > max)
			{
				max = _a[i][j];
			}
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_a[i][j] == max)
			{
				*_b = i;
				*_c = j;
			}
		}
	}
}

void MIN(int(*_a)[3], int* _b, int* _c)
{
	int MIN = 987654321;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_a[i][j] < MIN)
			{
				MIN = _a[i][j];
			}
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_a[i][j] == MIN)
			{
				*_b = i;
				*_c = j;
			}
		}
	}
}

int main()
{
	int arr2d[2][3] = {};
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> arr2d[i][j];
		}
	}
	int X = 0;
	int* pX = &X;
	int Y = 0;
	int* pY = &Y;
	MAX(arr2d, &Y, &X);
	std::cout << "(" << Y << "," << X << ")" << "\n";
	MIN(arr2d, &Y, &X);
	std::cout << "(" << Y << "," << X << ")" << "\n";
}

//문제 13번
//숫자 2개를 먼저 index 0과 index 1에 입력받으세요
//그리고 아래 규칙처럼 총 6칸에 숫자를 모두 채운 후
//최종적으로 나오는 숫자를 출력 해 주세요
//입력 예제
//4 2
//출력 결과
//2048

#include <iostream>

int main()
{
	int index0 = 0;
	std::cin >> index0;
	int index1 = 0;
	std::cin >> index1;
	int arr[6] = {};
	arr[0] = index0;
	arr[1] = index1;
	for (size_t i = 2; i < 6; i++)
	{
		arr[i] = arr[i - 2] * arr[i - 1];
	}
	std::cout << arr[5];
}

//문제 14번
//문장 하나를 입력받으세요
//그리고, 각각의 변수 a, b에 문자를 입력 받아주세요
//문장에 입력받은 a의 문자값이 있다면, b의 문자값으로 바꾸어주세요.
//입력 예제
//goodbook
//o
//z
//출력 결과
//gzzdbzzk

#include <iostream>

int main()
{
	char arr[256] = {};
	std::cin >> arr;
	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr[i] == a)
		{
			arr[i] = b;
		}
	}
	for (size_t i = 0; i < 256; i++)
	{
		std::cout << arr[i];
	}
}

//문제 15번
//대문자로 구성된 한 문장을 입력 받으세요. (최대 10글자)
//한 문장에서 사전순으로 가장 뒤에 나오는 글자의 index와
//가장 앞에 나오는 글자의 index를 찾아 출력 해 주세요.
//max, min 함수를 이용해 문제를 풀어주세요.
//(단, 같은 글자는 입력하지 않습니다.)
//예로들어 FEBIZ를 입력한다면
//max에 해당하는 알파벳은 Z 이고, 4번 index에 있습니다.
//min에 해당하는 알파벳은 B 이고, 2번 index에 있습니다.
//출력결과는
//4
//2
//입력 예제
//ABCDE
//출력 결과
//4
//0

#include <iostream>

int main()
{
	char arr[11] = {};
	std::cin >> arr;
	int max = 0;
	int min = 987654321;
	for (size_t i = 0; i < 11; i++)
	{
		if (arr[i] > max)
		{
			max = i;
		}
		else if (arr[i] < min)
		{
			min = i;
		}
	}
	std::cout << max << "\n";
	std::cout << min;
}

//문제 16번
//7x4 배열을 만들고, 2중 for문을 돌려 아래 그림과 같이 값을 채워주세요.
//그리고 숫자 3개를 입력 받습니다.
//각 숫자에 해당하는 Line을 0으로 바꾸어주세요.
//만약 1, 2, 5를 입력 받았다면
//1번Line, 2번Line, 5번Line을 0으로 채워주고 출력하면 됩니다.
//입력 예제
//1 2 5
//출력 결과
//1 2 3 4
//0 0 0 0
//0 0 0 0
//13 14 15 16
//17 18 19 20
//0 0 0 0
//25 26 27 28

#include <iostream>

int main()
{
	int a = 1;
	int arr2d[7][4] = {};
	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			arr2d[i][j] = a;
			a++;
		}
	}
	int b = 0;
	std::cin >> b;
	int c = 0;
	std::cin >> c;
	int d = 0;
	std::cin >> d;
	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (i == b || i == c || i == d)
			{
				arr2d[i][j] = 0;
			}
		}
	}
	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 17번
//두 문장을 아래와 같이 하드코딩 해 주세요.
//A 7 9 T K Q
//M I N C O D
//두 글자를 입력받고 두 글자의 존재 여부를 출력 해 주세요.
//isExist 함수를 사용하여 문제를 풀어 주세요.
//A와 Z를 입력하였다면
//A : 존재
//Z : 없음
//을 출력 해 주세요.
//입력 예제
//A Z
//출력 결과
//A : 존재
//Z : 없음

#include <iostream>

void isExist(char(*_a)[6], char _b, char _c, int* _d, int* _e)
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (_a[i][j] == _b)
			{
				*_d = 1;
			}
			if (_a[i][j] == _c)
			{
				*_e = 1;
			}
		}
	}
}

int main()
{
	char arr2d[2][6] =
	{
		{'A','7','9','T','K','Q'},
		{'M','I','N','C','O','D'}
	};
	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	int C = 0;
	int* pC = &C;
	int D = 0;
	int* pD = &D;
	isExist(arr2d, a, b, &C, &D);
	if (C == 1)
	{
		std::cout << a << " : 존재" << "\n";
	}
	else
	{
		std::cout << a << " : 없음" << "\n";
	}
	if (D == 1)
	{
		std::cout << b << " : 존재";
	}
	else
	{
		std::cout << b << " : 없음";
	}
}

//문제 18번
//숫자 2개와 문자 1개를 입력 받으세요
//그리고 아래 예제에서 규칙을 찾아 출력 해 주세요
//(3중 for문을 써서 문제를 풀어주세요)
//ex) 만약 2 3 A 를 입력 받았다면
//AAA
//AAA
//AAA
//AAA
//이렇게 출력하시면 됩니다
//ex) 만약 3 5 B 를 입력 받았다면
//BBBBB
//BBBBB
//BBBBB
//BBBBB
//BBBBB
//BBBBB
//이렇게 출력하시면 됩니다
//입력 예제
//2 4 R
//출력 결과
//RRRR
//RRRR
//
//RRRR
//RRRR

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	char c = 0;
	std::cin >> c;

	for (size_t k = 0; k < 2; k++)
	{
		for (size_t i = 0; i < a; i++)
		{
			for (size_t j = 0; j < b; j++)
			{
				std::cout << c;
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}
}