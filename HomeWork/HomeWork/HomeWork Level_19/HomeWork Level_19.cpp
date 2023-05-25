//문제 1번
//3 5 4
//1 1 2
//1 3 9
//위 3x3 배열을 하드코딩 해주세요.
//그리고 좌표 하나를 입력 받아주세요.(y, x)
//입력받은 좌표에서 바로 윗칸, 아랫칸, 왼쪽칸, 오른쪽칸의 합을
//Direct 방식을 이용해서 출력 해주세요.
//ex1) 1 1 입력시(y, x)
//이므로 5 + 1 + 2 + 3 = 11 출력
//ex2) 0 1 입력시(y, x)
//유효한 칸은 세칸이므로 3 + 1 + 4 = 8 출력
//입력 예제
//1 1
//출력 결과
//11

#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		3,5,4,
		1,1,2,
		1,3,9
	};
	int y = 0;
	std::cin >> y;
	int x = 0;
	std::cin >> x;
	int top = arr2d[y - 1][x];
	int bottom = arr2d[y + 1][x];
	int left = arr2d[y][x - 1];
	int right = arr2d[y][x + 1];
	int sum = top + bottom + left + right;
	std::cout << sum;
}

//문제 2번
//Data 구조체를 만들고 구조체 변수 a, b를 만들어 주세요.
//숫자 6개를 a.x, a.y, a.z, b.x, b.y, b.z 에 각각 입력 받고,
//a.x + b.x
//a.y + b.y
//a.z + b.z      값을 출력 해주세요.
//ex)
//입력:
//1 2 3
//4 5 6
//출력 :
//5
//7
//9
//입력 예제
//1 2 3
//4 5 6
//출력 결과
//5
//7
//9

#include <iostream>

struct data
{
	int x;
	int y;
	int z;
};

int main()
{
	data a = {};
	data b = {};
	std::cin >> a.x;
	std::cin >> a.y;
	std::cin >> a.z;
	std::cin >> b.x;
	std::cin >> b.y;
	std::cin >> b.z;
	std::cout << a.x + b.x << "\n";
	std::cout << a.y + b.y << "\n";
	std::cout << a.z + b.z;
}

//문제 3번
//왼쪽과 같은 형태의 구조체를 정의해주세요.
//그리고 구조체 변수 bob, tom을 만들고, 문장 4개를 구조체 변수에 입력 받아주세요.
//sanghi, bulgogi, chicken, dove
//만약 네 문장을 아래와 같이 입력 받았다면, 아래와 같이 채워주세요.
//이제 각각 몇글자인지 출력하면 됩니다.
//입력 예제
//sanghi
//bulgogi
//chicken
//dove
//출력 결과
//bob.burger1 = 6
//bob.burger2 = 7
//tom.burger1 = 7
//tom.burger2 = 4

#include <iostream>

struct MC
{
	char burger1[8];
	char burger2[8];
};

int getlen(char* _a)
{
	for (int i = 0; i < 8; i++)
	{
		if (_a[i] == '\0')
		{
			return i;
		}
	}
}

int main()
{
	MC bob = {};
	MC tom = {};
	std::cin >> bob.burger1;
	std::cin >> bob.burger2;
	std::cin >> tom.burger1;
	std::cin >> tom.burger2;
	int bobburger1count = 0;
	int bobburger2count = 0;
	int tomburger1count = 0;
	int tomburger2count = 0;
	std::cout << "bob.burger1 = " << getlen(bob.burger1) << "\n";
	std::cout << "bob.burger2 = " << getlen(bob.burger2) << "\n";
	std::cout << "tom.burger1 = " << getlen(tom.burger1) << "\n";
	std::cout << "tom.burger2 = " << getlen(tom.burger2);
}

//문제 4번
//t와 Q는 더블포인터 입니다.
//위 상태를 구현하고
//변수 G에다가 숫자 1개를 입력 받으세요.
//그리고 * *t, * K의 값을 출력 해주세요.
//입력 예제
//5
//출력 결과
//5 5

#include <iostream>

int main()
{
	int G = 0;
	int* p = &G;
	int* K = &G;
	int** t = &p;
	int** Q = &K;
	std::cin >> G;
	std::cout << **t << " ";
	std::cout << *K;
}

//문제 5번
//네쌍의 좌표를 input 배열에 입력 받아주세요.
//그리고 vect배열 4x3에 배열을 만들고 0으로 초기화 해 주세요.
//vect배열에서 input 배열에 든 좌표에 해당하는 곳을 찾아 그 좌표에 숫자 5를 넣어주세요.
//그리고 그 결과를 출력 해주세요.
//[HINT]
//vect[0][1] = 5;
//vect[1][0] = 5;
//vect[3][0] = 5;
//vect[3][1] = 5;
//입력 예제
//0 1
//1 0
//3 0
//3 1
//출력 결과
//0 5 0
//5 0 0
//0 0 0
//5 5 0

#include <iostream>

int main()
{
	int input[4][2] = {};
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			std::cin >> input[i][j];
		}
	}
	int vect[4][3] = {};
	for (size_t i = 0; i < 4; i++)
	{
		vect[input[i][0]][input[i][1]] = 5;
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << vect[i][j];
		}
		std::cout << "\n";
	}
}

//문제 6번
//위와 같이 구조체 기차에 사람들이 타고 있습니다.
//win에는 나이가
//name에는 이름이 적어져 있습니다.
//tom은 첫사랑을 찾기 위해 이 기차를 탔습니다. (구조체 배열 기차 입니다)
//tom의 첫사랑 이름과 나이를 입력받고, 몇번 index에 있는지 찾아서 출력해주세요.
//[힌트1] 구조체변수 하드코딩 하기
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int x, y;
//};
//
//int main()
//{
//	Node a = { 3, 4 };
//	Node b = { 5, 6 };
//
//	cout << a.x << " " << a.y << endl;
//	cout << b.x << " " << b.y << endl;
//}
//[힌트2] 구조체배열 하드코딩하기
//#include<iostream>
//using namespace std;
//struct Train
//{
//	int win;
//	char name[8];
//};
//
//int main()
//{
//	Train t[3] = { {35, "ABC"}, {100, "BBQ"}, {15, "KFC"} };
//
//	cout << t[0].name;
//}
//[힌트3] 문장은 비교가 되지 않습니다.
//char a[10] = "BBQ";
//char b[20] = "ABC";
//if (a == b) //error!
//for문을 돌려 한 글자씩 비교를 해주어야 합니다.
//함수를 만들어 비교를 하면 됩니다.
//입력 예제
//summer
//20
//출력 결과
//5

#include <iostream>

struct Train
{
	int win = 0;
	char name[8] = {};
};

int main()
{
	Train t[7] =
	{ {15,"summer"},{33,"cloe"},{24,"summer"},{28,"niki"},{32,"jenny"},{20,"summer"},{40,"coco"} };
	int a = 0;
	std::cin >> a;
	char b[256] = {};
	std::cin >> b;
	int flag = 0;
	int find = 0;
	for (size_t i = 0; i < 7; i++)
	{
		if (t[i].win == a)
		{
			for (size_t j = 0; j < 8; j++)
			{
				if (t[i].name[j] == b[j])
				{
					find = i;
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}
		}
	}
	if (flag == 1)
	{
		std::cout << find;
	}
	else
	{
		std::cout << "없음";
	}
}

//문제 7번
//3 3 5 3 1
//2 2 4 2 6
//4 9 2 3 4
//1 1 1 1 1
//3 3 5 9 2
//map 배열을 하드코딩 해주세요.
//그리고 sum(y, x) 함수를 만들어 주세요.
//이 함수는 특정좌표(y, x)에서
//왼쪽위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래의 합을 return 해주는 함수입니다.
//이 sum함수를 이용해서 가장 큰 값이 나오는 좌표를 출력하세요.
//(direct 기법을 사용해주세요, 입력값은 없습니다.)
//출력 결과
//3 2

#include <iostream>

int map[5][5] =
{
	3,3,5,3,1,
	2,2,4,2,6,
	4,9,2,3,4,
	1,1,1,1,1,
	3,3,5,9,2
};

int sum(int _a, int _b)
{
	int realsum = 0;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	if (_a - 1 >= 0 && _b - 1 >= 0)
	{
		sum1 = map[_a - 1][_b - 1];
	}
	if (_a - 1 >= 0 && _b + 1 <= 4)
	{
		sum2 = map[_a - 1][_b + 1];
	}
	if (_b - 1 >= 0 && _a + 1 <= 4)
	{
		sum3 = map[_a + 1][_b - 1];
	}
	if (_b + 1 <= 4 && _a + 1 <= 4)
	{
		sum4 = map[_a + 1][_b + 1];
	}
	realsum = sum1 + sum2 + sum3 + sum4;
	return realsum;
}

int main()
{
	int y = 0;
	int x = 0;
	int sumarr[5][5] = {};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sumarr[i][j] = sum(i, j);
		}
	}
	int max = 0;
	int maxY = 0;
	int maxX = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (sumarr[i][j] > max)
			{
				max = sumarr[i][j];
				maxY = i;
				maxX = j;
			}
		}
	}
	std::cout << maxY << " " << maxX;
}

//문제 8번
//4x5 char 배열을 준비해주세요.
//값을 '_' 문자로 꽉 채워주세요.
//폭탄을 투하할 좌표 두곳을 입력 받아주세요.(y, x)
//만약 폭탄이(1, 1)에 투하되면 8방향으로 폭탄이 터집니다.
//따라서
//그리고 다시(3, 3)에 투하 되면 8방향으로 폭탄이 터집니다.
//따라서
//폭탄 2개가 투하 되었을때 그 현장을 출력 해주세요.
//(Direct 기법을 사용해서 코딩해주세요)
//입력 예제
//1 1
//3 3
//출력 결과
//# # # _ _
//# _ # _ _
//# # # # #
//_ _ # _ #

#include <iostream>

char arr2d[4][6] =
{
	"_____",
	"_____",
	"_____",
	"_____"
};

void bomb(int _a, int _b)
{
	int offset[8][2] =
	{
		-1,-1,
		-1,1,
		1,-1,
		1,1,
		-1,0,
		+1,0,
		0,-1,
		0,+1,
	};
	for (size_t i = 0; i < 8; i++)
	{
		int newY = _a + offset[i][0];
		int newX = _b + offset[i][1];
		arr2d[newY][newX] = '#';
	}
}

int main()
{
	int arr[2][2] = {};
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	bomb(arr[0][0], arr[0][1]);
	bomb(arr[1][0], arr[1][1]);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			std::cout << arr2d[i][j];
		}
		std::cout << "\n";
	}
}

//문제 9번
//4x4 image배열이 있습니다.
//먼저 4x4 image배열에 숫자를 입력 받아주세요.
//image 배열의 특정 좌표를 지목하면,
//2x3 사이즈의 합을 return 해주는 rectSum 함수를 만들어 주세요
//예를들어 rectSum(0, 0)을 호출하면 1 + 5 + 5 + 4 + 2 + 1 = 18 이 return 됩니다.
//위 예제에서는(2, 0)이 최대 합 입니다.
//이 함수를 활용하여 2x3 사이즈의 합의 최대값이 나오는 좌표를 찾아주세요.
//(direct를 쓰는 문제가 아닙니다)
//입력 예제
//1 5 5 4
//4 2 1 1
//3 9 3 2
//4 5 9 1
//출력 결과
//(2, 0)

#include <iostream>

int image[4][4] = {};

int rectSum(int _a, int _b)
{
	int sum = 0;
	int max = 0;
	for (size_t y = 0; y < 2; y++)
	{
		for (size_t x = 0; x < 3; x++)
		{
			sum = sum + image[_a + y][_b + x];
		}
	}
	return sum;
}

int main()
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> image[i][j];
		}
	}
	int A = 0;
	int B = 0;
	int sumarr[4][4] = {};
	int max = 0;
	int maxY = 0;
	int maxX = 0;
	for (A = 0; A < 4; A++)
	{
		for (B = 0; B < 4; B++)
		{
			sumarr[A][B] = rectSum(A, B);
			if (max < sumarr[A][B])
			{
				max = sumarr[A][B];
				maxY = A;
				maxX = B;
			}
		}
	}
	std::cout << "(" << maxY << "," << maxX << ")";
}

//문제 10번
//※ main 함수에서 a, b를 출력 해주세요.
//입력 예제
//4 2 5 3 8
//출력 결과
//a = 8
//b = 2

#include <iostream>

void bbq(int* _a, int* _b)
{
	int arr[5] = {};
	int max = 0;
	int min = 987654321;
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}
	*_a = max;
	*_b = min;
}

int main()
{
	int a = 0;
	int b = 0;
	bbq(&a, &b);
	std::cout << "a=" << a << "\n";
	std::cout << "b=" << b;
}

//문제 11번
//5x4 배열에 0 또는 1로 구성된 숫자들을 입력받아주세요.
//입력받은 배열에 있는 숫자 1은 세포를 뜻합니다.
//세포 1주변에 아무것도 없으면 세포들이 안정된 상태입니다.
//즉, 8방향 모두 아무런 숫자가 없어야 합니다.
//아래 예제를 참고하여,
//입력받은 세포상태가 "안정된 상태"인지 "불안정한 상태"인지 출력 하세요.
//입력 예제
//0 0 0 0
//1 0 0 0
//0 0 1 0
//0 0 0 0
//1 0 0 1
//출력 결과
//안정된 상태

#include <iostream>

int arr[5][4] = {};

int find(int _a, int _b)
{
	int offset[8][2] =
	{
		-1,-1,
		-1,0,
		-1,1,
		0,-1,
		0,1,
		1,-1,
		1,0,
		1,1,
	};
	for (size_t i = 0; i < 8; i++)
	{
		int newY = _a + offset[i][0];
		int newX = _b + offset[i][1];
		if (4 < newY || newY < 0 || 3 < newX || newX < 0)
			continue;
		if (arr[newY][newX] == 1)
			return 1;
	}
	return 0;
}

int main()
{
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	int flag = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr[i][j] == 1)
			{
				flag = find(i, j);
				if (flag == 1)
				{
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
		std::cout << "불안정한 상태";
	}
	else
	{
		std::cout << "안정된 상태";
	}
}

//문제 12번
//1~16 사이의 숫자 4개를 입력 받고 배열에 채워주세요.
//총 16칸짜리인 4x4 배열을 만들어 주세요.
//4x4 배열에 아래와 같이 번호를 매긴다고 했을때
//입력받은 숫자 4개에 해당하는 번호에 값을 1부터 순차적으로 채워준 후 출력 해주세요.
//아래 예제를 참고하여 소스코드를 작성해주세요.
//입력 예제
//3 10 11 15
//출력 결과
//0 0 1 0
//0 0 0 0
//0 2 3 0
//0 0 4 0

#include <iostream>

void write(int(*_a)[4], int _b, int _c)
{
	int t = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (t == _b)
			{
				_a[i][j] = _c;
			}
			t++;
		}
	}
}

int main()
{
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
	int arr2d[4][4] = {};
	int bucket[20] = {};
	for (size_t i = 0; i < 4; i++)
	{
		int target = arr[i];
		bucket[target - 1]++;
	}
	int count = 1;
	for (size_t i = 0; i < 20; i++)
	{
		if (bucket[i] == 1)
		{
			write(arr2d, i, count);
			count++;
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}
//문제 13번
//가로 또는 세로를 색칠하는 프로그램을 짜야 합니다.
//4x4 배열 하나를 준비 해 주세요.
//만약
//G 3이라고 입력 받으면 가로 3번줄이 색칠 됩니다.
//S 2를 입력 받으면 세로 2번줄이 색칠 됩니다.
//이러한 규칙으로 3개의 명령어를 입력 받고 결과를 출력 하세요.
//ex)
//입력:
//G 3
//S 2
//S 0
//출력 :
//입력 예제
//G 3
//S 2
//S 0
//출력 결과
//1 0 1 0
//1 0 1 0
//1 0 1 0
//1 1 1 1

#include <iostream>

void draw(int(*_a)[4])
{
	char a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	if (a == 'G')
	{
		for (size_t i = 0; i < 4; i++)
		{
			_a[b][i] = 1;
		}
	}
	else if (a == 'S')
	{
		for (size_t i = 0; i < 4; i++)
		{
			_a[i][b] = 1;
		}
	}
}

int main()
{
	int arr[4][4] = {};
	draw(arr);
	draw(arr);
	draw(arr);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << "\n";
	}
}

//문제 14번
//왼쪽 그림과 같은 sketchbook 구조체를 정의하고, 구조체 변수 1개를 만들어 주세요.
//이미지에 들어갈 내용을 구조체 변수안 image char배열에 입력받고,
//어떤 무늬로 구성되어 있는지 알파벳 순서대로 출력하세요.
//(입력되는 문자는 모두 대문자입니다)
//ex)
//[입력][출력]
//ATK   AGKT
//AAA
//TTG
//입력 예제
//BBB
//BCD
//DZZ
//출력 결과
//BCDZ

#include <iostream>

struct sketchbook
{
	char image[3][4];
};

int main()
{
	sketchbook sk = {};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> sk.image[i];
	}
	int bucket[256] = {};
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			int target = sk.image[i][j];
			bucket[target]++;
		}
	}
	for (size_t i = 1; i < 256; i++)
	{
		if (bucket[i] > 0)
		{
			std::cout << (char)i;
		}
	}
}

//문제 15번
//A B G K
//T T A B
//A C C D
//3x4 map배열은 위와 같이 하드코딩 하고,
//2x2 pattern배열을 입력 받아주세요.
//그리고 map배열에 pattern라는 패턴 배열이 존재하는지 확인하고
//몇개인지 출력 하면 됩니다.
//만약, pattern이 존재하고 1개가 발견되었다면 "발견(1개)"  출력
//만약, pattern이 없다면 "미발견" 출력
//입력 예제
//AB
//CD
//출력 결과
//발견(1개)

#include <iostream>

char map[3][5] =
{
	"ABGK",
	"TTAB",
	"ACCD"
};

char pattern[2][3] = {};

int find(int _a, int _b)
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (map[i + _a][j + _b] != pattern[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	for (size_t i = 0; i < 2; i++)
	{
		std::cin >> pattern[i];
	}
	int flag = 0;
	int count = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			flag = find(i, j);
			if (flag == 1)
			{
				count++;
			}
		}
	}
	if (count == 0)
	{
		std::cout << "미발견";
	}
	else
	{
		std::cout << "발견(" << count << "개)";
	}
}

//문제 16번
//3 5 1
//3 8 1
//1 1 5
//2x2 size의 bitarray 배열을 입력 받고, map 배열을 하드코딩 하세요.
//bitarray를 map의(0, 0)에 masking하면 나오는 값은
//이고  합은 11입니다.
//bitarray를 map에다 masking 후
//합을 구했을 때 가장 큰 값이 나오는 좌표를 출력 하세요.
//입력 예제
//1 1
//1 0
//출력 결과
//(0, 1)

#include <iostream>

int map[3][3] =
{
	3,5,1,
	3,8,1,
	1,1,5
};

int bitarray[2][2] = {};

int sum(int _a, int _b)
{
	int sum = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (bitarray[i][j] == 1)
			{
				sum += map[i + _a][j + _b];
			}
		}
	}
	return sum;
}

int main()
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			std::cin >> bitarray[i][j];
		}
	}
	int sumarr[4] = {};
	int sumidx = 0;
	int max = 0;
	int maxy = 0;
	int maxx = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sumarr[sumidx] = sum(i, j);
			if (max < sumarr[sumidx])
			{
				max = sumarr[sumidx];
				maxy = i;
				maxx = j;
			}
			sumidx++;
		}
	}
	std::cout << "(" << maxy << "," << maxx << ")";
}