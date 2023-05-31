//문제 1번
//아래그림과 같이 구성되어 있는 변수들이 있습니다.
//다음 소스코드를 copy해서 ㅁ 네모칸 에 알맞은 답을 적어 제출하세요.
//(16진수는 대문자로 입력해주세요)

#include <iostream>
using namespace std;

int main()
{

    cout << "0xB6" << endl; // a의 값 <--- 예시정답
    cout << "0x42" << endl; // k의 값
    cout << "0xB6" << endl; // t의 값
    cout << "0x1F" << endl; // c의 주소
    cout << "0x1F" << endl; // *a
    cout << "6" << endl; // **p
    cout << "0x05" << endl; // &k
    cout << "0x42" << endl; //*p



    return 0;
}



//문제 2번
//인기쟁이 심슨은 다섯명과 연애중입니다.
//a ~e 까지의 변수에 그녀들의 나이를 입력 받아주세요.
//그리고 for문을 돌려
//가장 '나이가 많은 사람'과 '어린 사람의 나이'를 찾아 출력해주세요.
//simData는 포인터 배열이고, 각각 a, b, c, d, e 를 가리켜야 합니다.
//입력 예제
//35
//72
//40
//25
//120
//출력 결과
//MAX : 120
//MIN : 25

#include <iostream>

int main()
{
	int* simData[5] = {};
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int c = 0;
	std::cin >> c;
	int d = 0;
	std::cin >> d;
	int e = 0;
	std::cin >> e;
	simData[0] = &a;
	simData[1] = &b;
	simData[2] = &c;
	simData[3] = &d;
	simData[4] = &e;
	int max = 0;
	int min = 987654321;
	for (size_t i = 0; i < 5; i++)
	{
		if (max < *simData[i])
		{
			max = *simData[i];
		}
		else if (min > *simData[i])
		{
			min = *simData[i];
		}
	}
	std::cout << "MAX : " << max << "\n";
	std::cout << "MIN : " << min << "\n";
}

//문제 3번
//robot 구조체를 정의하고, 구제체 변수 robert를 만들어주세요.
//이곳에 들어갈 숫자 2개와 문장 1개를 입력 받아주세요.
//그리고 robert를 가르키는 포인터 1개를 만들어서 가리키도록 해주세요.
//이제 포인터 p를 이용해서 a + b값과 문장t를 출력하세요.
//입력 예제
//3 5 super
//출력 결과
//8 super

#include <iostream>

struct robot
{
	int a = 0;
	int b = 0;
	char t[7] = {};
};

int main()
{
	robot robert = {};
	std::cin >> robert.a;
	std::cin >> robert.b;
	std::cin >> robert.t;
	robot* probert = &robert;
	std::cout << probert->a + probert->b << " ";
	std::cout << probert->t;
}

//문제 4번
//위와 같은 노드를 만들어주세요.
//그리고 노드의 변수 3개 a, b, c 를 만들어 주세요.
//이제 기호->를 이용해서 다음과 같이 구성하고 값을 채워주세요
//(입력과 출력은 없습니다)

#include <iostream>

struct NODE
{
	int x = 0;
	NODE* next = 0;
};

int main()
{
	NODE a = {};
	NODE b = {};
	NODE c = {};
	a.x = 3;
	a.next = &b;
	b.next = &c;
	a.next->x = 5;
	b.next->x = 4;
}

//문제 5번

#include <iostream>

struct node
{
	int age;
	node* next1;
	node* next2;
};

int main()
{
	node simson = {};
	node woman1 = {};
	node woman2 = {};
	node man1 = {};
	node man2 = {};
	node man3 = {};
	node* head = &simson;
	simson.next1 = &woman1;
	simson.next2 = &woman2;
	woman1.next1 = &man1;
	woman1.next2 = &man2;
	woman2.next1 = &woman1;
	woman2.next2 = &man3;
	head->age = 20;
	simson.next1->age = 29;
	simson.next2->age = 30;
	woman1.next1->age = 25;
	woman1.next2->age = 40;
	woman2.next2->age = 38;
}

//문제 6번
//변수 a, b에다가 숫자를 입력 받으세요.
//그리고 변수 a와 b의 주소를 보내 swap을 해주는 함수를 만들어서 swap 후 출력 해주세요.
//ex)
//입력: 3 5
//출력 : 5 3
//입력 예제
//3 5
//출력 결과
//5 3

#include <iostream>

void swap(int* _a, int* _b)
{
	int c = *_a;
	*_a = *_b;
	*_b = c;
}

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	swap(&a, &b);
	std::cout << a << " " << b;
}

//문제 7번
//좌표 6개를 입력 받으세요.
//이 좌표중 중복된 좌표가 있는지 없는지 존재여부를 출력 해주세요.
//중복된 좌표가 있으면 "중복된좌표발견", 없으면 "중복없음"으로 출력
//입력 예제
//1 1
//2 4
//1 3
//3 1
//2 2
//2 4
//출력 결과
//중복된좌표발견

#include <iostream>

int map[5][5] = {};

int isExist(int _Y, int _X)
{
	if (map[_Y][_X] == 0)
	{
		map[_Y][_X] = 1;
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int YPos[6] = {};
	int XPos[6] = {};
	int flag = 0;
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> YPos[i];
		std::cin >> XPos[i];
	}
	for (size_t i = 0; i < 6; i++)
	{
		if (isExist(YPos[i], XPos[i]) == 1)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		std::cout << "중복된 좌표 발견";
	}
	else
	{
		std::cout << "중복 없음";
	}
}

//문제 8번
//3 5 5 6 9 1 2
//위 배열을 하드코딩해주세요.
//숫자의 범위를 입력 받으세요(숫자 2개 입력)
//그리고 이 범위의 값들을 반대로 돌려 출력해주는 프로그램을 만들어 주세요.
//만약 3 5를 입력 받았다면
//3번 index ~5번 index 사의 값만 반대로 돌려주세요.
//아래 그림을 참고하여 프로그램을 만들어 주세요.
//ex)
//입력 : 3 5
//출력 : 3 5 5 1 9 6 2
//입력 예제
//3 5
//출력 결과
//3 5 5 1 9 6 2

#include <iostream>

int main()
{
	int arr[7] = { 3,5,5,6,9,1,2 };
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int c = 0;
	for (int i = a; i < 7; i++)
	{
		for (int j = b - c; j > 0; j--)
		{
			if (i < j)
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
				c++;
				break;
			}
		}
	}
}

//문제 9번
//철수와 영철이는 3번의 게임을 하려고 합니다.
//아래와 같이 승패의 모든 경우를 트리로 그려 보았습니다.
//이 트리를 구현하여 철수가 영철이에게 3번의 게임에서 승리하고 패하는 모든 경우를 출력 해주세요.
//HINT: OX로 구성된 path 전역배열을 이용해서 승패를 출력할 수 있습니다.
//출력 결과
//3승(승승승)
//2승1패(승승패)
//2승1패(승패승)
//1승2패(승패패)
//2승1패(패승승)
//1승2패(패승패)
//1승2패(패패승)
//3패(패패패)

#include <iostream>

char arr[2] = { 'O','X' };
char path[10] = {};
int viccount = 0;
int losecount = 0;
char arr1[3] = {};
void abc(int _level)
{
	if (_level == 3)
	{
		for (size_t i = 0; i < 3; i++)
		{
			if (path[i] == 'O')
			{
				viccount++;
			}
			else
			{
				losecount++;
			}
		}
		std::cout << viccount << "승" << losecount << "패" << "(";
		for (size_t i = 0; i < 3; i++)
		{
			if (path[i] == 'O')
			{
				std::cout << "승";
			}
			else
			{
				std::cout << "패";
			}
		}
		std::cout << ")" << "\n";
		viccount = 0;
		losecount = 0;
		return;
	}
	for (size_t i = 0; i < 2; i++)
	{
		path[_level] = arr[i];
		abc(_level + 1);
		path[_level] = '\0';
	}
}

int main()
{
	abc(0);
}

//문제 10번
//한 문장을 입력받아 str 배열에 입력 받으세요.
//index 숫자 4개를 입력 받아 data 배열에 저장하세요.
//네 칸짜리 포인터 배열 ptrs를 만들고
//str 배열 안에서 입력받은 index를 각각 가리켜주세요.
//그리고 ptrs에서 가리키는 값들은 for문을 돌려 출력하세요.
//입력 예제
//BKABCDE
//0 1 5 6
//출력 결과
//BKDE

#include <iostream>

int main()
{
	char str[256] = {};
	std::cin >> str;
	int data[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> data[i];
	}
	char* ptrs[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		ptrs[i] = &str[data[i]];
	}
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << *ptrs[i];
	}
}

//문제 11번
//아래 그림을 보고 규칙을 찾아내어 숫자성이
//"안전한성"인지 "안전하지않은성" 인지 출력 해주는 프로그램을 만들어주세요.
//ex)
//아래는 안전하게 성이 쌓여져 있는 모습입니다.
//각 숫자는 돌의 단단함을 나타내는 수치입니다.
//그러나 만약, 숫자2 위에 숫자3이 올려져 있다면 이 성은 무너질 것 입니다.
//출력 결과
//안전하지않은성

#include <iostream>

int map[4][4] =
{
	0,0,0,0,
	0,1,1,0,
	2,2,3,0,
	1,3,3,1
};;

int isSafe()
{
	for (size_t x = 0; x < 4; x++)
	{
		for (size_t y = 0; y < 3; y++)
		{
			if (map[y][x] > map[y + 1][x])
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	if (isSafe() == 1)
	{
		std::cout << "안전하지 않은 성";
	}
	else
	{
		std::cout << "안전한 성";
	}
}