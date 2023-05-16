//문제 1번
//다섯칸으로 된 1차배열 을 만들고,
//3 x 2 크기의 2차배열을 만들어 주세요
//그리고 각각 아래와 같이 하드코딩 해 주세요
//3	5	2	4	1
//9	8
//7	1
//3	4
//이제 숫자 하나를 입력 받으세요.
//만약 그 숫자가 홀수 일 경우 1차원 배열을 출력 해 주세요.
//만약 그 숫자가 짝수 일 경우 2차원 배열을 출력 해 주세요.
//[TIP] 2차원 배열 하드코딩 예시
//int vect[2][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };
//배열의 윗줄에는 1 2 3 4 5 값이 들어가고
//아랫줄에는 6 7 8 9 10 값이 들어갑니다.
//[TIP] 꼭 알아두세요 % 연산자(= MOD, =모드 연산자)
//% 는 숫자를 나누었을 때 나머지를 뜻합니다.
//예로들어 10을 2로 나누었을때 값은 5가 되지만 나머지는 0 입니다.따라서 10 % 2은 0 입니다.
//예를 들어 9를 2로 나누었을 때 값은 4가되지만 나머지는 1 입니다.따라서 9 % 2는 1 입니다.
//짝수인지 홀수인지 구분하려면 2로 나누었을 때 나머지값을 확인하면됩니다.
//아래 코드를 이해 해 보세요
//int t = 9;
//if (t % 2 == 0)
//{
//	//짝수입니다.
//}
//else
//{
//	//홀수입니다.
//}
//입력 예시
//10
//출력 예시
//98
//71
//34

#include <iostream>

int main()
{
	int arr[5] = { 3,5,2,4,1 };
	int arr2d[3][2] =
	{
		{ 9 ,8 },
		{ 7 ,1 },
		{ 3 ,4 }
	};
	int a;
	std::cin >> a;
	int b = a % 2;
	if (b == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr[i];
		}
	}
	else
	{
		for (int x = 0; x < 3; x++)
		{
			for (int y = 0; y < 2; y++)
			{
				std::cout << arr2d[x][y];
			}
			std::cout << "\n";
		}
	}
}

//문제 2번
//숫자 2개를 입력 받으세요
//큰 수에서 작은 수를 뺀 수가 홀수 인지 짝수인지 확인해주세요.
//그리고 홀수이면 "고백한다", 짝수이면 "짝사랑만" 을 출력 해 주세요
//주의 : 입력 받는 첫번째 숫자가 클 수도 있고 작을 수 도 있습니다.
//입력 예시
//5 2
//출력 예시
//고백한다

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c = a - b;
	int d = c % 2;
	if (d == 1 || d == -1)
	{
		std::cout << "고백한다.";
	}
	else
	{
		std::cout << "짝사랑만.";
	}
}

//문제 3번
//아래의 2차 배열을 하드코딩 해 주세요.
//3 1 1
//2 3 2
//위 2차배열을 2중 for문을 이용하여 출력 해 주세요.
//출력 예시
//311232

#include <iostream>

int main()
{
	int arr2d[2][3] =
	{
		{3,1,1},
		{2,3,2}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cout << arr2d[i][x];
		}
	}
}

//문제 4번
//for문을 돌려 숫자 5개를 배열에 입력받으세요.
//그리고 3 ~7 사이에 있는 숫자가 배열 안에 몇 개 있는지 Counting 후 출력 하세요.
//(3 <= arr[x] <= 7)
//입력 예시
//1 2 3 4 5
//출력 예시
//3

#include <iostream>

int main()
{
	int arr[5] = {};
	int i = 0;
	int count = 0;
	for (i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		if (3 <= arr[i] && arr[i] <= 7)
		{
			count++;
		}
	}
	std::cout << count;
}

//문제 5번
//점수 하나를 입력 받고(숫자 1개 입력), 평가 결과를 출력 해 주세요
//만약 80 보다 같거나 크면 "수" 출력
//만약 70 보다 같거나 크면 "우" 출력
//만약 60 보다 같거나 크면 "미" 출력
//모두 아니라면 "재시도" 출력
//입력 예시
//96
//출력 예시
//수

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a >= 80)
	{
		std::cout << "수";
	}
	else if (a >= 70)
	{
		std::cout << "우";
	}
	else if (a >= 60)
	{
		std::cout << "미";
	}
	else
	{
		std::cout << "재시도";
	}
}

//문제 6번
//정답맞추기 게임을 만들려고 합니다.
//숫자 하나를 입력받고,
//20보다 작은 수를 입력했다면 "더 큰수를 입력하세요" 라고 출력
//20보다 큰 수를 입력했다면 "더 작은수를 입력하세요" 라고 출력
//만약 20을 입력하였다면 "정답입니다" 출력하면 됩니다.
//이 게임을 총 4번 반복하는 프로그램을 작성 해 주세요
//입력 예시
//15 20 23 20
//출력 예시
//더 큰수를 입력하세요
//정답입니다
//더 작은수를 입력하세요
//정답입니다

#include <iostream>

int main()
{
	int a;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> a;
		if (a == 20)
		{
			std::cout << "정답입니다." << "\n";
		}
		else if (a < 20)
		{
			std::cout << "더 큰 수를 입력하세요." << "\n";
		}
		else if (a > 20)
		{
			std::cout << "더 작은 수를 입력하세요." << "\n";
		}
	}
}
//문제 7번
//숫자 3개를 입력받아주세요
//숫자 3개 중 가장 큰 값을 출력 해 주세요(MAX값 출력)
//그리고 숫자 3개 중 가장 작은 값도 출력 해 주세요(MIN값 출력)
//[힌트]
//a b c에 각각 숫자가 들어 있습니다.
//만약 a >= b && a >= c 이라면 a가 가장 큰 숫자입니다.
//a가 가장 크진 않지만 b >= a && b >= c 이라면
//b가 가장 큰 숫자입니다.
//둘 다 아니면 c가 가장 큰 것입니다.
//입력 예시
//5 3 3
//출력 예시
//MAX = 5
//MIN = 3

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	if (a >= b && a >= c)
	{
		std::cout << "MAX = " << a;
	}
	else if (b >= a && b >= c)
	{
		std::cout << "MAX = " << b;
	}
	else
	{
		std::cout << "MAX = " << c;
	}
}

//문제 8번
//아래의 배열을 하드코딩 해 주세요.
//3 4 1
//2 1 4
//3 3 0
//홀수와 짝수가 각각 몇개인지 출력하면 됩니다.
//(0은 짝수로 취급합니다.)
//출력 예시
//짝수 : 4
//홀수 : 5

#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		{3,4,1},
		{2,1,4},
		{3,3,0}
	};
	int i = 0;
	int j = 0;
	int countA = 0;
	int countB = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			int mod = arr2d[i][j] % 2;
			if (mod == 0)
			{
				countA++;
			}
			else
			{
				countB++;
			}
		}
	}
	std::cout << "짝수 : " << countA << "\n";
	std::cout << "홀수 : " << countB;
}

//문제 9번
//배열 5칸에 5명의 점수를 입력 받아주세요
//만약 70점 이상(>= )이면 "PASS" 출력
//만약 50점 이상(>= )이면 "RETEST" 출력
//50점 아래라면 "FAIL" 출력을 해야 합니다.
//5명의 채점결과를 출력해주는 프로그램을 작성 해 주세요
//입력 예시
//90 30 60 30 100
//출력 예시
//1번사람은90점PASS
//2번사람은30점FAIL
//3번사람은60점RETEST
//4번사람은30점FAIL
//5번사람은100점PASS

#include <iostream>

int main()
{
	int arr[5] = {};
	int i;
	for (i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	int j;
	for (j = 0; j < 5; j++)
	{
		if (arr[j] >= 70)
		{
			std::cout << j + 1 << "번 사람은 " << arr[j] << "점 " << "PASS" << "\n";
		}
		else if (arr[j] >= 50)
		{
			std::cout << j + 1 << "번 사람은 " << arr[j] << "점 " << "RETEST" << "\n";
		}
		else if (arr[j] < 50)
		{
			std::cout << j + 1 << "번 사람은 " << arr[j] << "점 " << "FAIL" << "\n";
		}
	}
}

//문제 10번
//문자 1개를 입력받고
//input함수에서 4 x 4 배열에 입력받은 문자를 꽉 채워주세요
//output함수에서 4 x 4 배열값을 출력 해 주세요
//ex) 만약 t를 입력받았다면 이렇게 채우고 출력하시면 됩니다.
//t	t t	t
//t	t t	t
//t	t t	t
//t	t t	t
//입력 예시
//a
//출력 예시
//aaaa
//aaaa
//aaaa
//aaaa

#include <iostream>

char a;
char arr[4][4] = {};
void input()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = a;
		}
	}
}

void output()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cout << a << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	std::cin >> a;
	input();
	output();
}

//문제 11번
//input함수에서 숫자 1개를 입력받아주세요
//그리고 process함수에서 그 숫자로 부터 1씩 더한 값들을 배열에 채워주세요
//그리고 output함수에서 출력 해 주세요
//ex) 만약 5를 입력받았다면
//5	6 7
//8	9 10
//11 12	13
//입력 예시
//3
//출력 예시
//3 4 5
//6 7 8
//9 10 11

#include <iostream>
int a;
int arr[3][3] = {};
void input()
{
	std::cin >> a;
}

void process()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			arr[y][x] = a;
			a++;
		}
	}
}

void output()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
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

//문제 12번
//숫자 1개를 입력받으세요
//- 만약 3 또는 5 또는 7을 입력 받았다면 1 ~10까지 출력(for문 사용)
//- 그렇지 않고 만약 0 또는 8을 입력받았다면 10 ~1까지 출력(for문 사용)
//- 두 조건이 모두 성립하지 않다면
//BBQ 함수를 호출 해 주세요.
//BBQ 함수
//- 만약 입력받은 값이 0 < x < 5 이면, "초기값" 출력
//- 만약 6 < x < 10 이면, "중간값" 출력
//- 모두 아니라면 "알수없는값" 출력
//ex) 만약 3을 입력받았다면 "12345678910" 출력
//ex) 만약 1을 입력받았다면 BBQ함수가 호출되고 "초기값" 출력
//입력 예시
//8
//출력 예시
//10987654321

#include <iostream>

int a;

void BBQ()
{
	if (0 < a && a < 5)
	{
		std::cout << "초기값";
	}
	else if (6 < a && a < 10)
	{
		std::cout << "중간값";
	}
	else
	{
		std::cout << "알 수 없는 값";
	}
}

int main()
{
	std::cin >> a;
	if (a == 3 || a == 5 || a == 7)
	{
		for (int i = 1; i <= 10; i++)
		{
			std::cout << i;
		}
	}
	else if (a == 0 || a == 8)
	{
		for (int i = 10; i >= 1; i--)
		{
			std::cout << i;
		}
	}
	else
	{
		BBQ();
	}
}

//문제 13번
//숫자 1개를 입력받아주세요
//그 숫자를 아래 모양으로 출력 해 주세요
//ex) 만약 7을 입력받았다면 2중 for문을 2번 써서 이렇게 출력 해 주세요
//77777
//77777
//77777
//777
//777
//777
//입력 예시
//3
//출력 예시
//33333
//33333
//33333
//333
//333
//333

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << a;
		}
		std::cout << "\n";
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << a;
		}
		std::cout << "\n";
	}
}

//문제 14번
//1차원 배열 6칸을 만들어주세요.
//그리고 index값 3개를 입력받으세요
//그 배열의 index에 해당하는 곳에 값을 1로 채워주시면 됩니다.
//그리고 그 결과를 출력 해 주세요.
//ex)만약 1 3 4을 입력받았다면
//0	1	0	1	1	0
//이렇게 1번, 3번, 4번 Index에 값을 1로 채워주세요
//그리고 이 배열을 출력하시면 됩니다.
//[TIP] 꼭 알아두세요
//지역 배열을 만들게 되면 그 안에 값들이 쓰레기값으로 채워집니다.
//배열 값들을 0으로 초기화 하는 방법1
//int vect[5];
//for (x = 0; x < 5; x++)
//{
//	vect[x] = 0; //for문을 돌면서 한칸씩 0으로 채워집니다.
//}
//배열 값들을 0으로 초기화 하는 방법2
//int vect[5] = { 0 }; //이렇게 한번에 0으로 모두 채우는 방법이 있습니다
//배열 값들을 0으로 초기화 하는 방법3
//int vect[5]; //전역배열로 만들면 자동으로 0 으로 초기화 됩니다.
//입력 예시
//0 2 3
//출력 예시
//1 0 1 1 0 0

#include <iostream>

int main()
{
	int arr[6] = {};
	int a;
	std::cin >> a;
	arr[a] = 1;
	int b;
	std::cin >> b;
	arr[b] = 1;
	int c;
	std::cin >> c;
	arr[c] = 1;
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}
}

//문제 15번
//문자 2개를 input함수에서 입력 받으세요
//output함수에서는 다음 조건에 따라 결과를 출력하세요
//- 그 문자가 둘 다 대문자라면 "대문자들" 출력
//- 그 문자 중 둘 중 하나만 대문자라면 "대소문자" 출력
//- 두 조건 모두 아니면 a ~z까지(abcdefg...z) 출력
//[TIP]
//g가 1 보다 크고 10보다 작을 때를 나타내는 소스코드는
//if (g > 1, g < 10)  이 아니라
//if (1 < g < 10) 도 아니라
//if (g > 1 && g < 10)  이거 입니다.
//if 안에다가 컴마(, )를 쓰지마세요
//입력 예시
//b A
//출력 예시
//대소문자

#include <iostream>
char a;
char b;
void input()
{
	std::cin >> a;
	std::cin >> b;
}

void output()
{
	if ('A' <= a && a <= 'Z' && 'A' <= b && b <= 'Z')
	{

		std::cout << "대문자들";
	}
	else if ('A' <= a && a <= 'Z' && 'a' <= b && b <= 'z')
	{
		std::cout << "대소문자";
	}
	else if ('a' <= a && a <= 'z' && 'A' <= b && b <= 'Z')
	{
		std::cout << "대소문자";
	}
	else
	{
		std::cout << "abcdefghijklmnopqrstuvwxyz";
	}
}

int main()
{
	input();
	output();
}

//문제 16번
//3 x 5 char 2차배열을 만들어주세요
//그리고 문자 1개를 입력받아주세요
//입력받은 문자부터 1씩 증가하는 문자들을 배열에 꽉 채워주세요
//예로들어 'B'를 입력받았다면
//B	C D	E F
//G	H I	J K
//L	M N	O P
//그 다음 좌표(2, 2)에 있는 문자를 소문자로 바꾸어서 출력 해 주시면 됩니다.
//[TIP] 좌표를 나타낼 때는 y부터 표현합니다. (y, x)
//예로들어(1, 3)라는 뜻은
//(0, 0)부터 시작해서 y축으로 1번, x축으로 부터 3번 index라는 뜻입니다.
//(0, 0)
//(1, 3)
//입력 예시
//B
//출력 예시
//n

#include <iostream>

int main()
{
	char arr[3][5] = {};
	char a;
	std::cin >> a;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	std::cout << (char)(arr[2][2] + 'a' - 'A');
}

//문제 17번
//3칸짜리 char 배열을 만들고 문자 3개를 입력받아주세요.
//그 문자에 대문자가 몇 개인지 counting 해 주세요.
//count값이 3개라면 "풍족하다" 출력
//count값이 1~2개라면 "적절하다" 출력
//대문자가 하나도 없다면 "부족하다" 출력
//입력 예시
//A k t
//출력 예시
//적절하다

#include <iostream>

int main()
{
	char arr[3] = {};
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
		if ('A' <= arr[i] && arr[i] <= 'Z')
		{
			count++;
		}
	}
	if (count == 3)
	{
		std::cout << "풍족하다";
	}
	else if (count == 1 || count == 2)
	{
		std::cout << "적절하다";
	}
	else if (count == 0)
	{
		std::cout << "부족하다";
	}
}

//문제 18번
//2 x 4 배열을 만들고 모두 0으로 채워주세요.
//0	0 0	0
//0	0 0	0
//그리고 y, x 좌표를 입력받아주세요(숫자 2개 입력)
//그 좌표에 값을 1을 넣어 주시면 됩니다.
//만약 1 3을 입력 받았다면
//0	0 0	0
//0	0 0	1
//(1, 3)에 1을 넣으면 됩니다.
//이렇게 완성된 2차배열을 출력 해 주세요
//입력 예시
//1 1
//출력 예시
//0 0 0 0
//0 1 0 0

#include <iostream>

int main()
{
	int arr[2][4] = {};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	arr[a][b] = 1;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}


//문제 19번
//For문을 이용하여 3 x 2 배열에 숫자 6개를 입력받아주세요.
//입력받은 값을 배열에 그대로 채우는 것이 아니라
//+ 2를 한 값으로 채워야 합니다.
//값을 모두 채운 후,
//다시 이중 for문을 돌아
//채운 값을 모두 출력 해 주세요
//ex) 만약 5 3 6 1 2 3 을 입력받았다면 각각 + 2씩 해서
//7	5
//8	3
//4	5
//이렇게 값을 채운 후 다시 이중 for문을 돌려서 출력 해 주시면 됩니다.
//입력 예시
//5 3 6 1 2 3
//출력 예시
//7 5
//8 3
//4 5

#include <iostream>

int main()
{
	int arr[3][2] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> arr[i][j];
			arr[i][j]++;
			arr[i][j]++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}