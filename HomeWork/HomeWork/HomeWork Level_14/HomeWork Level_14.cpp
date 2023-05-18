//문제 1번
//변수 a, b 에다가 숫자 2개를 입력받으세요
//그리고 a ~b까지 while을 사용해서 출력 해 주세요
//입력 예시
//2 5
//출력 예시
//2 3 4 5

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int i = 2;
	while (i <= b)
	{
		std::cout << a << " ";
		a++;
		i++;
	}
}

//문제 2번
//숫자 1개를 입력받으세요
//그 숫자를 5번씩 3 줄을 출력하시면 됩니다
//이중 while을 사용해서 풀어주세요
//ex) 만약 3을 입력받았다면
//33333
//33333
//33333
//ex) 만약 5를 입력받았다면
//55555
//55555
//55555
//입력 예시
//3
//출력 예시
//33333
//33333
//33333

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int i = 0;
	while (i < 3)
	{
		int j = 0;
		while (j < 5)
		{
			std::cout << a;
			j++;
		}
		std::cout << "\n";
		i++;
	}
}

//문제 3번
//*이중 while을 이용하는 문제입니다
//문자 1개를 입력 받으세요
//그 문자부터 순차적으로 아래와 같이 배열에 값을 채워주세요
//(중첩된 이중 while 사용)
//주의 : 빈 공간은 빈칸으로 바꾸어서 출력 해 주세요
//NULL문자를 출력하려고 하면 ERROR가 발생합니다
//ex) 만약 A를 입력받았다면 'A'에서 부터 채워주세요
//D	E F
//B	C
//A
//ex) 만약 D를 입력받았다면 'D'에서 부터 채워주세요
//G	H I
//E	F
//D
//입력 예시
//A
//출력 예시
//DEF
//BC
//A

#include <iostream>

int main()
{
	char arr2d[3][3] = {};
	char a = 0;
	std::cin >> a;
	int Xidx = 0;
	int i = 2;
	while (i >= 0)
	{
		int j = 0;
		while (j <= Xidx)
		{
			arr2d[i][j] = a;
			a++;
			j++;
		}
		Xidx++;
		i--;
	}
	int k = 0;
	while (k < 3)
	{
		int l = 0;
		while (l < 3)
		{
			std::cout << arr2d[k][l];
			l++;
		}
		std::cout << "\n";
		k++;
	}
}

//문제 4번
//숫자 6개를 입력받아주세요
//그 문자를 정렬한 후 출력 해 주세요(내림차순)
//만약 아래와 같이 입력받았다면
//3	5 1	6 5	8
//아래와 같이 큰 수부터 작은수까지 정렬 해 주시면 됩니다
//8	6 5	5 3	1
//[TIP] select sort(선택정렬)
//이중 for문을 돌면서 한 쪽으로 작거나 큰 숫자를 몰아주는 방식입니다
//영상을 보면서 어떻게 코딩해야 하는지 방법을 생각 해 보세요
//* 맨 처음 동작 해설 : 숫자 3이 처음 선택되고, 숫자3과 숫자 0을 비교한 후 자리를 교체 합니다
//https ://youtu.be/Ns4TPTC8whw
//입력 예시
//3 5 1 6 5 8
//출력 예시
//865531

#include <iostream>

int main()
{
	int arr[6] = {};
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = i + 1; j < 6; j++)
		{
			if (arr[i] < arr[j])
			{
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}
}

//문제 5번
//한 문장을 입력받아주세요
//문장을 알파벳 순서대로 정렬하여 출력 해 주세요
//ex) ANDBBQ 를 입력받았다면
//각 알파벳을 정렬하여 "ABBDNQ" 를 출력하면 됩니다
//[HINT] char변수에 저장되는 문자는 사실, 숫자로 구성 되어 있습니다
//char w = 'A';  //w에는 숫자 65가 저장되어 있음
//그리고 이 문제를 풀기 위해서는
//입력받은 문장이 몇 글자인지 알아내야 합니다
//입력 예시
//ANDBBQ
//출력 예시
//ABBDNQ

#include <iostream>

int main()
{
	char a[256] = {};
	std::cin >> a;
	int length = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (a[i] == '\0')
		{
			length = i;
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = i + 1; j < length; j++)
		{
			if (a[i] > a[j])
			{
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		std::cout << a[i];
	}
}

//문제 6번
//아래 문장 3개를 하드코딩 해 주세요
//"BBQWORLD"
//"KFCAPPLE"
//"LOT"
//그리고 문자 1개를 입력받아주세요.
//세 문장중에서 입력받은 문자가 몇 개 있는지 출력 해 주세요
//ex) 만약 B를 입력받으면 2를 출력하시면 됩니다
//[TIP] 여러 문장을 하드코딩 하는 방법
//char vect[2][5] = { "BBQA", "KFC" };
//이렇게 하면 이렇게 배열에 값이 채워집니다
//B B Q  A \0
//K F C \0 \0
//물론 이렇게 하드코딩 하셔도 됩니다
//char vect[2][5] = { {'B', 'B', 'Q', 'A', '\0'}, {'K', 'F', 'C', '\0', '\0'} };
//이 방법은 타자치기 힘들껍니다.이 방법보다 첫번째 방법이 가독성 측면에서 더 낫겠죠.
//입력 예시
//B
//출력 예시
//2

#include <iostream>

int main()
{
	char a[3][9] = { "BBQWORLD","KFCAPPLE" ,"LOT" };
	char d = 0;
	std::cin >> d;
	int count = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			if (a[i][j] == d)
			{
				count++;
			}
		}
	}
	std::cout << count;
}

//문제 7번
//main 함수에서 3 x 3 배열을 만들고 Magic이라는 함수로 배열을 보내주세요(함수호출)
//magic함수에서 아래와 같이 중첩 2중for문을 돌려 배열을 채워주세요
//1	2 3
//4	5
//6
//이제 output함수에서 3 x 3배열을 출력 해 주세요
//이때 빈칸은 " "공백으로 바꾸어서 출력 해 주세요
//출력결과
//출력 예시
//123
//45
//6

#include <iostream>

void magic(int(*_a)[3])
{
	int a = 1;
	int Xidx = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = Xidx; j < 3; j++)
		{
			_a[i][j] = a;
			a++;
		}
		Xidx++;
	}
}

void output(int(*_a)[3])
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_a[i][j] == '\0')
			{
				std::cout << " ";
			}
			else
			{
				std::cout << _a[i][j];
			}
		}
		std::cout << "\n";
	}
}

int main()
{
	int arr[3][3] = {};
	magic(arr);
	output(arr);
}

//문제 8번
//세 문장을 입력받고, 문장의 길이를 출력하는 프로그램을 만들고자 합니다
//main함수
//- 세 문장을 저장할 수 있는 3 x 10 배열을 만들고, 이곳에 세 문장을 입력 받으세요
//- CountLine함수에 문장배열을 넘겨주세요
//CountLine함수
//- 전달받은 문장배열에 있는 세 문장의 길이를 구한 후, 문장과 길이를 출력 해 주세요
//입력 예시
//DATA
//TOPCON
//BBQ
//출력 예시
//4 = DATA
//6 = TOPCON
//3 = BBQ

#include <iostream>

void countline(char(*_a)[10], char* _b, char* _c, char* _d)
{
	int count[3] = {};
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (_a[j][i] == '\0')
			{
				count[j] = i;
				break;
			}
		}
	}
	std::cout << count[0] << "=" << _b << "\n";
	std::cout << count[1] << "=" << _c << "\n";
	std::cout << count[2] << "=" << _d;
}

int main()
{
	char a[3][10] = {};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> a[i];
	}
	countline(a, a[0], a[1], a[2]);
}

//문제 9번
//최대 5글자인 문장 4개를 입력받아주세요(2차배열에 입력받아주세요)
//입력받은 문장에서 알파벳 A, B가 모두 존재하면 "대발견" 출력
//알파벳 A, B중 하나만 존재하면 "중발견" 출력
//알파벳 A, B가 모두 존재하지 않으면 "미발견" 출력
//입력 예시
//SHOW
//YOUR
//JASON
//DATA
//출력 예시
//중발견

#include <iostream>

int main()
{
	char arr2d[4][5] = {};
	int A = 0;
	int B = 0;
	int C = 0;
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr2d[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (arr2d[i][j] == 'A')
			{
				A = 1;
			}
			else if (arr2d[i][j] == 'B')
			{
				B = 1;
			}
		}
	}
	if (A == 1 && B == 1)
	{
		std::cout << "대발견";
	}
	else if (A == 1 || B == 1)
	{
		std::cout << "중발견";
	}
	else
	{
		std::cout << "미발견";
	}
}

//문제 10번
//2차배열에 두 문장을 입력받아주세요(최대 5글자)
//그리고 12칸짜리 1차원 char배열을 선언 해 주세요
//입력받은 두 문장을 1차원 배열에 옮긴 후 출력 해 주세요
//ex) "World", "BBQ" 이렇게 두 문장을 2차배열에 입력받았다면
//아래와 같이 1차배열로 문장을 옮겨 적어주면 됩니다
//W o r l d B B	Q \0
//[HINT] 먼저 두 문장의 길이를 먼저 구해야 합니다
//그리고 for문을 각각 돌려 1차배열에 값을 채우면 됩니다
//입력 예시
//World
//BBQ
//출력 예시
//WorldBBQ

#include <iostream>

int main()
{
	char arr2d[2][5] = {};
	std::cin >> arr2d[0];
	std::cin >> arr2d[1];
	char arr[12] = {};
	int arr2d1len = 0;
	int arr2d2len = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arr2d[0][i] != '\0')
		{
			arr2d1len++;
		}
		if (arr2d[1][i] != '\0')
		{
			arr2d2len++;
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		if (i < arr2d1len)
		{
			arr[i] = arr2d[0][i];
		}
		else if (arr2d1len <= i && i <= arr2d1len + arr2d2len)
		{
			arr[i] = arr2d[1][i - arr2d1len];
		}
		else
		{
			break;
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		std::cout << arr[i];
	}
}

//문제 11번
//D	A T	A  W \0
//B	B Q	K \0 \0
//위와 같이 문장 2개를 2차배열에 하드코딩 해 주세요
//숫자 하나를 입력받습니다
//입력받은 숫자가 홀수면 윗줄을 정렬하고
//입력받은 숫자가 짝수면 아랫줄을 정렬 해 주세요
//ex) 만약 1을 입력받았다면 홀수이므로 윗줄만 정렬해야 합니다
//입력 예시
//3
//출력 예시
//AADTW
//BBQK

#include <iostream>

int main()
{
	char arr2d[2][6] =
	{
		"DATAW",
		"BBQK"
	};
	int a = 0;
	std::cin >> a;
	int mod = a % 2;
	if (mod == 1)
	{
		for (size_t i = 0; i < 6; i++)
		{
			for (size_t j = i + 1; j < 6; j++)
			{
				if (arr2d[0][i] > arr2d[0][j])
				{
					int c = arr2d[0][i];
					arr2d[0][i] = arr2d[0][j];
					arr2d[0][j] = c;
				}
			}
		}
	}
	else
	{
		for (size_t i = 0; i < 6; i++)
		{
			for (size_t j = i + 1; j < 6; j++)
			{
				if (arr2d[1][i] > arr2d[1][j])
				{
					int c = arr2d[1][i];
					arr2d[1][i] = arr2d[1][j];
					arr2d[1][j] = c;
				}
			}
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			std::cout << arr2d[i][j];
		}
		std::cout << "\n";
	}
}

//문제 12번
//아래와 같은 문장을 하드코딩 해 주세요
//P	O T	I O	\0
//A	B C	D E	\0
//Y	O U	R E	\0
//그리고 변수 a, b에 숫자 2개를 입력받아주세요
//각 문장에서 a ~b에 해당하는 칸의 글자를 뽑아내어 출력 하시면 됩니다
//(2중 for문을 이용하세요, a <= b)
//만약 1 ~3을 입력하였다면 1번칸 ~3번칸에 해당하는 글자들을 뽑으면 됩니다
//P	O T	I O	\0
//A	B C	D E	\0
//Y	O U	R E	\0
//출력결과 : OTIBCDOUR
//입력 예시
//1 3
//출력 예시
//OTIBCDOUR

#include <iostream>

int main()
{
	char arr2d[3][6] =
	{
		"POTIO",
		"ABCDE",
		"YOURE"
	};
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = a; j <= b; j++)
		{
			std::cout << arr2d[i][j];
		}
	}
}

//문제 13번
//char 변수 2개를 만들고 문자 2개를 입력받아주세요
//그리고 그 문자를 가르키는 포인터 2개를 만들어주세요
//포인터만을 이용하여 두개의 char변수를 SWAP 하고 출력 해 주세요
//입력 예시
//D A
//출력 예시
//A D

#include <iostream>

int main()
{
	char A = 0;
	std::cin >> A;
	char B = 0;
	std::cin >> B;
	char* pA = &A;
	char* pB = &B;
	int c = *pA;
	*pA = *pB;
	*pB = c;
	std::cout << A << " ";
	std::cout << B;
}

//문제 14번
//두 문장을 하나의 이차배열에 입력받아주세요(최대 8글자)
//두 문장에서 같은 index에 있지만 다른 글자가 몇개인지 Counting 하여 출력 해 주세요
//만약 "BackLog" "BackBt" 두 문장을 입력받았다면 다른 글자는 총 3글자 입니다
//B	a c	k L	o g
//B	a c	k B	t
//입력 예시
//BackLog
//BackBt
//출력 예시
//3

#include <iostream>

int main()
{
	char arr2d[2][8] = {};
	std::cin >> arr2d[0];
	std::cin >> arr2d[1];
	int count = 0;
	for (size_t j = 0; j < 8; j++)
	{
		if (arr2d[0][j] != arr2d[1][j])
		{
			count++;
		}
	}
	std::cout << count;
}