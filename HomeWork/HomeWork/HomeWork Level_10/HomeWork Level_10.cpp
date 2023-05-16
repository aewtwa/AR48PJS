//문제 1번
//숫자 1개를 입력받으세요
//짝수를 입력 받았다면 아래와 같이 2차 배열에 값을 채워주세요
//(1중 for문을 사용하세요)
//1
// 2
//  3
//   4
//그 숫자가 홀수면 다음과 같이 값을 채워주세요
//(1중 for문을 사용 해 주세요)
//   1
//  2
// 3
//4
//이렇게 채운 값을 2중 for문을 돌려 모두 출력 해 주세요
//[힌트] 값을 채워야 하는 좌표를 먼저 메모장에 써 보세요
//(0, 0) > (1, 1) > (2, 2) > (3, 3)
//그러면 규칙이 보입니다.x, y변수를 잘 활용해서 문제를 풀어보세요
//입력 예시
//2
//출력 예시
//1 0 0 0
//0 2 0 0
//0 0 3 0
//0 0 0 4

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int mod = a % 2;
	int arr2d[4][4] = {};
	int b = 1;
	int x = 3;
	int y = 0;
	if (mod == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr2d[i][i] = b;
			b++;
		}
	}
	b = 1;
	if (mod == 1)
	{
		for (int i = 0; i < 4; i++)
		{
			arr2d[y][x] = b;
			x--;
			y++;
			b++;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 2번
//main함수에서는 getChar를 호출하고,
//getChar에서 return받은 값을 출력 하면 됩니다.
//getChar에서는
//문자 2개를 입력 받고, 아스키코드값이 더 큰 문자를 return하면 됩니다.
//입력 예시
//A E
//출력 예시
//E

#include <iostream>

char getChar()
{
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	std::cout << getChar();;
}

//문제 3번
//번호 순서대로 배열에 값을 채우려 합니다.
//숫자 1개를 입력 받아주세요
//입력받은 숫자를 5으로 나누었을때 나머지 값이 1이라면
//9	6 3
//8	5 2
//7	4 1
//입력받은 숫자를 5로 나누었을때 나머지 값이 2이라면
//7	8 9
//4	5 6
//1	2 3
//위에 두 경우가 아니라면
//10 13	16
//11 14	17
//12 15	18
//이렇게 값을 채우고
//값을 채운 2차배열을 출력 해 주세요.
//입력 예시
//10
//출력 예시
//10 13 16
//11 14 17
//12 15 18

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int mod = 0;
	mod = a % 5;
	int arr2d[3][3] = {};
	int b = 0;
	if (mod == 1)
	{
		b = 9;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[j][i] = b;
				b--;
			}
		}
	}
	else if (mod == 2)
	{
		b = 9;
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr2d[i][j] = b;
				b--;
			}
		}
	}
	else
	{
		b = 10;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[j][i] = b;
				b++;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 4번
//아래 그림과 같이 프로그램을 작성 해 주세요
//main함수에서는 even(a / b); 또는 odd(a / b); 를 호출하면 됩니다.
//입력 예시
//5 2
//출력 예시
//4
//7

#include <iostream>

void printData(int _a)
{
	std::cout << _a << "\n";
}

void even(int _a)
{
	printData(_a * 2);
}

void odd(int _a)
{
	printData(_a - 10);
}

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int share = 0;
	share = a / b;
	int mod = 0;
	mod = share % 2;
	int Plus = 0;
	Plus = a + b;
	if (mod == 0)
	{
		even(share);
		printData(Plus);
	}
	if (mod == 1)
	{
		odd(share);
		printData(Plus);
	}
}

//문제 5번
//main 함수에서 GOP 함수와 SUM 함수를 호출 해 주세요.
//GOP 함수에서는 숫자 2개를 입력 받고 곱을 return 해 주세요.
//SUM 함수에서는 숫자 2개를 입력 받고 합을 return 해 주세요.
//main 함수에서는 GOP 함수의 return값과 SUM 함수의 return 값을 비교 해 주세요
//GOP 함수의 return 값이 크다면 "GOP>SUM" 출력
//SUM 함수의 return 값이 크다면 "GOP<SUM" 출력
//두 return 값이 같다면 "GOP==SUM" 출력 해 주세요
//입력 예시
//3 6
//11 7
//출력 예시
//GOP == SUM

#include <iostream>

int GOP()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	return a * b;
}

int SUM()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	return a + b;
}

int main()
{
	int a = 0;
	int b = 0;
	a = GOP();
	b = SUM();
	if (a > b)
	{
		std::cout << "GOP > SUM";
	}
	else if (a < b)
	{
		std::cout << "GOP < SUM";
	}
	else if (a == b)
	{
		std::cout << "GOP = SUM";
	}
}

//문제 6번
//아래의 2차원 배열을 2중 for문을 이용하여
//번호 순서대로 채우고, 출력하세요.
//입력 값은 없습니다.
//13 9 5 1
//14 10 6 2
//15 11 7 3
//16 12 8 4
//출력 예시
//13 9 5 1
//14 10 6 2
//15 11 7 3
//16 12 8 4

#include <iostream>

int main()
{
	int arr2d[4][4] = {};
	int a = 1;
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			arr2d[j][i] = a;
			a++;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 7번
//2중 for문을 돌려 번호 순서대로 값을 채워주세요
//12 11	10 9
// 8  7  6 5
// 4  3  2 1
//숫자 1개를 입력받으세요
//그 숫자에 해당하는 열에 값을 0으로 채워주세요
//그리고 그 결과를 출력 해 주세요
//ex) 만약 숫자2를 입력받았다면
//아래와 같이 2번 열을 모두 0으로 채우시면 됩니다.
//12 11	0 9
// 8  7 0 5
// 4  3 0 1
//ex) 만약 숫자 0을 입력받았다면
//아래와 같이 0번 열을 모두 0으로 채우면 됩니다.
//0 11 10 9
//0	 7  6 5
//0	 3  2 1
//입력 예시
//2
//출력 예시
//12 11 0 9
// 8  7 0 5
// 4  3 0 1

#include <iostream>

int main()
{
	int arr2d[3][4] = {};
	int b = 1;
	int a;
	std::cin >> a;
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 3; j >= 0; j--)
		{
			if (j != a)
			{
				arr2d[i][j] = b;
			}
			else if (j == a)
			{
				arr2d[i][j] = 0;
			}
			b++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 8번
//2차배열(4X4)에 숫자들을 입력 받아주세요.
//다시 이중 for문을 돌려, 배열 안에 있는 숫자가
//짝수이면 # 을,
//홀수이면 @ 을
//0이면 !를 출력하는 프로그램을 작성 해 주세요.
//예를 들어
//3 8 10 2
//3 5 8 7
//2 8 6 4
//1 3 0 9
//로 입력했다면, 아래와 같이 출력하면 됩니다.
//@###
//@@#@
//####
//@@!@
//입력 예시
//3 8 10 2
//3 5 8 7
//2 8 6 4
//1 3 0 9
//출력 예시
//@###
//@@#@
//####
//@@!@

#include <iostream>

int main()
{
	int arr2d[4][4] = {};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> arr2d[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int mod = arr2d[i][j] % 2;
			if (arr2d[i][j] == 0)
			{
				arr2d[i][j] = '!';
			}
			else if (mod == 0)
			{
				arr2d[i][j] = '#';
			}
			else if (mod == 1)
			{
				arr2d[i][j] = '@';
			}
			std::cout << (char)(arr2d[i][j]);
		}
		std::cout << "\n";
	}
}

//문제 9번
//전역변수를 사용하지 않는 문제입니다
//숫자 하나를 입력받으면 그 숫자부터 1까지 출력하는 문제입니다
//아래와 같이 함수를 만들어서 풀어주세요
//입력 예시
//5
//출력 예시
//5 4 3 2 1

#include <iostream>

int input()
{
	int a;
	std::cin >> a;
	return a;
}

void CountDown(int _a)
{
	for (int i = _a; i >= 1; i--)
	{
		std::cout << i;
	}
}

int main()
{
	CountDown(input());
}

//문제 10번
//main 함수에서 yesOrNo 함수를 호출 해 주세요.
//yesOrNo 함수에서는 숫자 하나를 입력 받아 주세요.
//입력받은 숫자 하나를 3으로 나누었을때
//나머지가 0일 경우 7을
//나머지가 1일 경우 35를
//나머지가 2일 경우 50을 리턴하는 함수를 작성 해 주세요.
//main함수에선 yesOrNo 함수가 리턴한 값을 출력 하시면 됩니다.
//ex ) 5
//35
//ex) 3
//7
//입력 예시
//6
//출력 예시
//7

#include <iostream>

int yesOrNo()
{
	int a;
	std::cin >> a;
	int mod = 0;
	mod = a % 3;
	if (mod == 0)
	{
		return 7;
	}
	else if (mod == 1)
	{
		return 35;
	}
	else if (mod == 2)
	{
		return 50;
	}
}

int main()
{
	std::cout << yesOrNo();;
}

//문제 11번
//main 함수에서 scoring 함수를 호출 해 주세요.
//scoring 함수에서는 점수를 하나 입력 받습니다.
//그 점수가 90 이상일 경우 A를,
//그렇지 않고 80 이상일 경우 B를,
//그렇지 않고 70 이상일 경우 C를,
//나머지의 경우 D를 리턴 해 주세요.
//main 함수에선 scoring에서 리턴 받은 값을 출력 해 주세요.
//ex ) 95
//A
//ex) 55
//D
//입력 예시
//85
//출력 예시
//B

#include <iostream>

char scoring()
{
	int a;
	std::cin >> a;
	if (a >= 90)
	{
		return 'A';
	}
	else if (a >= 80)
	{
		return 'B';
	}
	else if (a >= 70)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}

int main()
{
	std::cout << scoring();
}

//문제 12번
//main 함수에서 aToZ 함수를 호출 해 주세요.
//aToZ 함수에서는
//하나의 문자를 입력 받아 주세요.
//입력 받은 문자가 A에 더 가까울 경우 A를 리턴 해 주세요.
//만약 입력 받은 문자가 Z에 가까울 경우 Z를 리턴 해 주세요.
//main 함수에서는 리턴받은 값을 출력 해 주세요.
//ex)
//M
//A
//ex)
//X
//Z
//ex)
//F
//A
//입력 예시
//M
//출력 예시
//A

#include <iostream>

char AToZ()
{
	char a;
	std::cin >> a;
	if ('Z' - a > a - 'A')
	{
		return 'A';
	}
	else if (a - 'A' > 'Z' - a)
	{
		return 'Z';
	}
}

int main()
{
	std::cout << AToZ();
}

//문제 13번
//아래의 그림처럼 4 x 4 배열에 숫자를 번호 순서대로 채우고 출력 해 주세요.
//입력 값은 없습니다.
//2 10 18 26
//4 12 20 28
//6 14 22 30
//8 16 24 32
//출력 예시
//2 10 18 26
//4 12 20 28
//6 14 22 30
//8 16 24 32

#include <iostream>

int main()
{
	int arr2d[4][4] = {};
	int a = 2;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr2d[j][i] = a;
			a = a + 2;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 14번
//2차배열에 값을 채워주세요(번호 순서대로 값을 채워주세요)
//21	16	11	6	 1
//22	17	12	7	2
//23	18	13	8	3
//24	19	14	9	4
//25	20	15	10	5
//숫자 하나를 입력받으세요
//그 숫자에 해당하는 행 전체를 입력받은 숫자로 채워주세요
//ex) 만약 숫자 1을 입력받았다면 1번 행을 모두 1로 채우면 됩니다
//21	16	11	6	 1
//1	1	1	1	1
//23	18	13	8	3
//24	19	14	9	4
//25	20	15	10	5
//ex) 만약 숫자 3을 입력받았다면 3번 행을 모두 3으로 채우면 됩니다
//21	16	11	6	 1
//22	17	12	7	2
//23	18	13	8	3
//3	3	3	3	3
//25	20	15	10	5
//입력 예시
//3
//출력 예시
//21 16 11 6 1
//22 17 12 7 2
//23 18 13 8 3
//3 3 3 3 3
//25 20 15 10 5

#include <iostream>

int main()
{
	int arr2d[5][5] = {};
	int a = 1;
	int b = 0;
	std::cin >> b;
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 0; j < 5; j++)
		{
			arr2d[j][i] = a;
			a++;
			if (j == b)
			{
				arr2d[j][i] = b;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 15번
//아래 그림과 같은 Fruit 구조체 타입을 만들어주세요
//Fruit 구조체 변수 banana, apple을 만들어 주세요.
//이제 banana.size와 apple.size를 입력 받고, 각 과일의 가격을 계산하여 price에 넣어주세요.
//바나나 가격 = banana.size * 250
//사과 가격 = apple.size * 500
//이제 banana.price와 apple.price 의 합을 출력하면 됩니다.
//입력 예시
//10
//20
//출력 예시
//12500원

#include <iostream>

struct Fruit
{
	int size;
	int price;
};

int main()
{
	Fruit banana = {};
	Fruit apple = {};
	std::cin >> banana.size;
	std::cin >> apple.size;
	banana.price = banana.size * 250;
	apple.price = apple.size * 500;
	std::cout << banana.price + apple.price << "원";
}

//문제 16번
//숫자 3개를 입력 받으세요.
//3 x 4 배열을 만들고,
//첫번째 입력받은 숫자를 이용해서 맨 윗줄을 아래와 같이 채워주세요.
//두번째 입력받은 숫자를 이용해서 중간줄을 아래와 같이 채워주세요.
//세번째 입력받은 숫자를 이용해서 아랫줄을  아래와 같이 채워주세요.
//예로들어 1 11 7 이렇게 숫자 3개가 입력 되면
//1	 2  3  4
//11 12	13 14
//7	 8  9  10
//입력 예시
//1 11 7
//출력 예시
//1  2  3  4
//11 12 13 14
//7  8  9  10

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	int arr2d[3][4] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
			{
				arr2d[i][j] = a;
				a++;
			}
			if (i == 1)
			{
				arr2d[i][j] = b;
				b++;
			}
			if (i == 2)
			{
				arr2d[i][j] = c;
				c++;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 17번
//2차배열에 아래와 같이 2중 for문으로 값을 채워주세요
//10 16	22
//11 17	23
//12 18	24
//13 19	25
//14 20	26
//15 21	27
//변수 a, b에 숫자를 입력받아주세요(숫자 2개 입력받아주세요)
//그리고 a줄 ~b줄까지 숫자 7로 채우고 출력 해 주세요
//(a <= b)
//만약 2 4를 입력받았다면 아래와 같이 2번줄 부터 4번줄까지 숫자7로 채우면 됩니다.
//10 16	22
//11 17	23
//7	7 7
//7	7 7
//7	7 7
//15 21	27
//입력 예시
//2 4
//출력 예시
//10 16 22
//11 17 23
//7 7 7
//7 7 7
//7 7 7
//15 21 27

#include <iostream>

int main()
{
	int arr2d[6][3] = {};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c = 10;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			arr2d[j][i] = c;
			c++;
			if (a <= j && j <= b)
			{
				arr2d[j][i] = 7;
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 18번

#include <iostream>

struct BBQ
{
	int x;
	int data[3];
};

int main()
{
	BBQ g = {};
	std::cin >> g.x;
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> g.data[i];
		sum = sum + g.data[i];
	}
	std::cout << sum << " ";
	std::cout << g.x;
}

//문제 19번
//아래 그림과 같이 코딩을 해 주세요
//7 x 5 배열은 전역배열로 만들어주세요
//(전역변수는 쓰지 말아주세요)
//main함수에서는
//INPUT함수 / PROCESS함수 / OUTPUT함수를 각각 호출할 때
//값을 넘기고 전달받는 부분이 소스코드에 들어가야 합니다.
//입력 예시
//1
//출력 예시
//3

#include <iostream>

int arr2d[7][5] =
{
	{1,},
	{1,0,1},
	{1,1,0,1},
	{1,0,1},
	{0,1,0,0,1},
	{0,0,0,1},
	{1,1}
};

int input()
{
	int a;
	std::cin >> a;
	return a;
}

int process(int _a)
{
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr2d[i][_a] == 1)
			{
				count++;
				break;
			}
		}
	}
	return count;
}

void output(int _a)
{
	std::cout << _a;
}

int main()
{
	output(process(input()));
}

//문제 20번
//3 x 5 문자배열을 하드코딩 해 주세요(전역배열 사용)
//D A C C D
//S D F A E
//E E T J H
//그리고 문자 하나를 입력받는데 그 문자가 존재하는지 아닌지 출력 하는 문제입니다.
//(전역변수는 사용하지마세요)
//아래 규칙에 맞게 함수를 만들어주시면 됩니다
//[CHECK함수 힌트]
//void CHECK(char ch)
//{
//	for (y = 0; y < 3; y++) {
//		for (x = 0; x < 3; x++) {
//			if (vect[y][x] == ch) {
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//입력 예시
//A
//출력 예시
//있음

#include <iostream>

char arr2d[3][5] =
{
	{'D','A','C','C','D'},
	{'S','D','F','A','E'},
	{'E','E','T','J','H'}
};

char input()
{
	char a;
	std::cin >> a;
	return a;
}

int check(char _ch)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr2d[i][j] == _ch)
			{
				return 1;
			}
		}
	}
	return 0;
}

void output(int _a)
{
	if (_a == 1)
	{
		std::cout << "있음";
	}
	else if (_a == 0)
	{
		std::cout << "없음";
	}
}

int main()
{
	output(check(input()));
}

//문제 21번
//[전역변수를 사용하지 말고 풀어주세요]
//main함수에서 숫자 1개를 입력받으세요
//run함수에 입력받은 숫자를 보내고 run함수에서 다음과 같이 처리를 해 주세요
//run함수 안에서는...
//[3x3] 2차배열을 만들고 아래 규칙에 따라 값을 채우고, 출력 해 주세요
//만약 입력받은 숫자가 10보다 작으면(< 10)
//1	2 3
//4	5 6
//7	8 9
//만약 입력받은 숫자가 10보다 같거나 크면(>= 10)
//3	2 1
//6	5 4
//9	8 7
//* 번호 순서대로 배열에 값을 넣어주시면 됩니다
//입력 예시
//15
//출력 예시
//321
//654
//987

#include <iostream>

void run(int _a)
{
	int arr2d[3][3] = {};
	int a = 1;
	if (_a < 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[i][j] = a;
				a++;
			}
		}
	}
	if (_a >= 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr2d[i][j] = a;
				a++;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	int a;
	std::cin >> a;
	run(a);
}