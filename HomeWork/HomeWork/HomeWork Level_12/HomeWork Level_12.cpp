//문제 1번
//문장을 입력 받고, 입력 받은 문장을 5번 출력 합니다(for문 이용)
//ex) 만약 "ABC"를 입력하셨다면 ABC를 5번 반복해서 출력하면 됩니다
//입력 예시
//CODING
//출력 예시
//CODING
//CODING
//CODING
//CODING
//CODING

#include <iostream>

int main()
{
	char a[256];
	std::cin >> a;
	for (int i = 0; i < 5; i++)
	{
		std::cout << a << "\n";
	}
}

//문제 2번
//문자열 2개를 char 배열 2개에 입력 받아주세요
//그리고 각 문자열의 길이를 출력 해 주세요
//ex) "ABCD", "BBQ"를 입력하셨다면 4와 3을 출력하시면 됩니다
//(문자열 길이 구할 때 break; 쓰는 것 잊지 마세요)
//[TIP] 문자열 하드코딩 하는 방법1 - 기존 방법
//char vect[5] = { 'A', 'B', 'C', 'D', '\0' };
//이렇게 한 글자씩 넣을 수 있습니다
//맨 마지막에 추가한 '\0' 이라는 문자는 NULL문자(널문자)라고 합니다.
//문장의 끝을 나타내는 문자 입니다
//C언어 규칙에 따라 문자열 마지막에는 NULL문자가 있어야 된 다는 것을 알아두세요
//[TIP] 문장 하드코딩 하는 방법2 - 더 쉬운 방법
//char vect[5] = "ABCD";
//이렇게 하게 되면 문자열 끝에 NULL문자가 자동으로 들어갑니다
//만약 "BBQ" 라는 문자열을 하드코딩하려면 배열 4칸짜리를 만들어야 합니다.
//만약 "ABCDE"라는 문자열을 하드코딩하려면 배열 6칸짜리를 만들어야 합니다.
//char vect[3] = "BBQ";  //버그발생 : NULL문자 넣을 공간이 없음
//char vect[4] = "BBQ";  //정상 소스코드
//입력 예시
//ABCD
//BBQ
//출력 예시
//4 3

#include <iostream>

int main()
{
	char a[256];
	std::cin >> a;
	char b[256];
	std::cin >> b;
	int check = 0;
	for (int i = 0; i < 256; i++)
	{
		if (a[i] == '\0')
		{
			check = i;
			break;
		}
	}
	std::cout << check;
	for (int i = 0; i < 256; i++)
	{
		if (b[i] == '\0')
		{
			check = i;
			break;
		}
	}
	std::cout << check;
}

//문제 3번
//하나의 숫자를 입력 받아 주세요. 2중 for문을 이용하여 아래와 같이 출력 해 주세요.
//* 배열을 사용하지 말아주세요.
//4를 입력받았다면
//4444
//3333
//2222
//1111
//을 출력 해 주세요.
//9를 입력받았다면
//9999
//8888
//7777
//6666
//을 출력 해 주세요.
//입력 예시
//4
//출력 예시
//4444
//3333
//2222
//1111

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << a;
		}
		std::cout << "\n";
		a--;
	}
}

//문제 4번
//한 개의 숫자를 입력받고, 2중 for문을 이용하여 아래와 같이 출력 해 주세요.
//(입력 받은 숫자만큼 라인을 출력 해 주세요)
//4를 입력 했을 경우
//123
//123
//123
//123
//을 출력 해 주세요.
//3을 입력했을 경우
//123
//123
//123
//을 출력 해 주세요.
//* 배열을 사용 안하고, 2중 for문으로 풀어주세요
//입력 예시
//4
//출력 예시
//123
//123
//123
//123

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int c = 1;
	for (int i = 0; i < a; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			std::cout << c;
			c++;
		}
		c = 1;
		std::cout << "\n";
	}
}

//문제 5번
//숫자 하나를 입력받으세요
//그리고 2차배열에 아래와 같은 모양으로 값을 채운 후 출력 해 주세요
//ex) 만약 숫자 1을 입력받았다면 숫자 1부터 값을 아래와 같은 모양으로 채워주세요
//    1 2
//  3 4 5
//6 7 8 9
//그리고 이렇게 출력 됩니다
//ex) 만약 숫자 2를 입력받았다면 숫자 2부터 값을 아래와 같은 모양으로 채워주세요
//    2 3
//  4 5 6
//7 8 9 10
//그리고 이렇게 출력 됩니다
//* 빈칸은 띄어쓰기로 바꾸어서 출력 해 주세요
//[힌트]  만약에 출력할 내용이 0이라면 띄어쓰기로 출력하고, 그렇지 않다면 배열 값 출력
//* 주의 : 배열 안에 띄어쓰기를 넣는 것이 아닙니다.
//(int형 2차 배열 안에 문자 ' '를 넣지 말아주세요)
//입력 예시
//1
//출력 예시
//  12
// 345
//6789

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int Xidx = 2;
	int arr2d[3][4] = {};
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = Xidx; j < 4; j++)
		{
			arr2d[i][j] = a++;
		}
		Xidx--;
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr2d[i][j] == 0)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << arr2d[i][j];

			}
		}
		std::cout << "\n";
	}
}

//문제 6번
//전역배열에 아래와 같은 문장을 하드코딩 해 주세요
//M	I N	Q U	E S	T
//그리고 Length함수를 만들어주세요
//Length함수 : 문자 하나를 받아서, 그 문자가 있는 배열의 index를 return 해주는 함수.
//main함수에서 문자 3개를 입력 받고 Length함수를 3번 호출해서
//각 단어들이 몇 번째 index에 있는지 각각 출력 해 주는 프로그램을 작성 해 주세요
//입력 예시
//M
//S
//T
//출력 예시
//M = 0
//S = 6
//T = 7

#include <iostream>

char arr[9] = "MINQUEST";

int length(char _a)
{
	for (size_t i = 0; i < 9; i++)
	{
		if (arr[i] == _a)
		{
			return i;
		}
	}
}

int main()
{
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	char c;
	std::cin >> c;
	std::cout << a << "=" << length(a) << "\n";
	std::cout << b << "=" << length(b) << "\n";
	std::cout << c << "=" << length(c);
}

//문제 7번
//문자열 한개를 입력받으세요 최대 10글자입니다
//그리고 문자 3개를 추가로 더 입력받으세요
//세 문자가 각각 문장에서 몇 개 존재하는지 출력하시면 됩니다
//(문자열의 길이를 먼저 구해야 합니다.문자열의 길이를 구할 때 break 잊지 마세요)
//입력 예시
//ABCAA12341
//A
//1
//C
//출력 예시
//A = 3
//1 = 2
//C = 1

#include <iostream>

int main()
{
	char a[11] = {};
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	char c = 0;
	std::cin >> c;
	char d = 0;
	std::cin >> d;
	int bcount = 0;
	int ccount = 0;
	int dcount = 0;
	for (size_t i = 0; i < 10; i++)
	{
		if (a[i] == b)
		{
			bcount++;
		}
		else if (a[i] == c)
		{
			ccount++;
		}
		else if (a[i] == d)
		{
			dcount++;
		}
	}
	std::cout << b << "=" << bcount << "\n";
	std::cout << c << "=" << ccount << "\n";
	std::cout << d << "=" << dcount;
}

//문제 8번
//아래와 같은 "DATAPOWER"라는 문장을 하드코딩 해 주세요
//D	A T	A P	O W	E R
//그리고 숫자 2개를 변수 a, b에다가 입력 받으세요(a <= b)
//9칸짜리 문자 배열을 하나 더 만들고
//변수 a ~변수 b 까지 index에 해당하는 문자들을 새로운 배열에 값을 옮겨주세요
//ex) 만약 3 6 이렇게 입력하셨다면
//3번 index ~6번 index의 값을 아래와 같이 새로운 배열에 값을 채우면 됩니다
//A	P O	W
//채운값을 출력 해 주세요
//입력 예시
//3 6
//출력 예시
//APOW

#include <iostream>

int main()
{
	char arr1[10] = "DATAPOWER";
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	char arr2[9] = {};
	int arr2idx = 0;
	for (size_t i = a; i <= b; i++)
	{
		arr2[arr2idx] = arr1[i];
		arr2idx++;
	}
	for (int i = 0; i < 9; i++)
	{
		std::cout << arr2[i];
	}
}

//문제 9번
//3 x 3 배열을 0으로 초기화 해 주세요
//문자 1개를 입력 받으세요
//만약 그 문자가 '0' ~'9' 사이의 문자라면
//6 5 4
//  3 2
//    1
//이렇게 채워주세요
//그리고 그 문자가 대문자라면
//6
//4	5
//1	2 3
//이렇게 채워주세요
//* 빈칸은 띄어쓰기로 바꾸어서 출력 해 주세요
//[힌트]
//만약에 출력할 내용이 0이라면 띄어쓰기로 출력하고,
//그렇지 않다면 배열 값 출력
//ex) 만약 7 을 입력하셨다면
//이렇게 출력 해 주세요
//입력 예시
//D
//출력 예시
//6
//45
//123

#include <iostream>

int main()
{
	int arr2d[3][3] = {};
	char a = 0;
	std::cin >> a;
	int b = 6;
	int Xidx = 0;
	if ('0' <= a && a <= '9')
	{
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = Xidx; j < 3; j++)
			{
				arr2d[i][j] = b--;
			}
			Xidx++;
		}
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 3; j++)
			{
				if (arr2d[i][j] == '\0')
				{
					std::cout << " ";
				}
				else
				{
					std::cout << arr2d[i][j];
				}
			}
			Xidx++;
			std::cout << "\n";
		}
	}
	if ('A' <= a && a <= 'Z')
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = Xidx; j >= 0; j--)
			{
				arr2d[i][j] = b--;
			}
			Xidx++;
		}
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 3; j++)
			{
				if (arr2d[i][j] == '\0')
				{
					std::cout << " ";
				}
				else
				{
					std::cout << arr2d[i][j];
				}
			}
			Xidx++;
			std::cout << "\n";
		}
	}
}

//문제 10번
//숫자1개와 문자 1개를 입력받아주세요
//그리고 5 x 5 배열을 0으로 초기화 해 주세요
//아래와 같이 해당 숫자에 해당하는 줄에 문자들로 한 줄 채워주시면 됩니다
//그리고 빈 공간은 모두 0으로 바꾸어서 출력하시면 됩니다
//ex) 만약 5 A를 입력받았다면 이렇게 출력 해 주세요
//[TIP] 1중 for문으로 풀어야 할지 2중 for문을 써야 할지 고민해보셔야 합니다.
//위 문제는 문자를 5개를 채우는 문제이고, 5번만 반복하면 됩니다.
//입력 예시
//5 A
//출력 예시
//00000
//00000
//00000
//00000
//EDCBA

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	int arr[5][5] = {};
	a = a - 1;
	for (int j = 4; j >= 0; j--)
	{
		arr[a][j] = b++;
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0)
			{
				arr[i][j] = '0';
			}
			std::cout << (char)(arr[i][j]);
		}
		std::cout << "\n";
	}
}

//문제 11번
//NODE 라는 구조체 Type을 만들어주세요
//구조체 Type 변수 ta, tb를 만드세요
//ta.x와 tb.x 에 각각 숫자를 입력받아주세요(숫자 2개 입력)
//ta.y에는 ta.x + 5 값을 채워주세요
//tb.y에는 tb.x - 5 값을 채워주세요
//그리고 각각의 값들을 출력 해 주세요
//입력 예시
//3 5
//출력 예시
//ta.x = 3
//ta.y = 8
//tb.x = 5
//tb.y = 0

#include <iostream>

struct NODE
{
	int x;
	int y;
};

int main()
{
	NODE ta = {};
	std::cin >> ta.x;
	NODE tb = {};
	std::cin >> tb.x;
	ta.y = ta.x + 5;
	tb.y = tb.x - 5;
	std::cout << "ta.x = " << ta.x << "\n";
	std::cout << "ta.y = " << ta.y << "\n";
	std::cout << "tb.x = " << tb.x << "\n";
	std::cout << "tb.y = " << tb.y;
}

//문제 12번
//int형 변수 a, b를 만들고 숫자 2개를 입력 받아주세요
//char형 변수 c, d를 만들고 문자 2개를 입력 받아주세요
//이제 Pointer 변수 4개를 만들고 각각 가르켜주세요(pointing)
//이제 p1 ~p4만을 이용해서 문제를 푸시면 됩니다
//p3가 가르키고 있는 값을, p1이 가르키는 값 만큼 반복해서 출력 하시면 됩니다
//p4가 가르키고 있는 값을, p2이 가르키는 값 만큼 반복해서 출력 하시면 됩니다
//ex) 예로들어 3 5 A B 를 입력받았다면
//pointer를 이용하여 A를 3번 출력
//pointer를 이용하여 B를 5번 출력
//[HINT] 포인터의 기능
//포인터는 어떤 변수를 가르키고 있으면, 가르키고 있는 변수 값을 읽거나 바꿀 수 있습니다
//이렇게 포인터는 가르키고 있는 값을 원격조정을 할 수 있는 능력을 가지고 있지요
//이러한 포인터의 능력을 사용해서 문제를 풀어보세요
//입력 예시
//1 3
//A B
//출력 예시
//A
//BBB

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	char c = 0;
	std::cin >> c;
	char d = 0;
	std::cin >> d;
	int* p1 = &a;
	int* p2 = &b;
	char* p3 = &c;
	char* p4 = &d;
	for (size_t i = 0; i < *p1; i++)
	{
		std::cout << *p3;
	}
	std::cout << "\n";
	for (size_t i = 0; i < *p2; i++)
	{
		std::cout << *p4;
	}
}

//문제 13번
//아래와 같은 전역배열 하드코딩 해 주세요
//D	A D
//Q	W Q
//A	S D
//A	S D
//main함수에서 문자 하나를 입력받고 find함수로 보내주세요
//find함수는 전역배열에 전달 받은 문자가 존재하는지 확인 후 출력하는 함수입니다
//- 만약 존재한다면 "존재" 출력
//- 만약 존재하지 않다면 "없음" 출력
//입력 예시
//A
//출력 예시
//존재

#include <iostream>

char arr2d[4][3] =
{
	{'D','A','D'},
	{'Q','W','Q'},
	{'A','S','D'},
	{'A','S','D'}
};

void find(char _a)
{
	int flag = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr2d[i][j] == _a)
			{
				std::cout << "존재";
				return;
			}
		}
	}
	std::cout << "없음";
}

int main()
{
	char a;
	std::cin >> a;
	find(a);
}

//문제 14번
//5 x 5 배열을 만들고 전부 0으로 초기화 시켜주세요
//숫자 1개를 입력받으세요
//그리고 그 숫자로 2차배열의 테두리를 채워주세요
//(1중 for문을 4번써서 테두리를 채워주시면 됩니다)
//ex) 만약 숫자 5를 입력받았다면
//5	5 5	5 5
//5	      5
//5	      5
//5	      5
//5	5 5 5 5
//* 빈칸은 언더바('_') 로 바꾸어서 출력 해 주세요
//입력 예시
//5
//출력 예시
//55555
//5___5
//5___5
//5___5
//55555

#include <iostream>

int main()
{
	int arr[5][5] = {};
	int a = 0;
	std::cin >> a;
	for (size_t i = 0; i < 5; i++)
	{
		arr[0][i] = a;
	}
	for (size_t i = 0; i < 5; i++)
	{
		arr[4][i] = a;
	}
	for (size_t i = 0; i < 5; i++)
	{
		arr[i][0] = a;
	}
	for (size_t i = 0; i < 5; i++)
	{
		arr[i][4] = a;
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0)
			{
				std::cout << "_";
			}
			else
			{
				std::cout << arr[i][j];
			}
		}
		std::cout << "\n";
	}
}

//문제 15번
//0~9까지 저장될 수 있는 마법의 현황판이 있습니다
//아래와 같은 2차배열을 하드코딩 해 주세요
//4	5 4	5 4
//8	9 8	9 8
//1	2 1	2 1
//4	5 4	5 4
//6	7 6	7 6
//이제(y, x)좌표를 5번 입력받습니다.
//* 주의 : (y축, x축) 순서대로 입력받습니다
//입력받을 때 마다 해당 좌표에 있는 값을 1씩 더해 주세요.
//이 현황판의 숫자가 10 이 되면 다시 0으로 바뀌어야 합니다.
//ex) 만약
//(0, 0) 을 3번 선택하고
//(1, 1) 을 1번 선택하고
//(1, 2) 를 1번 선택했다면 아래와 같이 값이 바뀌어야 합니다
//7	5 4	5 4
//8	0 9	9 8
//1	2 1	2 1
//4	5 4	5 4
//6	7 6	7 6
//입력 예시
//0 0
//0 0
//0 0
//1 1
//1 2
//출력 예시
//75454
//80998
//12121
//45454
//67676

#include <iostream>

int main()
{
	int arr[5][5] =
	{
		{4,5,4,5,4},
		{8,9,8,9,8},
		{1,2,1,2,1},
		{4,5,4,5,4},
		{6,7,6,7,6}
	};
	int y = 0;
	int x = 0;
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> y;
		std::cin >> x;
		arr[y][x]++;
		if (arr[y][x] == 10)
		{
			arr[y][x] = 0;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << "\n";
	}
}

//문제 16번
//main함수에서 vect[100]을 선언 해 주세요.
//1. 임의의 문장 하나를 입력받고 그 문장 길이를 구해주세요.
//2. 그리고 문장의 맨 마지막 문자가 문장안에 총 몇개 있는지 counting 하고 출력 해 주세요.
//- 대 / 소문자를 구분합니다.
//ex) Test
//4
//1
//ex) coffee
//6
//2
//ex) HarryPotter
//11
//3
//입력 예시
//HarryPotter
//출력 예시
//11
//3

#include <iostream>

int main()
{
	char vect[100] = {};
	std::cin >> vect;
	int lastidx = 0;
	int count = 0;
	for (size_t i = 0; i < 100; i++)
	{
		if (vect[i] == '\0')
		{
			std::cout << i;
			lastidx = i - 1;
			break;
		}
	}
	std::cout << "\n";
	for (size_t i = 0; i < 100; i++)
	{
		if (vect[i] == vect[lastidx])
		{
			count++;
		}
	}
	std::cout << count;
}

//문제 17번
//문자열 3개를 입력받으세요
//세 문장 중 가장 긴 문장을 출력 해 주세요
//ex) 예로들어
//MINCODING
//ABC
//Quest
//이렇게 세 문자열이 입력되면 "MINCODING"을 출력하시면 됩니다
//[힌트]
//일단 각 문자열의 길이를 각각 구합니다.
//세 문자열의 길이 중 가장 긴 길이를 찾아, 그 길이에 해당하는 문자열을 출력
//입력 예시
//BBQ
//MINCODING
//KFC
//출력 예시
//MINCODING

#include <iostream>

int main()
{
	char a[256];
	std::cin >> a;
	char b[256];
	std::cin >> b;
	char c[256];
	std::cin >> c;
	int alen = 0;
	int blen = 0;
	int clen = 0;
	for (size_t i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
		{
			alen = i;
			break;
		}
	}
	for (size_t i = 0; i < 100; i++)
	{
		if (b[i] == '\0')
		{
			blen = i;
			break;
		}
	}
	for (size_t i = 0; i < 100; i++)
	{
		if (c[i] == '\0')
		{
			clen = i;
			break;
		}
	}
	if (alen > blen && blen > clen && alen > clen)
	{
		std::cout << a;
	}
	else if (blen > clen && clen > alen && blen > alen)
	{
		std::cout << b;
	}
	else if (clen > alen && alen > blen && clen > blen)
	{
		std::cout << c;
	}
}

//문제 18번
//2차원 배열(3x3)을 하나 만들어 주세요.
//그리고 숫자 하나를 입력 받아 주세요.
//만약 1을 입력 받았다면 아래의 규칙과 같이 배열을 채워주고 출력 해 주세요.
//빈칸은 0으로 처리 해 주세요.
//ex)1
//001
//023
//456
//ex)4
//004
//056
//789
//입력 예시
//1
//출력 예시
//001
//023
//456

#include <iostream>

int main()
{
	int arr2d[3][3] = {};
	int a;
	std::cin >> a;
	int xidx = 2;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = xidx; j < 3; j++)
		{
			arr2d[i][j] = a;
			a++;
		}
		xidx--;
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j];
		}
		std::cout << "\n";
	}
}