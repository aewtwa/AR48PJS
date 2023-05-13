//문제 1번
//숫자 1개를 변수 n에 입력 받아 주세요.
//그리고 1부터 n까지
//while을 이용해서 출력 해 주세요.
//입력 예시
//10
//출력 예시
//1 2 3 4 5 6 7 8 9 10

#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int i = 1;
	while (i <= n)
	{
		std::cout << i;
		i++;
	}
}

//문제 2번
//숫자 6개를 배열에 입력 받으세요.
//그리고 for문을 이용하여 0번 index 부터 5번 index까지
//배열 안에 있는 값을 하나씩 출력합니다.
//그러다가 만약 출력할 값이 7이 나온다면 중단(break)를 시킵니다.
//만약 3 4 1 6 7 1 을 입력 받았다면
//숫자 7 전 까지 출력해야 하기 때문에 3 4 1 6을 출력하면 됩니다.
//(주의 : 숫자 7은 출력 되지 않습니다, for문으로 풀어주세요)
//입력 예시
//3 4 1 6 7 1
//출력 예시
//3 4 1 6

#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == 7)
		{
			break;
		}
		std::cout << arr[i] << " ";
	}
}

//문제 3번
//input 함수와 output함수를 만들어 주세요.
//input 함수에서는 숫자 2개를 전역 변수에 입력 받습니다.
//output 함수에서는 5 부터, 입력받은 두 수의 합까지 while을 돌려 출력 해 주세요.
//입력 예시
//3 4
//출력 예시
//5 6 7

#include <iostream>

int a;
int b;
void input()
{
	std::cin >> a;
	std::cin >> b;
}

void output()
{
	int i = 5;
	while (i <= a + b)
	{
		std::cout << i << " ";
		i++;
	}
}

int main()
{
	input();
	output();
}

//문제 4번
//숫자 6개를 배열에 입력 받습니다.
//맨 마지막 칸부터 숫자 7이 나올 때 까지 출력 하면 됩니다.
//(주의 : for문을 돌려 숫자 7을 포함해서 출력 해 주세요)
//만약 1 2 7 4 9 6을 입력 받았다면
//6 9 4 7 을 출력 해 주셔야 합니다.
//입력 예시
//1 2 7 4 9 6
//출력 예시
//6 9 4 7

#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (int j = 5; j >= 0; j--)
	{
		std::cout << arr[j] << " ";
		if (arr[j] == 7)
		{
			break;
		}
	}
}

//문제 5번
//아래의 배열을 하드코딩 해 주세요.
//3 4 1 6 7 5
//for문을 쓰지말고
//while을 이용하여 모두 출력 해 주세요.
//출력 예시
//3 4 1 6 7 5

#include <iostream>

int main()
{
	int arr[6] = { 3,4,1,6,7,5 };
	int i = 0;
	while (i < 6)
	{
		std::cout << arr[i] << " ";
		i++;
	}
}

//문제 6번
//전역배열로 3 x 4 배열을 만들어주세요.
//1. input함수에서 아래와 같이 처리 해주세요
//- 숫자 1개 입력받기
//- 입력받은 숫자부터 1씩 증가되는 값으로 배열에 채우기
//ex) 숫자 2를 입력받았다면 input함수에서
//2	3 4	5
//6	7 8	9
//10 11	12	13
//이렇게 배열에 값을 채우면 됩니다.
//2. process함수에서 배열에 모두 1씩 더해주세요
//(배열에 있는 모든 숫자들을 1씩 더하면 됩니다)
//3. output함수에서 2차배열 값을 모두 출력 해 주세요
//입력 예시
//2
//출력 예시
//3 4 5 6
//7 8 9 10
//11 12 13 14

#include <iostream>
int arr[3][4] = {};
void input()
{
	int a;
	std::cin >> a;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = a;
			a++;
		}
	}
}
void process()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x]++;
		}
	}
}
void output()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cout << arr[y][x] << " ";
		}
		std::cout << "\n";
	}
}
int main()
{
	input();
	process();
	output();
}

//문제 7번
//1차배열을 아래와 같이 2개를 만들고 하드코딩 해 주세요.
//B	D 5	Q A
//Q
//E
//R
//E
//F
//input 함수에서 문자 1개를 입력받아주세요
//output함수에서 아래와 같이 처리해주세요
//- 만약 입력받은 문자가 소문자라면 첫번째 배열을 출력
//- 만약 입력받은 문자가 대문자라면 두번째 배열을 출력
//- 만약 입력받은 문자가 숫자라면 H~A까지 출력("HGFEDCBA" 출력)
//입력 예시
//a
//출력 예시
//BD5QA

#include <iostream>
char arr1[5] = { 'B','D','5','Q','A' };
char arr2[5] = { 'Q','E','R','E','F' };
char a;
void input()
{
	std::cin >> a;
}
int b = 'A' - 'a';
void output()
{
	if ('a' <= a && a <= 'z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr1[i];
		}
	}
	if ('A' <= a && a <= 'Z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr2[i];
		}
	}
	if ('0' <= a && a <= '9')
	{
		std::cout << "HGFEDCBA";
	}

}

int main()
{
	input();
	output();
}

//문제 8번
//#	_ #	_ #	#
//위와 같이 배열을 만들고 하드코딩 해 주세요
//그리고 for문을 돌려 배열의 값을 하나씩 탐색하는데
//그 값이 '#' 이라면 "샵"이라는 글자를 출력
//그 값이 '-' 이라면 "무" 라는 글자를 출력
//따라서 결과는 이렇게 됩니다.
//샵무샵무샵샵
//우리는 코딩 실력을 늘리기 위해 공부를 하고 있습니다~
//모든 소스코드는 다 지우고 처음부터 작성 해 주세요
//출력 예시
//샵무샵무샵샵

#include <iostream>

int main()
{
	char arr[6] = { '#','_','#','_','#','#' };
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == '#')
		{
			std::cout << "샵";
		}
		else if (arr[i] == '_')
		{
			std::cout << "무";
		}
	}
}

//문제 9번
//2차원배열 2 x 3 사이즈로 선언 해주세요
//input함수에서 각 배열에 숫자를 입력받아주세요.
//process함수에서 각 배열의 요소들의 합을 구해주세요(sum구하기)
//output함수에서 합을 출력 해 주세요
//ex) 만약 1 2 3 4 5 6을 입력하였다면
//1	2 3
//4	5 6
//이렇게 input함수에서 배열에 값을 채워주세요
//그리고 process에서 sum을 구한 후
//output에서 합을 출력 해 주세요
//출력결과 : 21
//입력 예시
//1 2 3 4 5 6
//출력 예시
//21

#include <iostream>
int arr[2][3] = {};
int sum = 0;
void input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> arr[i][j];
		}
	}
}

void process()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];
		}
	}
}

void output()
{
	std::cout << sum;
}

int main()
{
	input();
	process();
	output();
}

//문제 10번
//2차배열에 아래와 같이 배열을 만들고 하드코딩 해 주세요.
//4	3 1	1
//3	1 2	1
//0	0 1	2
//숫자를 하나 입력받으세요.
//이 숫자가 2차배열에 몇개가 존재하는지 Count를 한 후 출력 해 주세요.
//만약 1을 입력받았다면 "5개 존재합니다" 를 출력하면 됩니다.
//입력 예시
//1
//출력 예시
//5개 존재합니다

#include <iostream>

int main()
{
	int arr[3][4] =
	{
		{4,3,1,1},
		{3,1,2,1},
		{0,0,1,2}
	};
	int a;
	std::cin >> a;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == a)
			{
				count++;
			}
		}
	}
	std::cout << count << "개가 존재합니다.";
}

//문제 11번
//커피가격을 입력 받아주세요(숫자 하나를 입력받아주세요)
//그 커피가 3500 <= input <= 5000 이라면
//->starBox 함수를 호출 해 주세요
//그 커피가 2500 <= input < 3500 이라면
//->macDoll 함수를 호출 해 주세요
//위 조건이 모두 아니라면
//->copyBean 함수를 호출 해 주세요
//각 함수에 대한 설명
//- starBox() : 1 부터 20 사이의 홀수를 출력하는 함수(for문 이용)
//- macDoll() : H ~A까지 거꾸로 출력하는 함수(for문 이용)
//- copyBean() : -5 ~5까지 숫자를 출력하는 함수(for문 이용)
//ex) 만약 4800원을 입력받았다면
//startbox함수가 호출되어 1 3 5 7 9 11 13 15 17 19 가 출력되면 됩니다.
//ex) 만약 10000원을 입력받았다면
//copyBean함수가 호출되어 - 5 - 4 - 3 - 2 - 1 0 1 2 3 4 5 가 출력되면 됩니다.
//ex) 만약 2500원을 입력받았다면
//macDoll함수가 호출되어 H G F E D C B A 가 출력되면 됩니다.
//입력 예시
//4800
//출력 예시
//1 3 5 7 9 11 13 15 17 19

#include <iostream>
void starBox()
{
	int arr[20] = {};
	for (int i = 0; i < 19; i++)
	{
		arr[i] = i++ + 1;
		int mod = i % 2;
		if (mod == 1)
		{
			std::cout << i << " ";
		}
	}
}

void macDoll()
{
	char arr[8] = {};
	char a = 'H';
	for (int i = 0; i < 8; i++)
	{
		arr[i] = a;
		std::cout << a << " ";
		a--;
	}
}

void copyBean()
{
	for (int i = -5; i <= 5; i++)
	{
		std::cout << i << " ";
	}
}

int main()
{
	int input;
	std::cin >> input;
	if (3500 <= input && input <= 5000)
	{
		starBox();
	}
	else if (2500 <= input && input < 3500)
	{
		macDoll();
	}
	else
	{
		copyBean();
	}
}

//문제 12번
//for문을 돌려 6칸짜리 배열에 숫자 6개를 입력받아주세요
//그리고 다시 for문을 돌려 각 칸을 탐색 해 주세요.
//각 칸이 숫자 5보다 작다면(< ) "불합격"을 출력
//각 칸이 숫자 5보다 같거나 크다면(>= ) "합격"을 출력 하세요
//ex) 만약 숫자 8 1 4 7 8 2를 입력받았다면
//8	1	4	7	8	2
//이렇게 값을 채운 후 각 칸을 검사하여 합격 / 불합격을 출력하면 됩니다.
//출력 결과
//0번은 8점 합격
//1번은 1점 불합격
//2번은 4점 불합격
//3번은 7점 합격
//4번은 8점 합격
//5번은 2점 불합격
//입력 예시
//1 9 8 7 2 9
//출력 예시
//0번은 1점 불합격
//1번은 9점 합격
//2번은 8점 합격
//3번은 7점 합격
//4번은 2점 불합격
//5번은 9점 합격

#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] < 5)
		{
			std::cout << i << "번은 " << arr[i] << "점 불합격" << "\n";
		}
		else if (arr[i] >= 5)
		{
			std::cout << i << "번은 " << arr[i] << "점 합격" << "\n";
		}
	}
}

//문제 13번
//D	T A	B W	Q
//놀이동산에 친구들이 줄 서 있습니다. (위 배열을 하드코딩 해 주세요)
//친구의 이니셜 문자 하나를 입력받고, 그 친구가 몇 번째 Index에서 기다리고 있는지
//출력 해 주세요.
//ex) A를 입력받았다면 "2번 INDEX"를 출력하면 됩니다.
//입력 예시
//B
//출력 예시
//3번 INDEX

#include <iostream>

int main()
{
	char arr[6] = { 'D','T','A','B','W','Q' };
	char a;
	std::cin >> a;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == a)
		{
			std::cout << i << "번 INDEX";
		}
	}
}

//문제 14번
//5칸 char배열을 선언 해 주세요
//그리고 int형 변수 n에다가 숫자 1개를 입력받으세요(1 <= n <= 5)
//이제 n번 반복해서 n개의 문자를 배열에 입력(cin)받으면 됩니다.
//입력받은 배열 값만 모두 출력하세요
//ex) 만약 3을 입력받았으면 문자 3개를 더 입력받으셔야 합니다.
//3
//a b c
//이렇게 입력을 받았다면
//a	b c
//n에는 3이 들어가고, 위와 같이 배열에 값이 채워집니다.
//그런 후 다시 for문을 3번만 돌려 입력받은 문자를 출력하면 됩니다.
//출력결과 : abc
//입력 예시
//5
//a b c d e
//출력 예시
//abcde

#include <iostream>

int main()
{
	char arr[5] = {};
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i];
	}
}

//문제 15번
//17 칸의 긴 배열을 선언해주세요.
//input함수에서 문자 3개를 입력받아주세요
//- 0번 ~6번 index에 첫번째 문자를 채우고
//- 7번 ~12번 index에 두번째 문자를 채우고
//- 13번 ~16번 index에는 세번째 문자를 채워주세요
//이제, 16번 index에서 0번 index까지 거꾸로 출력해주시면 됩니다.
//ex) 만약 'A' 'B' 'C'를 입력받았다면
//A	A A	A A	A A	B B	B B	B B	C C	C C
//이렇게 값을 채운 후 뒤에서부터 출력 해 주시면 됩니다.
//"CCCCBBBBBBAAAAAAA"
//입력 예시
//A B C
//출력 예시
//CCCCBBBBBBAAAAAAA

#include <iostream>

char arr[17] = {};
char a;
char b;
char c;
void input()
{
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	for (int i = 0; i < 7; i++)
	{
		arr[i] = a;
	}
	for (int i = 7; i < 13; i++)
	{
		arr[i] = b;
	}
	for (int i = 13; i < 17; i++)
	{
		arr[i] = c;
	}
	for (int i = 16; i >= 0; i--)
	{
		std::cout << arr[i];
	}
}

int main()
{
	input();
}

//문제 16번
//대문자 2개와 숫자 1개를 입력받아주세요
//첫번째 대문자부터 두번째 대문자 까지 알파벳들을
//입력받은 숫자 만큼 반복해서 출력 해 주세요
//(첫번째 문자 < 두번째 문자)
//ex) 만약 A E 3 이라고 입력받았다면
//A ~E 까지 문자를 3번 반복해서 출력하면 됩니다.
//아래와 같이 출력 됩니다
//ABCDE
//ABCDE
//ABCDE
//입력 예시
//B H 2
//출력 예시
//BCDEFGH
//BCDEFGH

#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	int c;
	std::cin >> c;
	for (int i = 0; i < c; i++)
	{
		for (char i = a; i <= b; i++)
		{
			std::cout << i;
		}
		std::cout << "\n";
	}
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