//문제 1번
//Level2에 도달했을 때마다, path를 모두 출력 해주세요.
//출력 결과
//AA
//AB
//AC
//BA
//BB
//BC
//CA
//CB
//CC

#include <iostream>

int count = 0;
char b[9][3] =
{
	"AA",
	"AB",
	"AC",
	"BA",
	"BB",
	"BC",
	"CA",
	"CB",
	"CC"
};

void abc(int _a)
{
	if (_a == 2)
	{
		std::cout << b[count] << "\n";
		count++;
		return;
	}
	abc(_a + 1);
	abc(_a + 1);
	abc(_a + 1);
}

int main()
{
	int a = 0;
	abc(a);
}

//문제 2번
//<cstring> strcmp를 사용해서 문제를 풀어주세요.
//세문장을 입력 받으세요. (최대글자는 10글자)
//세문장이 모두 같으면 "WOW"
//두문장이 같으면 "GOOD"
//모두 다르면 "BAD" 를 출력 해주세요.
//입력 예제
//abcd
//abcd
//abcd
//출력 결과
//WOW

#include <iostream>
#include <string.h>

int main()
{
	char str[3][11] = {};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> str[i];
	}
	int count = 0;
	if (strcmp(str[0], str[1]) == 0 && strcmp(str[1], str[2]) == 0)
	{
		std::cout << "WOW";
	}
	else if (strcmp(str[0], str[1]) == 0 || strcmp(str[1], str[2]) == 0 || strcmp(str[0], str[2]) == 0)
	{
		std::cout << "GOOD";
	}
	else
	{
		std::cout << "BAD";
	}
}

//문제 3번
//다음과 같은 구조로 Level을 입력받고
//입력받은 Level에 도달했을 때
//path를 출력 해주세요.
//(2 <= LEVEL <= 4)
//입력 예제
//2
//출력 결과
//BB
//BG
//BT
//BK
//GB
//GG
//GT
//GK
//TB
//TG
//TT
//TK
//KB
//KG
//KT
//KK

#include <iostream>

char arr[4] = { '1','2','3','4' };
char path[8] = {};

void abc(int _a, int _Level)
{
	if (_a == 4)
	{
		return;
	}
	if (_a == _Level)
	{
		std::cout << path << "\n";
	}
	for (size_t i = 0; i < 4; i++)
	{
		path[_a] = arr[i];
		abc(_a + 1, _Level);
		path[_a] = '\0';
	}
}

int main()
{
	int Level = 0;
	std::cin >> Level;
	abc(0, Level);
}

//문제 4번
//up 또는 down 문장을 5개 입력 받으세요.
//주인공이 1층에 서있는데
//up이 입력으로 들어오면 2층으로 가고(up 입력시 한층 올라감)
//down이 들어오면 B1층으로 갑니다. (down 입력시 한층 내려감)
//up / down 을 5회 입력 받았을 때 주인공의 위치를 출력 하세요.
//ex)
//입력:
//up
//down
//down
//down
//down
//출력 : B3
//입력 예제
//up
//down
//down
//down
//down
//출력 결과
//B3

#include <iostream>

void floor(char(*_a), int* _b)
{
	if (strcmp(_a, "UP") == 0)
	{
		if (*_b == -1)
		{
			*_b = 1;
		}
		else
		{
			(*_b)++;
		}
	}
	else if (strcmp(_a, "DOWN") == 0)
	{
		if (*_b == 1)
		{
			*_b = -1;
		}
		else
		{
			(*_b)--;
		}
	}

}

int main()
{
	int isfloor = 1;
	char str[5][5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> str[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		floor(str[i], &isfloor);
	}
	if (isfloor > 0)
	{
		std::cout << isfloor << "층";
	}
	else
	{
		std::cout << "B" << -isfloor << "층";
	}
}

//문제 5번
//1 ~n 명의 친구가 4일치 청소당번 순서를 정하려고 합니다.
//첫번째 친구가 4일치 모두 청소할 수도 있고, 다양한 경우가 발생합니다.
//ex) n = 3명일때 가능한 청소스케쥴
//1111 / 1112 / 1113 / 1121 / 1122 / ... / 3332 / 3333
//n명에 대해, 4일 동안의 청소스케줄을 모두 출력하는 프로그램을 작성해주세요.
//입력 예제
//2
//출력 결과
//1111
//1112
//1121
//1122
//1211
//1212
//1221
//1222
//2111
//2112
//2121
//2122
//2211
//2212
//2221
//2222

#include <iostream>
char path[8] = {};
char arr[2] = { '1','2' };
void abc(int _b, int _a)
{
	if (_b == 4)
	{
		std::cout << path;
		std::cout << "\n";
		return;
	}
	for (size_t i = 0; i < _a; i++)
	{
		path[_b] = arr[i];
		abc(_b + 1, _a);
		path[_b] = '\0';
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(0, a);
}

//문제 6번
//string 1차원 배열에 네문장을 입력 받으세요.
//가장 긴 문장과 가장 짧은 문장이 몇번째 index에 있는 문장인지 index를 출력 해주세요
//ex)
//[입력]
//apple
//microsoft
//google
//xiaomi
//[출력]
//긴문장:1 (microsoft)
//짧은문장 : 0 (apple)
//[hint]
//문장의 길이를 구하는 방법
//string a = "mincoding";
//int len = a.length();
//입력 예제
//apple
//microsoft
//google
//xiaomi
//출력 결과
//긴문장 : 1
//짧은문장 : 0

#include <iostream>

int main()
{
	char str[4][256] = {};
	for (int i = 0; i < 4; i++)
	{
		std::cin >> str[i];
	}
	int len[4] = {};
	for (int i = 0; i < 4; i++)
	{
		len[i] = strlen(str[i]);
	}
	int max = 0;
	int min = 987654321;
	int maxidx = 0;
	int minidx = 0;
	for (int i = 0; i < 4; i++)
	{
		if (max < len[i])
		{
			max = len[i];
			maxidx = i;
		}
		if (min > len[i])
		{
			min = len[i];
			minidx = i;
		}
	}
	std::cout << "긴 문장 : " << maxidx << "\n";
	std::cout << "짧은 문장 : " << minidx;
}

//문제 7번
//위와 같은 트리모양으로 재귀호출 프로그램을 만드려 합니다.
//Level 3에 도착했을때 입력 받은 PATH가 몇번째로 만들어지는지 출력 해주세요.
//ex)
//AAA = > 1번째
//입력 예제
//AAD
//출력 결과
//4번째

#include <iostream>
char path[8] = {};
char arr[4] = { 'A','B','C','D' };
int count = 0;
void abc(int _a, char* _b)
{
	if (_a == 3)
	{
		count++;
		if (strcmp(path, _b) == 0)
		{
			std::cout << count << "번째";
		}
		return;
	}
	for (size_t i = 0; i < 4; i++)
	{
		path[_a] = arr[i];
		abc(_a + 1, _b);
		path[_a] = 0;
	}
}

int main()
{
	char b[256] = {};
	std::cin >> b;
	abc(0, b);
}

//문제 8번
//아래와 같이 3차 배열을 하드코딩 해 주세요
//숫자 한개를 입력 받고, 입력받은 위치의 MAX와 MIN값을 출력 해 주세요
//ex) 만약 0을 입력받았다면[0]에 해당하는 곳에서 MAX값과 MIN값을 출력 하면 됩니다
//MAX = 5
//MIN = 1
//입력 예제
//1
//출력 결과
//MAX = 6
//MIN = 2

#include <iostream>

int main()
{
	int arr3d[3][2][2] =
	{
		2,4,
		1,5,
			2,3,
			3,6,
				7,3,
				1,5
	};
	int a = 0;
	std::cin >> a;
	int max = 0;
	int min = 987654321;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (max < arr3d[a][i][j])
			{
				max = arr3d[a][i][j];
			}
			if (min > arr3d[a][i][j])
			{
				min = arr3d[a][i][j];
			}
		}
	}
	std::cout << "MAX = " << max << "\n";
	std::cout << "MIN = " << min;
}

//문제 9번
//암호표에 암호문들이 있습니다.
//JASON
//DR.tom
//EXEXI
//GK12P
//POW
//암호문을 입력 받아주세요.
//암호가 맞으면 "암호해제" 라고 출력,
//암호가 틀리면 "암호틀림" 라고 출력 해주세요.
//입력 예제
//abc
//출력 결과
//암호틀림

#include <iostream>

int isSame(char* _a, char* _b)
{
	if (strcmp(_a, _b) != 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	char arr[5][256] =
	{
		"JASON",
		"DR.tom",
		"EXEXI",
		"GK12P",
		"POW"
	};
	int flag = 0;
	char PASSWORD[5][256] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> PASSWORD[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		flag = isSame(arr[i], PASSWORD[i]);
	}
	if (flag == 1)
	{
		std::cout << "암호 틀림";
	}
	else
	{
		std::cout << "암호 해제";
	}
}

//문제 10번
//A T B   A A A
//C C B   B B C
//위 3차배열을 하드코딩 해주세요
//그리고 문자 1개를 입력 받아주세요
//3차배열에 입력받은 문자가 존재하면 "발견", 없다면 "미발견"이라고 출력 해주세요
//입력 예제
//T
//출력 결과
//발견

#include <iostream>

int isSame(char(*_a)[2][3], char _b)
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				if (_a[i][j][k] == _b)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int main()
{
	char arr3d[2][2][3] =
	{
		'A','T','B',
		'C','C','B',
			'A','A','A',
			'B','B','C'
	};
	char a = 0;
	std::cin >> a;
	int flag = 0;
	flag = isSame(arr3d, a);
	if (flag == 1)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}
}

//문제 11번
//나에게 호감을 갖고 있는 n명의 친구들이 있습니다.
//이 중 누구와 데이트할지 ox로 데이트 조합을 출력해보려고 합니다.
//n을 입력받고 그에 따른 데이트 조합을 모두 출력 해주세요.
//입력 예제
//2
//출력 결과
//xx
//xo
//ox
//oo

#include <iostream>
char OX[2] = { 'X','O' };
char path[8] = {};
void abc(int _a, int _b)
{
	if (_a == _b)
	{
		std::cout << path;
		std::cout << "\n";
		return;
	}
	for (size_t i = 0; i < 2; i++)
	{
		path[_a] = OX[i];
		abc(_a + 1, _b);
		path[_a] = '\0';
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(0, a);
}

//문제 12번
//3 x 3 x 3 으로 구성되어 있는 3차 배열을 선언 해 주세요
//그리고 문자 하나를 입력 받습니다
//아래 예시와 같이 입력 받은 문자부터 순차적으로 값을 채워주세요
//ex) 만약 문자 A를 입력하였다면 아래와 같이 채우고 출력
//ex) 만약 문자 B를 입력하였다면 아래와 같이 채우고 출력
//입력 예제
//A
//출력 결과
//AAA
//AAA
//AAA
//BBB
//BBB
//BBB
//CCC
//CCC
//CCC

#include <iostream>

int main()
{
	char arr3d[3][3][3] = {};
	char a = 0;
	std::cin >> a;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				arr3d[i][j][k] = a;
				std::cout << arr3d[i][j][k];
			}
			std::cout << "\n";
		}
		std::cout << "\n";
		a++;
	}
}

//문제 13번
//숫자 2개를 변수 a, b에 입력 받습니다
//아래의 규칙에 따라 값을 채워주세요
//만약 a에 1, b에 3을 입력 받았다면, 아래와 같이 채우고 출력하면 됩니다.
//입력 예제
//1 3
//출력 결과
//1 1 1
//3 3 3
//
//1 1 1
//3 3 3
//
//1 1 1
//3 3 3

#include <iostream>

int main()
{
	int arr3d[3][2][3] = {};
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{

			for (size_t k = 0; k < 3; k++)
			{
				arr3d[i][0][k] = a;
				arr3d[i][1][k] = b;
				std::cout << arr3d[i][j][k];
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}
}

//문제 14번
//문자 2개를 입력 받으세요.
//MAP 배열에서 찾을 값을 이용해 price 배열의 값을 찾아야 합니다.
//예를들어,
//만약 "B3"을 입력 받았다면 MAP 배열에서 3을 찾을 수 있고
//price배열의 3번에 해당하는 문자 G를 출력 하면 됩니다.
//입력 예제
//B 3
//출력 결과
//G

#include <iostream>

int main()
{
	int map[3][6] =
	{
		3,5,4,2,2,3,
		1,3,3,3,4,2,
		5,4,4,2,3,5,
	};
	char price[5] =
	{
		'T','P','G','K','C'
	};
	char a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	for (int i = 1; i <= 5; i++)
	{
		if (map[a - 'A'][b - 1] == i)
		{
			std::cout << price[i - 1];
		}
	}
}

//문제 15번
//길이가 다른 네 문장을 입력 받으세요. (최대글자는 10글자)
//가장 짧은 문장부터 긴 문장까지 오름차순 정렬해서 출력 해 주세요.
//입력 예제
//kfcmclo
//zzzzz
//abc
//mincoding
//출력 결과
//abc
//zzzzz
//kfcmclo
//mincoding

#include <iostream>
#include <string.h>

int main()
{
	char str[4][11] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> str[i];
	}
	int len[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		len[i] = strlen(str[i]);
	}
	char t[256] = {};
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = i; j < 4; j++)
		{
			if (len[i] > len[j])
			{
				strcpy_s(t, str[i]);
				strcpy_s(str[i], str[j]);
				strcpy_s(str[j], t);
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << str[i] << "\n";
	}
}

//문제 16번
//3차배열에 다음 값을 하드코딩 해주세요.(ABCD)
//그리고 숫자 1개를 입력 받으세요.
//숫자에 해당하는 배열값을 출력 해주세요.
//예로들어 0을 입력했다면
//와 같이 출력하면 됩니다.
//(빈칸 : 띄어쓰기 한칸)
//입력 예제
//0
//출력 결과
// #
//# #
//###
//# #
//# #

#include <iostream>

int main()
{
	char arr3d[4][5][4] =
	{
		" # ",
		"# #",
		"###",
		"# #",
		"# #",
			"###",
			"# #",
			"###",
			"# #",
			"###",
				"###",
				"# #",
				"#  ",
				"# #",
				"###",
					"## ",
					"# #",
					"# #",
					"# #",
					"## ",
	};
	int a = 0;
	std::cin >> a;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr3d[a][i][j];
		}
		std::cout << "\n";
	}
}