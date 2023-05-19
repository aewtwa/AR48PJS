//문제 1번
//출력 결과
//HELLO WORLD

#include <iostream>

int main()
{
	std::cout << "HELLO WORLD";
}

//문제 2번
//아래의 2차배열을 하드코딩 해 주세요
//* 하드코딩 : scanf 또는 cin 으로 입력 받지않고, 소스코드 안에 숫자를 직접 넣는 것을 뜻함
//5	1 4	2 6
//3	5 0	0 7
//9	9 8	3 1
//그리고 숫자 하나를 입력 받으세요
//2차 배열에 있는 값 중, 입력 받은 숫자보다 더 큰 숫자들이 몇 개 존재 하는지(> )
//출력 해 주세요.
//입력 예제
//8
//출력 결과
//2개

#include <iostream>

int main()
{
	int arr2d[3][5] =
	{
		{5,1,4,2,6},
		{3,5,0,0,7},
		{9,9,8,3,1}
	};

	int a = 0;
	std::cin >> a;
	int count = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (arr2d[i][j] > a)
			{
				count++;
			}
		}
	}
	std::cout << count << "개";
}

//문제 3번
//2차배열에 1부터 12까지 번호 순서대로 아래와 같이 채워주세요
//(2중 for문을 이용하세요)
//12	11	10	 9
//8	7	6	5
//4	3	2	1
//이제 숫자 한 개를 입력 받으세요
//만약 숫자 1을 입력 받으면 가장 윗줄을 숫자 7로 채우고 출력
//만약 숫자 2를 입력 받으면 중간줄을 숫자 7로 채우고 출력
//만약 숫자 3을 입력 받으면 가장 밑줄을 숫자 7로 채우고 출력
//입력 예제
//1
//출력 결과
//7 7 7 7
//8 7 6 5
//4 3 2 1

#include <iostream>

int main()
{
	int arr2d[3][4] = {};
	int a = 1;
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 3; j >= 0; j--)
		{
			arr2d[i][j] = a;
			a++;
		}
	}
	int b = 0;
	std::cin >> b;
	if (b == 1)
	{
		for (size_t i = 0; i < 4; i++)
		{
			arr2d[0][i] = 7;
		}
	}
	else if (b == 2)
	{
		for (size_t i = 0; i < 4; i++)
		{
			arr2d[1][i] = 7;
		}
	}
	else if (b == 3)
	{
		for (size_t i = 0; i < 4; i++)
		{
			arr2d[2][i] = 7;
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 4번
//민스아파트에는 아래와 같이 사람들이 살고 있습니다
//juso와 name이라는 배열을 하드코딩 해 주세요
//juso[8]
//402 401 302 301 202 201 102 101
//name[8][5]
//KIM TEA SOM OPPO TOM GDK HAME MIN
//이제 집 호수를 입력 받으세요(숫자 하나를 입력 받으세요)
//그리고 그 호수에 어떤 사람이 살고 있는지 출력 해 주세요
//입력 예제
//101
//출력 결과
//MIN

#include <iostream>

int main()
{
	int juso[8] = { 402,401,302,301,202,201,102,101 };
	char name[8][5] =
	{
		{'K','I','M'},
		{'T','E','A'},
		{'S','O','M'},
		{'O','P','P','O'},
		{'T','O','M'},
		{'G','D','K'},
		{'J','A','M','E'},
		{'M','I','N'}
	};
	int a = 0;
	std::cin >> a;
	int address = 0;
	for (size_t i = 0; i < 8; i++)
	{
		if (juso[i] == a)
		{
			address = i;
			break;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << name[address][i];
	}
}

//문제 5번
//숫자 3개를 변수 a, b, c에 입력 받으세요
//숫자 a에서부터 1씩 증가하는 숫자를 b개 만큼 출력 해 주세요
//이 것을 c번 반복해서 출력 해 주세요
//(배열을 사용하지 않고, 2중 for문으로 풀어주세요)
//ex) 만약 2 3 4를 입력 받았다면
//숫자 2에서부터 1부터 증가하는 숫자 3개를 출력하고, 이것을 4번 반복하면 됩니다
//2 3 4
//2 3 4
//2 3 4
//2 3 4
//입력 예제
//1 5 2
//출력 결과
//1 2 3 4 5
//1 2 3 4 5

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
		for (size_t j = 0; j < b; j++)
		{
			std::cout << a << " ";
			a++;
		}
		a = d;
		std::cout << "\n";
	}
}

//문제 6번
//1 x 9 배열을 0으로 초기화 해 주세요
//0	0 0	0 0	0 0	0 0
//그리고 start index와 end index를 입력 받으세요
//만약 2 5를 입력 받았다면 index 2 ~5까지 배열 값을 1 씩 증가 시키면 됩니다
//0	0 1	1 1	1 0	0 0
//값을 채울 start / end index를 총 3회 입력 받고,
//1 x 9 배열에 3회 값을 채운 결과를 출력 해 주세요
//입력 예제
//2 5
//2 5
//0 3
//출력 결과
//1 1 3 3 2 2 0 0 0

#include <iostream>

int main()
{
	int arr[9] = {};
	int startidx = 0;
	int endidx = 0;
	int arr2d[3][2] = {};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> startidx;
		arr2d[i][0] = startidx;
		std::cin >> endidx;
		arr2d[i][1] = endidx;
	}
	for (size_t j = 0; j < 3; j++)
	{
		for (size_t i = arr2d[j][0]; i <= arr2d[j][1]; i++)
		{
			arr[i]++;
		}
	}
	for (size_t i = 0; i < 9; i++)
	{
		std::cout << arr[i];
	}
}

//문제 7번
//위와 같은 구조체 타입을 정의하고, 구조체 변수 a, b를 선언 해 주세요
//2개의 구조체 변수에 들어갈 name, size, price를 입력 받으세요.
//그리고 name, size의 평균, price의 평균을 구해서 출력 해 주세요
//입력 예제
//MINS
//260
//30000
//DEV
//240
//50000
//출력 결과
//MINS, DEV
//AverageSize = 250
//AveragePrice = 40000

#include <iostream>

struct Product
{
	char name[5];
	int size;
	int price;
};

int main()
{
	Product a = {};
	Product b = {};
	std::cin >> a.name;
	std::cin >> a.size;
	std::cin >> a.price;
	std::cin >> b.name;
	std::cin >> b.size;
	std::cin >> b.price;
	std::cout << a.name << " , " << b.name << "\n";
	std::cout << "AverageSize = " << (a.size + b.size) / 2 << "\n";
	std::cout << "AveragePrice = " << (a.price + b.price) / 2;
}

//문제 8번
//문자 3개를 입력받고, 문자 3개를 가리키는 포인터 변수 3개를 만들어주세요
//그 다음, 포인터를 사용해서
//문자 3개중 가장 사전 순으로 뒤에 있는 문자를 찾아내고 출력 해 주세요
//입력 예제
//A A P
//출력 결과
//P

#include <iostream>

void maxprint(char* _a, char* _b, char* _c)
{
	if (*_a > *_b && *_a > *_c && *_b > *_c)
	{
		std::cout << *_a;
	}
	else if (*_b > *_c && *_b > *_a && *_c > *_a)
	{
		std::cout << *_b;
	}
	else if (*_c > *_a && *_c > *_b && *_a > *_b)
	{
		std::cout << *_c;
	}
}

int main()
{
	char A = 0;
	std::cin >> A;
	char B = 0;
	std::cin >> B;
	char C = 0;
	std::cin >> C;
	char* pA = &A;
	char* pB = &B;
	char* pC = &C;
	maxprint(&A, &B, &C);
}

//문제 9번
//2차 배열에 있는 숫자들을 정렬하고자 합니다
//숫자 6개를 입력받고 2 x 3 배열에 넣어주세요
//2차 배열에 있는 숫자들을 정렬하기 위해서는 먼저 1 x 6 배열을 준비한 다음
//아래와 같이 하면 됩니다
//최종적으로 만들어진 정렬된 2차배열을 출력 해 주세요
//입력 예제
//5 3 6
//1 3 2
//출력 결과
//1 2 3
//3 5 6

#include <iostream>

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
	int arr[6] = {};
	int arridx = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			arr[arridx] = arr2d[i][j];
			arridx++;
		}
	}
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = i + 1; j < 6; j++)
		{
			if (arr[i] > arr[j])
			{
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		arr2d[0][i] = arr[i];
		arr2d[1][i] = arr[i + 3];
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 10번
//F R Q W T
//G A S Y Q
//A S A D B
//위와 같이 2차배열을 하드코딩 해 주세요
//그리고 숫자 하나를 입력받고 숫자에 해당해는 칸을 for문을 돌려 출력 해 주세요
//입력 예제
//2
//출력 결과
//QSA

#include <iostream>

int main()
{
	char arr2d[3][6] =
	{
		"FRQWT",
		"GASYQ",
		"ASADB"
	};
	int a = 0;
	std::cin >> a;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (j == a)
			{
				std::cout << arr2d[i][j];
				break;
			}
		}
	}
}

//문제 11번
//A P P L E T
//위 정답을 하드코딩 해 주세요
//이 퀴즈 프로그램은 문자 5개를 입력 받고,
//몇 개를 맞췄는지 알려주는 프로그램입니다
//퀴즈 프로그램을 완성 해 주세요
//ex) 만약 A P Q 를 입력하였다면
//A - 1개, P - 2개를 맞추었으니, 총 3개를 맞추었습니다
//입력 예제
//P L M N Q
//출력 결과
//3개 맞추었습니다

#include <iostream>

int main()
{
	char arr1[6] = { 'A','P','P','L','E','T' };
	char arr2[5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr2[i];
	}
	int count = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (arr1[j] == arr2[i])
			{
				count++;
			}
		}
	}
	std::cout << count << "개 맞추었습니다.";
}

//문제 12번
//배열을 번호 순서대로 채운 후 출력 해주세요.
//ex)
//입력: 1        입력 : 5
//1  2 3  4     5 6  7  8
//8  7 6  5    12 11 10 9
//9 10 11 12   13 14 15 16
//16 15 14 13  20 19 18 17
//입력 예제
//1
//출력 결과
//1   2 3  4
//8   7 6  5
//9  10 11 12
//16 15 14 13

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int arr2d[4][4] = {};
	for (int i = 0; i < 4; i++)
	{
		int mod = i % 2;
		if (mod == 1)
		{
			for (int j = 3; j >= 0; j--)
			{
				arr2d[i][j] = a;
				a++;
			}
		}
		else
		{
			for (int j = 0; j < 4; j++)
			{
				arr2d[i][j] = a;
				a++;
			}
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