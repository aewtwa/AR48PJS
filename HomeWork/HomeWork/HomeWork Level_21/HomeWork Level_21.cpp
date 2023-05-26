//문제 1번

#include <iostream>

void abc(int _a)
{
	if (_a == 1)
	{
		return;
	}
	abc(_a + 1);
	abc(_a + 1);
	abc(_a + 1);
}

int main()
{
	abc(0);
}


//문제 2번
//운영자의 ID와 PASSWORD는
//"qlqlaqkq"
//"tkaruqtkf" 입니다. (비빔밥 / 삼겹살)
//ID와 PASSWORD를 입력받고,
//운영자 ID와 PASSWORD가 정확히 일치한다면, "LOGIN"을 출력 해 주세요
//아니면 "INVALID"를 출력 해 주세요
//(cstring library를 사용 해 주세요)
//입력 예제
//qlqlaqkq
//tkaruqtkf
//출력 결과
//LOGIN

#include <iostream>
#include <string.h>

int main()
{
	char ID[9] = "qlqlaqkq";
	char PASSWORD[10] = "tkaruqtkf";
	char a[9] = {};
	std::cin >> a;
	char b[10] = {};
	std::cin >> b;
	if (strcmp(ID, a) == 0 && strcmp(PASSWORD, b) == 0)
	{
		std::cout << "LOGIN";
	}
	else
	{
		std::cout << "INVALID";
	}
}

//문제 3번
//level과 branch를 입력 받고 그만큼 재귀호출을 해 주세요
//(출력결과 없음)
//ex)
//level = 2
//branch = 3
//입력 예제
//2
//3

#include <iostream>

void abc(int _a, int _b)
{
	if (_a == 0)
	{
		return;
	}
	for (int i = 0; i < _b; i++)
	{
		abc(_a - 1, _b);
	}
}


int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	abc(a, b);
}

//문제 4번
//숫자 1개를 입력받고,
//입력받은 Level 까지 재귀함수가 동작되도록 코딩해주세요
//함수가 시작될 때 Level을 출력하면 됩니다.
//ex1)
//입력 : 2
//출력결과 : 0122122
//ex2)
//입력 : 3
//출력결과: 012332331233233
//입력 예제
//2
//출력 결과
//0122122

#include <iostream>

void abc(int _a, int _b)
{
	if (_a == 0)
	{
		std::cout << _b - _a;
		return;
	}
	std::cout << _b - _a;
	abc(_a - 1, _b);
	abc(_a - 1, _b);
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(a, a);
}

//문제 5번
//세 문장을 2차원 배열에 입력 받으세요.(최대 10글자)
//가장 긴문장과 첫 번째로 입력 받은 문장을 SWAP 한 후,
//배열에 있는 문장을 모두 출력 해주세요.
//(strlen과 strcpy를 사용하면 됩니다)
//입력 예제
//KFC
//ABCDEFG
//BBQ
//출력 결과
//ABCDEFG
//KFC
//BBQ

#include <iostream>

int main()
{
	char arr2d[3][11] = {};
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr2d[i];
	}
	char c[11] = {};
	int max = 0;
	int maxi = 0;
	for (int i = 0; i < 3; i++)
	{
		if (strlen(arr2d[i]) > max)
		{
			max = strlen(arr2d[i]);
			maxi = i;
		}
	}
	strcpy_s(c, arr2d[0]);
	strcpy_s(arr2d[0], arr2d[maxi]);
	strcpy_s(arr2d[maxi], c);
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << arr2d[i];
		std::cout << "\n";
	}
}

//문제 6번
//branch와 Level을 입력받고 재귀 함수가 호출되는 횟수를 counting해서 출력 해주세요.
//예로들어 3 2 을 입력받으면 재귀함수는 총 13회 호출 됩니다.
//ex)
//3              2
//(branch)(level)
//[힌트]
//전역변수를 두고 함수를 호출할 때마다 counting 해주면 됩니다.
//입력 예제
//4 3
//출력 결과
//85

#include <iostream>

int count = 0;

void abc(int _a, int _b)
{
	if (_b == 0)
	{
		count++;
		return;
	}
	count++;
	for (int i = 0; i < _a; i++)
	{
		abc(_a, _b - 1);
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	abc(a, b);
	std::cout << count;
}

//문제 7번
//한문장을 입력받고 글자수를 구해주세요.
//그리고 재귀호출을 이용해 다음과 같이 출력 해주세요.
//만약 ABCDE를 입력받았다면 5글자 이므로 5 4 3 2 1 2 3 4 5 출력
//만약 BBQ를 입력받았다면 3글자 이므로 3 2 1 2 3 을 출력 하면 됩니다.
//(문장의 내용은 중요하지 않습니다.글자수가 중요합니다.)
//입력 예제
//ABCDE
//출력 결과
//5 4 3 2 1 2 3 4 5

#include <iostream>

void abc(int _a)
{
	if (_a == 1)
	{
		std::cout << _a;
		return;
	}
	std::cout << _a;
	abc(_a - 1);
	std::cout << _a;
}

int main()
{
	char a[256] = {};
	std::cin >> a;
	int b = strlen(a);
	abc(b);
}
//문제 8번
//생일선물로 마우스를 직접 만들고,
//내 연인에게 선물을 주며 고백하려 합니다.
//마우스는 현재(y, x) = (5, 5)에 위치합니다.
//up / down / left / right / click 명령어들이 존재합니다.
//명령어 수(n)와 명령어들을 입력받고 명령어 대로 수행 해주세요.
//[명령어]
//up : y축으로 한칸 - 1
//down : y축으로 한칸 + 1
//left : x축으로 한칸 - 1
//right : x축으로 한칸 + 1
//click : 현재 좌표 출력
//[입력예제]
//4 명령어의 수
//up
//click 출력
//right
//click 출력
//[출력결과]
//4, 5
//4, 6
//입력 예제
//3
//down
//down
//click
//출력 결과
//7, 5

#include <iostream>

int main()
{
	int y = 5;
	int x = 5;
	int a = 0;
	std::cin >> a;
	char** b = new char* [a];
	for (int i = 0; i < a; i++)
	{
		b[i] = new char[256];
	}
	for (int i = 0; i < a; i++)
	{
		std::cin >> b[i];
	}
	char up[3] = "up";
	char down[5] = "down";
	char left[5] = "left";
	char right[6] = "right";
	char click[6] = "click";
	for (int i = 0; i < a; i++)
	{
		if (strcmp(up, b[i]) == 0)
		{
			y -= 1;
		}
		else if (strcmp(down, b[i]) == 0)
		{
			y += 1;
		}
		else if (strcmp(left, b[i]) == 0)
		{
			x -= 1;
		}
		else if (strcmp(right, b[i]) == 0)
		{
			x += 1;
		}
		else if (strcmp(click, b[i]) == 0)
		{
			std::cout << y << " , " << x << "\n";
		}
	}
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