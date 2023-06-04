//문제 1번
//4칸짜리 큐를 링크드리스트로 만들어주세요.
//그리고 아래와 같이 입력 받았을때 최종 큐의 결과를 출력 하세요.
//입력 예제
//3
//E 5
//E 6
//E 9
//출력 결과
//5 6 9

#include <iostream>

class Queue
{
public:
	Queue()
		:mHead(nullptr)
		, mTail(nullptr)
	{

	}
	struct Node
	{
		Node()
			:num(0)
			, pNext(nullptr)
		{

		}
		int num;
		Node* pNext;
	};


	void Enqueue(int _num)
	{
		if (mHead == nullptr)
		{
			mHead = new Node;
			mHead->num = _num;
			mHead->pNext = nullptr;
			mTail = mHead;
		}
		else
		{
			mTail->pNext = new Node;
			mTail->pNext->num = _num;
			mTail->pNext->pNext = nullptr;
			mTail = mTail->pNext;
		}
	}

	void Dequeue()
	{
		if (mHead == nullptr)
		{
			return;
		}
		Node* pNode = mHead;
		mHead = mHead->pNext;

		delete pNode;
		pNode = nullptr;
	}

	void Printqueue()
	{
		Node* pNode = mHead;
		while (true)
		{
			std::cout << pNode->num << " ";
			if (pNode->pNext == nullptr)
				return;

			pNode = pNode->pNext;
		}
	}
private:
	Node* mHead;
	Node* mTail;
};

int main()
{
	int a = 0;
	std::cin >> a;
	char arr[256] = {};
	int arr1[256] = {};
	for (size_t i = 0; i < a; i++)
	{
		std::cin >> arr[i];
		std::cin >> arr1[i];
	}

	int size = 4;
	int count = 0;

	Queue queue;
	for (size_t i = 0; i < a; i++)
	{
		if (arr[i] == 'E')
		{
			queue.Enqueue(arr1[i]);
			count++;
		}
		else
		{
			queue.Dequeue();
			count--;
		}
	}
	if (count > 4)
	{
		std::cout << "Error";
	}
	else if (count <= 0)
	{
		std::cout << "Error";
	}
	else
	{
		queue.Printqueue();
	}
}

//문제 2번
//ABC 타입 구조체는 다음과 같습니다.
//ABC 타입 구조체 변수 a, b를 만들고, 다음과 같이 값을 초기화 해주세요.
//구조체 포인터 p, g를 만들고,
//p는 a를 가르키도록 하고
//g는 b를 가르키도록 해주세요.
//이제 p와 g를 이용해서 p와 g가 가르키고 있는 곳의 값들을 출력 해주세요.
//출력 결과
//1 2 3 4
//10
//7 8 9 10
//15

#include <iostream>

struct ABC
{
	int data[4];
	int x;
};

int main()
{
	ABC a = {};
	for (size_t i = 0; i < 4; i++)
	{
		a.data[i] = i + 1;
	}
	a.x = 10;

	ABC b = {};
	for (size_t i = 0; i < 4; i++)
	{
		b.data[i] = i + 7;
	}
	b.x = 15;

	ABC* p = &a;
	ABC* g = &b;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << p->data[i] << " ";
	}
	std::cout << "\n";
	std::cout << p->x;
	std::cout << "\n";
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << g->data[i] << " ";
	}
	std::cout << "\n";
	std::cout << g->x;
}

//문제 3번
//35 17 7 1짜리 동전이 있습니다.
//동전교환할 금액을 입력 받아주세요.
//가장 큰 금액의 동전부터 교환해주려고 합니다.
//각 동전마다 몇개의 동전으로 교환 할 수 있는지 출력 하세요.
//ex)
//입력: 170
//35 : 4개
//17 : 1개
//7 : 1개
//1 : 6개
//입력 예제
//170
//출력 결과
//35:4개
//17 : 1개
//7 : 1개
//1 : 6개

#include <iostream>

int main()
{
	int mod = 0;
	std::cin >> mod;
	int arr[4] = { 35,17,7,1 };
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << arr[i] << " : " << mod / arr[i] << "개" << "\n";
		mod = mod % arr[i];
	}
}

//문제 4번
//한문장을 입력 받으세요.(최대 10글자)
//몇가지 종류의 알파벳이 존재하는지 출력 하세요.
//알파벳은 A ~Z 까지 나올 수 있습니다
//입력 예제
//AGGABC
//출력 결과
//4종류

#include <iostream>

int main()
{
	char str[11] = {};
	std::cin >> str;
	int len = strlen(str);
	int bucket[256] = {};
	for (size_t i = 0; i < len; i++)
	{
		int target = str[i];
		bucket[target]++;
	}
	int count = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (bucket[i] > 0)
		{
			count++;
		}
	}
	std::cout << count << "종류";
}

//문제 5번
//4x4 배열에 병정개미 4마리를 입력하여 배치 합니다.
//숫자 1이 병정개미라고 했을 때
//만약, 아래와 같이 입력하면 붙어있는 개미가 있어 위험한 상태 입니다.
//1 0 0 0
//0 1 1 0
//0 0 0 1
//0 0 0 0
//4x4 배열에 병정개미 4마리를 배치한 값을 입력받고,
//개미의 상태가 안전하면 "안전한 상태",
//안전하지 않으면 "위험한 상태"라고 판단하여 출력 해주는 프로그램을 만들어 주세요.
//입력 예제
//1 0 0 0
//0 1 1 0
//0 0 0 1
//0 0 0 0
//출력 결과
//위험한 상태

#include <iostream>

int map[4][4] = {};

int isSafe(int _Y, int _X)
{
	int offset[4][2] =
	{
		-1,0,
		1,0,
		0,-1,
		0,1
	};
	for (size_t i = 0; i < 4; i++)
	{
		int newY = _Y + offset[i][0];
		int newX = _X + offset[i][1];
		if (map[newY][newX] == 1)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> map[i][j];
		}
	}

	int flag = 0;

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (map[i][j] == 1)
			{
				flag = isSafe(i, j);
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
		std::cout << "위험한 상태";
	}
	else
	{
		std::cout << "안전한 상태";
	}
}

//문제 6번
//4x10 char 배열에 4문장을 대문자로 입력 받으세요.(최대 10글자)
//가장 긴 문장과 가장 짧은 문장을 찾아내고 모두 소문자로 바꾸어주세요.
//(가장 긴문장과 짧은 문장은 한개씩 존재합니다)
//입력 예제
//ABC
//BBBQ
//BT
//JOW
//출력 결과
//ABC
//bbbq
//bt
//JOW

#include <iostream>

int main()
{
	char str[4][11] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> str[i];
	}
	int max = 0;
	int min = 987654321;

	int len[4] = {};
	for (int i = 0; i < 4; i++)
	{
		len[i] = strlen(str[i]);
	}
	int maxidx = 0;
	for (int i = 0; i < 4; i++)
	{
		if (max < len[i])
		{
			max = len[i];
			maxidx = i;
		}
	}
	int minidx = 0;
	for (int i = 0; i < 4; i++)
	{
		if (min > len[i])
		{
			min = len[i];
			minidx = i;
		}
	}
	for (int i = 0; i < max; i++)
	{
		str[maxidx][i] = str[maxidx][i] + 32;
	}
	for (int i = 0; i < min; i++)
	{
		str[minidx][i] = str[minidx][i] + 32;
	}
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << str[i] << "\n";
	}
}

//문제 7번

#include <iostream>

int arr2d[3][4] =
{
	0,0,0,0,
	1,0,0,0,
	1,0,0,0
};

void t_magic()
{
	int offset[2][2] =
	{
		-1,0,
		0,-1
	};
	int sum = 0;
	for (size_t i = 1; i <= 2; i++)
	{
		for (size_t j = 1; j <= 3; j++)
		{
			for (size_t k = 0; k < 2; k++)
			{
				int newY = i + offset[k][0];
				int newX = j + offset[k][1];
				sum = sum + arr2d[newY][newX];
			}
			arr2d[i][j] = sum;
			sum = 0;
		}
	}
}

int main()
{
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
		arr2d[0][i] = arr[i];
	}
	t_magic();
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 8번
//9개의 숫자를 입력 받으세요.
//그리고 가장 큰 숫자와 두번째로 큰 숫자를 찾아 값과 좌표를 출력 하세요.
//입력 예제
//3 5 1
//9 2 7
//6 11 3
//출력 결과
//첫번째 : 11(2, 1)
//두번째 : 9(1, 0)

#include <iostream>

int map[3][3] = {};

void max()
{
	int max = 0;
	int maxY = 0;
	int maxX = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (map[i][j] > max)
			{
				max = map[i][j];
				maxY = i;
				maxX = j;
			}
		}

	}
	std::cout << max << "(" << maxY << "," << maxX << ")" << "\n";
	map[maxY][maxX] = 0;
}

int main()
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> map[i][j];
		}
	}
	std::cout << "첫번째 : ";
	max();
	std::cout << "두번째 : ";
	max();
}

//문제 9번
//4x4 배열의 땅이 있습니다.
//#으로 표시되는 아기돼지 집 세곳을 입력 받으세요.
//그리고 늑대에게 잡아먹히지 않도록 벽을 감싸주세요(8방향)
//벽을 짓느라 아기돼지집을 부수면 안됩니다.
//(빈공간은 언더바_로 출력 해주세요)
//Hint: Direct를 이용해주세요.
//입력 예제
//0 0
//2 2
//0 3
//출력 결과
//#@@#
//@@@@
//_@#@
//_@@@

#include <iostream>

struct int2
{
	int y;
	int x;
};

char map[4][5] = {};

void pig(int2 _a)
{
	map[_a.y][_a.x] = '#';
}

void build(int2 _a)
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
		1,1
	};
	for (size_t i = 0; i < 8; i++)
	{
		int newY = _a.y + offset[i][0];
		int newX = _a.x + offset[i][1];
		map[newY][newX] = '@';
	}
}

int main()
{
	int2 arr[3] = {};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> arr[i].y;
		std::cin >> arr[i].x;
		pig(arr[i]);
		build(arr[i]);
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (map[i][j] == '\0')
			{
				std::cout << '_';
			}
			else
			{
				std::cout << map[i][j];
			}
		}
		std::cout << "\n";
	}
}

//문제 10번
//A, B, C, D의 관계도가 그려져 있고 이것을 배열로 표현 하면
//아래와 같이 표현 할 수 있습니다.
//위 배열에서 가장 많이 연결된 알파벳은 A 입니다.
//위와 같이 4x4 배열에 연결상태를 입력받고, 가장 많이 연결된 알파벳을 출력 하세요.
//입력 예제
//0 1 1 1
//1 0 1 0
//1 1 0 0
//1 0 0 0
//출력 결과
//A

#include <iostream>

int main()
{

}

//문제 11번
//숫자 1의 위치를 입력 받으세요. (y, x)
//그리고 1의 위치를 찾아내서 위, 아래, 왼쪽, 오른쪽칸의 빈칸에 숫자 2를 채워주세요.
//그리고 숫자 2를 찾아서 모든 숫자 2에서 위, 아래, 오른쪽, 아래칸의 빈칸에 숫자 3을 채워주세요.
//이 과정을 반복해서 배열을 아래와 같이 배열을 꽉 채운 후 결과를 출력 해주세요.
//입력 예제
//2 2
//출력 결과
//5 4 3 4
//4 3 2 3
//3 2 1 2
//4 3 2 3

#include <iostream>

int map[4][4] = {};
int num = 1;

struct int2
{
	int y;
	int x;
};

void process(int _Y, int _X)
{
	int offset[4][2] =
	{
		-1,0,
		1,0,
		0,-1,
		0,1
	};

	for (size_t i = 0; i < 4; i++)
	{
		int newY = _Y + offset[i][0];
		int newX = _X + offset[i][1];
		map[newY][newX] = num + 1;
		if (map[_Y][_X] == num - 1)
		{
			continue;
		}
	}
}

int main()
{
	int2 a = {};
	std::cin >> a.y;
	std::cin >> a.x;
	map[a.y][a.x] = 1;

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (map[i][j] == 1)
			{
				process(i, j);
			}
		}
	}
}

//문제 12번
//드라마의 삼각관계를 나타낸 그래프입니다.
//그래프를 인접행렬로 작성 해 주세요.
//인접행렬을 이용해서
//다섯명의 사람 중 가장 인기가 좋은 사람을 찾아서 출력 해주세요.
//(A----->B는 A가 B를 좋아한다는 뜻입니다.)
//
//출력 결과
//Bob

#include <iostream>

int main()
{

}

//문제 13번

#include <iostream>

int main()
{

}

//문제 14번

#include <iostream>

int main()
{

}

//문제 15번

#include <iostream>

int main()
{

}