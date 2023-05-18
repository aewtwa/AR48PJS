//문제 1번
//main함수에서 숫자2개를 입력받고, ABC 함수에 입력받은 값을 전달 해 주세요
//ABC 함수는 전달받은 숫자 2개의 합과 곱을 계산 해 주는 함수입니다
//[TIP] 특정 함수에서 숫자 여러개 return 해주기
//일반적으로 함수는 한 개의 숫자만 return 할 수 있습니다.
//void ABC()
//{
//    return 5;
//}
//아래와 같이 짜면 에러가 발생하지요
//void ABC()
//{
//    return 5, 6; //에러 , return 에 값 두개를 쓸 수 없습니다
//}
//값을 2개 이상 돌려주는 방법은
//1. return 대신 전역변수를 쓴다
//2. return 대신 포인터를 쓴다
//이렇게 두 가지 방법이 있습니다.
//입력 예시
//5 6
//출력 예시
//11 30

#include <iostream>

void ABC(int _a, int _b, int* _c, int* _d)
{
	*_c = _a + _b;
	*_d = _a * _b;
}

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int sum = 0;
	int gop = 0;
	int* psum = &sum;
	int* pgop = &gop;
	ABC(a, b, &sum, &gop);
	std::cout << sum << " ";
	std::cout << gop;
}

//문제 2번
//다음 배열을 전역배열로 하드코딩 해 주세요
//A	D F
//Q	W E
//Z	X C
//main 함수에서 찾을 문자를 입력받고, Find함수에 입력받은 문자를 보내주세요. (Find함수 호출)
//Find함수에서는 전달 받은 문자가 있는 좌표를 찾아주세요
//main함수에서 Find함수가 찾은 좌표를 출력 해 주세요
//(전역변수를 사용하지 말고 포인터를 사용해서 문제를 풀어주세요)
//입력 예시
//F
//출력 예시
//0, 2

#include <iostream>

char arr2d[3][3] =
{
	{'A','D','F'},
	{'Q','W','E'},
	{'Z','X','C'}
};

void find(char _a, int* _Y, int* _X)
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr2d[i][j] == _a)
			{
				*_Y = i;
				*_X = j;
				break;
			}

		}
	}
}

int main()
{
	char a;
	std::cin >> a;
	int Y = 0;
	int X = 0;
	int* pY = &Y;
	int* pX = &X;
	find(a, &X, &Y);
	std::cout << X << "," << Y;
}

//문제 3번
//한 문장을 main함수에서 입력 받아주세요
//stringLen이라는 함수를 만들고, 입력받은 문장을 stringLen으로 전달 해 주세요(함수 호출)
//stringLen함수에서 전달받은 문장의 길이를 구하고 문장의 길이를 return 해 주세요
//main에서는 문장의 길이를 출력하면 됩니다.
//입력 예시
//BBQWORLD
//출력 예시
//8글자

#include <iostream>

int stringLen(char* _a)
{
	for (size_t i = 0; i < 256; i++)
	{
		if (_a[i] == '\0')
		{
			return i;
		}
	}
}

int main()
{
	char a[256] = {};
	std::cin >> a;
	std::cout << stringLen(a) << "글자";
}

//문제 4번
//main함수에서 KFC함수를 호출 해 주세요
//KFC함수에서는
//- 한 문장(최대 10글자)을 입력받아주세요
//- 그 문자에서 대문자 / 소문자가 각각 몇개인지 Counting 해 주세요
//main 함수에서는 KFC함수에서 구한 대 / 소문자 갯수를 각각 출력 해 주세요
//(전역배열 / 전역변수를 사용하지 말고, 포인터를 이용 해 주세요)
//입력 예시
//MINcoding
//출력 예시
//대문자3개
//소문자6개

#include <iostream>

void KFC(int* _a, int* _b)
{
	char a[11] = {};
	std::cin >> a;
	for (size_t i = 0; i < 11; i++)
	{
		if ('A' <= a[i] && a[i] <= 'Z')
		{
			(*_a)++;
		}
		else if ('a' <= a[i] && a[i] <= 'z')
		{
			(*_b)++;
		}
	}
}

int main()
{
	int BIGcount = 0;
	int SMALLcount = 0;
	int* pBig = &BIGcount;
	int* pSMALL = &SMALLcount;
	KFC(&BIGcount, &SMALLcount);
	std::cout << "대문자" << BIGcount << "개" << "\n";
	std::cout << "소문자" << SMALLcount << "개";
}

//문제 5번
//*전역변수를 사용하지 않고, 포인터를 활용해서 문제입니다
//아래의 배열을 전역으로 선언 및 하드코딩 해 주세요
//4	5 6	1 3	1
//2	1 3	6 3	6
//Input함수에서 좋아하는 숫자 3개를 입력받아주세요
//Process함수에서는 좋아하는 숫자가 각각 몇개인지 Counting 해 주세요
//Output함수에서는 좋아하는 숫자의 갯수를 출력 해 주세요
//[TIP] argument
//숫자 4개를 받는 함수 ABC가 있다고 한다면,
//ABC함수를 호출하기 위해서 이렇게 쓸 수 있습니다
//ABC(1, 2, 3, 4);
//여기서 보내는 값인 1, 2, 3, 4를 argument(아규먼트)라고 부릅니다
//->ABC함수를 호출하기 위해서는 argument 4개를 써야 합니다
//[HINT] 이 문제를 풀기 위해서는
//input함수는 argument가 3개(포인터 3개) 를 써야합니다
//ex) main함수에서 input(&a, &b, &c);
//process함수는 argument가 6개(변수3개, 포인터3개) 를 써야합니다
//ex) main함수에서 process(a, b, c, &r1, &r2, &r3);
//output함수는 argument가 6개를 써야합니다
//ex) main함수에서 output(a, b, c, r1, r2, r3);
//입력 예시
//1 2 3
//출력 예시
//1 = 3개
//2 = 1개
//3 = 3개

#include <iostream>

int arr2d[2][6] =
{
	{4,5,6,1,3,1},
	{2,1,3,6,3,6}
};

void input(int* _a, int* _b, int* _c)
{
	std::cin >> *_a;
	std::cin >> *_b;
	std::cin >> *_c;
}

void process(int _a, int _b, int _c, int* _d, int* _e, int* _f)
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (arr2d[i][j] == _a)
			{
				(*_d)++;
			}
			else if (arr2d[i][j] == _b)
			{
				(*_e)++;
			}
			else if (arr2d[i][j] == _c)
			{
				(*_f)++;
			}
		}
	}
}

void output(int _a, int _b, int _c, int _d, int _e, int _f)
{
	std::cout << _a << "=" << _d << "개" << "\n";
	std::cout << _b << "=" << _e << "개" << "\n";
	std::cout << _c << "=" << _f << "개";
}

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int* pA = &A;
	int* pB = &B;
	int* pc = &C;
	int Acount = 0;
	int Bcount = 0;
	int Ccount = 0;
	int* pAcount = &Acount;
	int* pBcount = &Bcount;
	int* pCcount = &Ccount;
	input(&A, &B, &C);
	process(A, B, C, &Acount, &Bcount, &Ccount);
	output(A, B, C, Acount, Bcount, Ccount);
}

//문제 6번
//아래 2차배열을 하드코딩해주세요
//이 2차배열은 문자가 들어있기 때문에 int가 아니라 char 2차 배열 입니다.
//전부 문자열 처리하여 하드코딩하면 됩니다.
//0 ~9 사이의 숫자를 입력받고, 그 숫자가 존재하는 해당하는 칸을 찾으세요
//그리고 그 칸에 써있는 알파벳을 출력 해 주세요
//4	5 7	1 3	2
//D	F Q	W G	Z
//ex) 숫자 3을 입력받으면, 숫자 3의 위치를 먼저 찾아주세요
//그리고 그 숫자 밑에있는 알파벳 G를 출력하시면 됩니다
//
//입력 예시
//1
//출력 예시
//W

#include <iostream>

int main()
{
	char arr2d[2][256] =
	{
		"457132",
		"DFQWGZ"
	};
	char a = 0;
	std::cin >> a;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr2d[0][i] == a)
		{
			std::cout << arr2d[1][i];
		}
	}
}

//문제 7번
//*전역배열 / 전역변수를 쓰지 않고 푸는 문제입니다
//main함수에서 문장 2개를 입력받으세요
//그리고 2개의 문장을 FindABC 함수로 전달 해 주세요
//FindABC 함수에서는 대문자 A / 대문자B / 대문자 C를 각각 Counting하는 함수입니다
//main함수에서는 FindABC함수를 통해서 구한 A, B, C의 개수를 출력 해 주세요
//입력 예시
//A_ShowABC
//ABCDEFG
//출력 예시
//A : 3
//B : 2
//C : 2

#include <iostream>

void findABC(char _a[256], char _b[256], int* _c, int* _d, int* _e)
{
	for (size_t i = 0; i < 256; i++)
	{
		if (_a[i] == 'A')
		{
			(*_c)++;
		}
		else if (_a[i] == 'B')
		{
			(*_d)++;
		}
		else if (_a[i] == 'C')
		{
			(*_e)++;
		}
	}
	for (size_t i = 0; i < 256; i++)
	{
		if (_b[i] == 'A')
		{
			(*_c)++;
		}
		else if (_b[i] == 'B')
		{
			(*_d)++;
		}
		else if (_b[i] == 'C')
		{
			(*_e)++;
		}
	}
}

int main()
{
	char arra[256] = {};
	std::cin >> arra;
	char arrb[256] = {};
	std::cin >> arrb;
	int Acount = 0;
	int Bcount = 0;
	int Ccount = 0;
	int* pAcount = &Acount;
	int* pBcount = &Bcount;
	int* pCcount = &Ccount;
	findABC(arra, arrb, &Acount, &Bcount, &Ccount);
	std::cout << "A:" << Acount << "\n";
	std::cout << "B:" << Bcount << "\n";
	std::cout << "C:" << Ccount;
}

//문제 8번
//아래와 같은 구조체를 먼저 정의 해 주세요
//구조체 변수 int1, int2 를 만들어 주세요
//이 구조체 변수에 들어갈 내용을 입력 받고
//평균을 구해서 출력 해 주세요
//name = char 배열
//age = int 변수
//weight = int 변수
//[TIP] 정의하다 라는 뜻
//1. 함수 정의
//함수를 호출하려면 함수를 미리 만들어 놔야 합니다.
//함수를 미리 만들어 두는 것을 "함수를 정의하다" 라고 표현합니다
//2. 구조체 정의
//구조체 변수를 만드려면 미리 구조체 Type을 만들어 두어야 합니다
//구조체 Type을 미리 만들어 두는 것을 "구조체 정의하다" 라고 표현합니다
//구조체 변수를 만드는 것은 "선언하다" 라고 부릅니다.
//정의하다 vs 선언하다 이 단어를 구분할 줄 알아야 합니다.
//"정의하다"라는 용어 알아두세요!
//입력 예시
//JASON
//35
//80
//TOMS
//20
//40
//출력 예시
//JASON & TOMS
//평균27세
//평균60KG

#include <iostream>

struct PROFILE
{
	char name[7];
	int age;
	int weight;
};

int main()
{
	PROFILE int1 = {};
	PROFILE int2 = {};
	std::cin >> int1.name;
	std::cin >> int1.age;
	std::cin >> int1.weight;
	std::cin >> int2.name;
	std::cin >> int2.age;
	std::cin >> int2.weight;
	std::cout << int1.name << " & " << int2.name << "\n";
	std::cout << "평균" << (int1.age + int2.age) / 2 << "세" << "\n";
	std::cout << "평균" << (int1.weight + int2.weight) / 2 << "KG";
}

//문제 9번
//아래 배열을 전역으로 하드코딩 해 주세요
//(전역변수를 쓰지않고 푸는 문제입니다)
//D	A S
//Q	W V
//R	T Y
//main함수에서
//- 좌표 2쌍(숫자 4개) 입력 받아주세요(y축, x축)
//- Find함수를 호출하는데 입력받은 숫자를 넘겨주세요
//Find함수는 좌표 2쌍에 해당하는 값을 찾아주는 함수입니다
//main함수에서 좌표에 해당하는 값을 출력 해 주세요
//입력 예시
//0 2
//1 1
//출력 예시
//S W

#include <iostream>

char arr2d[3][256] =
{
	"DAS",
	"QWV",
	"RTY"
};

char find(int _a, int _b)
{
	char a = 0;
	a = arr2d[_a][_b];
	return a;
}

int main()
{
	int X1 = 0;
	std::cin >> X1;
	int Y1 = 0;
	std::cin >> Y1;
	int X2 = 0;
	std::cin >> X2;
	int Y2 = 0;
	std::cin >> Y2;
	std::cout << find(X1, Y1);
	std::cout << find(X2, Y2);
}

//문제 10번
//아래 표는 나라별 거리를 나타낸 표 입니다
//A B C D E F G
//4 2 5 1 6 7 3
//알파벳은 나라를 의미합니다
//A 나라에서 E 나라까지 가려면 B, C, D를 거쳐야 합니다
//따라서 거리는 2 + 5 + 1 = 8 이 됩니다
//민스는 지효를 만나기 위해 얼마나 멀리 떨어져 있는지 알아보려고 합니다
//민스가 있는 나라와, 지효가 있는 나라를 입력 받고
//두 사람의 거리를 계산해서 출력 해 주세요
//ex) 만약 E B를 입력받았다면
//E와 B 사이에 D와 C가 있으니까 1 + 5 = 6 이 정답입니다
//[힌트] 알파벳을 인덱스로 바꾸는 방법
//char ch1, ch2;
//cin >> ch1 >> ch2;
//int aIndex = ch1 - 'A';
//int bIndex = ch2 - 'A';
//입력 예시
//E B
//출력 예시
//6

#include <iostream>

int main()
{
	char arr2d[2][256] =
	{
		"ABCDEFG",
		"4251673"
	};
	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	int aidx = a - 'A';
	int bidx = b - 'A';
	int c = 0;
	int d = 0;
	if (aidx > bidx)
	{
		for (int i = bidx + 1; i <= aidx - 1; i++)
		{
			c = arr2d[1][i] - 48;
			d = d + c;
		}
	}
	else if (bidx > aidx)
	{
		for (int i = aidx + 1; i <= bidx - 1; i++)
		{
			c = arr2d[1][i] - 48;
			d = d + c;
		}
	}
	std::cout << d;
}

//문제 11번
//1x5 배열 A, B, C 3개를 만들고 숫자 15개를 입력 받으세요.
//배열 A와 배열 B의 각각 같은 index값 끼리 곱을 합니다.
//그리고 배열 C칸과 같은 index끼리 합을 구한 결과를 출력 하세요.
//ex)
//입력: = > 출력: 10 17 10 15 67
//3 5 1 2 7
//1 2 1 5 9
//7 7 9 5 4
//입력 예시
//3 5 1 2 7
//1 2 1 5 9
//7 7 9 5 4
//출력 예시
//10 17 10 15 67

#include <iostream>

int main()
{
	int arrA[5] = {};
	int arrB[5] = {};
	int arrC[5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arrA[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arrB[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arrC[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << arrA[i] * arrB[i] + arrC[i] << " ";
	}
}

//문제 12번

#include <iostream>

int main()
{
	int arr2d[4][4] =
	{
		{3,4,1,6},
		{3,5,3,6},
		{},
		{5,4,6,0}
	};
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		arr2d[2][i] = arr[i];
	}
	int MAX = 0;
	int MIN = 987654321;
	int MAXXidx = 0;
	int MAXYidx = 0;
	int MINXidx = 0;
	int MINYidx = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr2d[i][j] > MAX)
			{
				MAX = arr2d[i][j];
				MAXXidx = j;
				MAXYidx = i;
			}
			else if (arr2d[i][j] < MIN)
			{
				MIN = arr2d[i][j];
				MINXidx = j;
				MINYidx = i;
			}
		}
	}
	std::cout << "MAX = " << MAX << "(" << MAXYidx << "," << MAXXidx << ")" << "\n";
	std::cout << "MAX = " << MIN << "(" << MINYidx << "," << MINXidx << ")";
}