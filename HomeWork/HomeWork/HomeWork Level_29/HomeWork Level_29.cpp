//문제 1번
//문자열로 구성된 이진트리를 입력 받아주세요.
//(1차원 배열에 저장하는 형태로 입력이 주어집니다.)
//(#은 노드가 없음을 의미합니다.)
//Root노드부터 DFS를 돌리면서
//대문자 노드를 탐색할 때마다 출력 해 주세요.
//만약 #MIn#C#O##dE을 입력받았다면
//출력결과 : MICEO
//입력 예제
//#MIn#C#O##dE
//출력 결과
//MICEO

#include <iostream>

char str[256] = {};

void dfs(int _idx)
{
	if (str[_idx] == '#' || str[_idx] == '\0')
	{
		return;
	}

	if ('A' <= str[_idx] && str[_idx] <= 'Z')
	{
		std::cout << str[_idx];
	}

	dfs(_idx * 2);
	dfs(_idx * 2 + 1);
}

int main()
{
	std::cin >> str;

	dfs(1);
}

//문제 2번
//8개의 노드로 구성 된 문자열과
//대응되는 인접행렬을 입력받아주세요.
//아래 이미지는 입력 예시에 해당하는 트리입니다.
//0번 노드부터 DFS로 노드들을 탐색하면서 출력 해 주세요.
//입력 예제
//RKFCBICM
//0 1 1 1 0 0 0 0
//0 0 0 0 1 1 0 0
//0 0 0 0 0 0 0 0
//0 0 0 0 0 0 1 1
//0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0
//출력 결과
//RKBIFCCM

#include <iostream>

char str[9] = {};
int matrix[8][8] = {};

void dfs(int _level, int _now)
{
	std::cout << str[_now];

	for (size_t i = 0; i < 8; i++)
	{
		if (matrix[_now][i] == 1)
		{
			dfs(_level + 1, i);
		}
	}

}

int main()
{
	std::cin >> str;
	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = 0; j < 8; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	dfs(0, 0);
}

//문제 3번
//6글자를 입력받고 링크드리스트로 다음과 같이 연결시켜주세요.
//링크드리스트 노드에 각각 입력받은 문자를 넣어주면 됩니다.
//만약, ABCDEF 를 입력 받았다면 아래와 같습니다.
//이제 DFS를 돌린결과를 출력 해주세요.
//입력 예제
//ABCDEF
//출력 결과
//ABDECF

#include <iostream>

struct Node
{
	Node()
		:ch(0)
		, mleft(nullptr)
		, mright(nullptr)
	{

	}
	char ch;
	Node* mleft;
	Node* mright;
};


void dfs(Node* _node)
{
	if (_node == nullptr)
	{
		return;
	}
	std::cout << _node->ch;


	dfs(_node->mleft);
	dfs(_node->mright);
}

int main()
{
	Node* head = new Node;
	head->ch = 'A';
	head->mleft = new Node;
	head->mleft->ch = 'B';
	head->mleft->mleft = new Node;
	head->mleft->mleft->ch = 'D';
	head->mleft->mright = new Node;
	head->mleft->mright->ch = 'E';
	head->mright = new Node;
	head->mright->ch = 'C';
	head->mright->mleft = new Node;
	head->mright->mleft->ch = 'F';

	dfs(head);
}

//문제 4번
//노드에 들어갈 숫자 7개를 입력 받으세요.
//만약 3 5 7 4 2 6 9 를 입력 받았다면 다음과 같습니다.
//(Root는 1번 index에 저장해야 함을 잊지마세요)
//이제 마지막 노드(Level2)에 있는 숫자들의 합을
//DFS를 돌려 구해주세요.
//입력 예제
//3 5 7 4 2 6 9
//출력 결과
//21

#include <iostream>

int arr[8] = {};
int sum;
void dfs(int _idx, int _level)
{
	if (_idx > 7)
	{
		return;
	}
	if (_level == 2)
	{
		sum = sum + arr[_idx];
	}

	dfs(_idx * 2, _level + 1);
	dfs(_idx * 2 + 1, _level + 1);
}

int main()
{
	for (size_t i = 1; i <= 7; i++)
	{
		std::cin >> arr[i];
	}
	dfs(1, 0);
	std::cout << sum;
}

//문제 5번
//0 ~5번까지 6개 노드로 구성된 인접행렬을 입력받아주세요.
//0번 노드부터 BFS를 돌려, 홀수 노드를 찾을 때 마다 출력 해 주세요.
//만약 위와 같이 트리를 입력받았다면,
//출력결과 : 1 3 5
//입력 예제
//0 1 0 1 1 0
//0 0 1 0 0 1
//0 0 0 0 0 0
//0 0 0 0 0 0
//0 0 0 0 0 0
//0 0 0 0 0 0
//출력 결과
//1 3 5

#include <iostream>
#include <queue>

struct Node
{
	int num;
	int level;
};

int matrix[6][6] = {};

int main()
{
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	std::queue<Node> queue;
	queue.push(Node{ 0, 0 });

	while (!queue.empty())
	{
		Node p = queue.front();

		for (int i = 0; i < 6; i++)
		{
			if (matrix[p.num][i] == 1)
			{
				queue.push(Node{ i, p.level + 1 });
				int mod = i % 2;
				if (mod == 1)
				{
					std::cout << i << " ";
				}
			}
		}
		queue.pop();
	}
}

//문제 6번
//노드 안에 들어갈 문자 5개를 입력 받으세요.
//만약 ABCDE 입력 받으면 아래와 같이 저장됩니다.
//(트리모양은 고정입니다)
//위 트리를 인접행렬로 저장하고, DFS를 돌려 탐색 순서대로 출력하세요.
//입력 예제
//ABCDE
//출력 결과
//ABDEC

#include <iostream>

struct Node
{
	char ch;
};

Node str[6] = {};

void dfs(int _idx)
{
	if (_idx > 5)
	{
		return;
	}
	std::cout << str[_idx].ch;
	dfs(_idx * 2);
	dfs(_idx * 2 + 1);
}

int main()
{
	for (size_t i = 1; i <= 5; i++)
	{
		std::cin >> str[i].ch;
	}

	dfs(1);
}

//문제 7번
//총 8개의 숫자를 1차원 배열에 입력받습니다. (1~9 사이 숫자, 0은 없는 노드)
//BFS를 돌려 탐색 순서대로 값을 출력 해주세요.
//만약 0 3 7 4 2 0 9 6 을 입력 받았다면 위와 같은 트리가 됩니다.
//입력 예제
//0 1 2 3 0 0 4 5
//출력 결과
//1 2 3 4 5

#include <iostream>
#include <queue>

struct Node
{
	int num;
	int idx;
};

Node arr[8] = {};
int matrix[8] = {};

int main()
{
	for (int i = 0; i < 8; i++)
	{
		std::cin >> arr[i].num;
	}

	for (int i = 0; i < 8; i++)
	{
		if (arr[i].num > 0)
		{
			matrix[i] = 1;
		}
	}

	std::queue<Node> queue;
	queue.push(Node{ 0 , 1 });

	while (!queue.empty())
	{
		Node p = queue.front();
		if (p.idx == 2)
		{
			std::cout << p.num << " ";
		}
		for (int i = 1; i < 8; i++)
		{
			if (matrix[i] == 1 && p.idx == 1)
			{
				queue.push(Node{ arr[i].num , p.idx + 1 });

			}
		}
		queue.pop();
	}
}

//문제 8번
//터미네이터의 신경체계가 다음과 같이 트리형태로 되어있다고 합니다.
//인접행렬 형태로 초기화를 해 주세요.
//이 신경쳬계를 트리로 하드코딩 하고, 나노 탐사로봇이 탐색을 하려고 합니다.
//BFS 알고리즘을 쓸때 탐사순서대로 출력해주세요.
//입력 예제
//A
//출력 결과
//A B C D E F G H I J

#include <iostream>
#include <queue>

struct Node
{
	char ch;
	int num;
	int level;
};

int matrix[10][10] =
{
	0,1,0,0,0,0,0,0,0,0,
	0,0,1,1,1,1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,1,0,0,0,
	0,0,0,0,0,0,0,1,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,1,0,
	0,0,0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0
};

int main()
{
	char a = 0;
	std::cin >> a;

	std::queue<Node> queue;
	queue.push(Node{ a,a - 65,0 });

	while (!queue.empty())
	{
		Node p = queue.front();

		std::cout << p.ch;
		for (int i = 0; i < 10; i++)
		{
			if (matrix[p.num][i] == 1)
			{
				queue.push(Node{ (char)(i + 65), i, p.level + 1 });
			}
		}
		queue.pop();
	}
}

//문제 9번
//조상 두더지는 1년에 세마리의 자식을 낳습니다.
//1년 후 각각의 자식들은 각자 세마리의 자식을 낳습니다.
//큐를 이용해서 n년 후에는 총 몇마리의 두더지가 있는지 출력 해주세요.
//입력 예제
//1
//출력 결과
//4

#include <iostream>
#include <queue>

struct Node
{
	int num;
	int level;
};

int n = 0;

int main()
{
	std::cin >> n;
	std::queue<Node> queue;

	int a = 1;
	int sum = 0;

	queue.push(Node{ 1, 0 });

	while (!queue.empty())
	{
		Node p = queue.front();
		sum = sum + p.num;
		if (p.level < n)
		{
			a = a * 3;
			queue.push(Node{ a ,p.level + 1 });
		}

		queue.pop();
	}
	std::cout << sum;
}

//문제 10번
//처음 점프를 할 n값을 입력 받으세요.
//만약,
//1 을 입력 받으면   3 으로 점프하고,
//2 를 입력 받으면   1 로 점프합니다.
//그리고 다음 점프는 바닥에 써 있는 칸만큼 점프를 계속 합니다.
//도착지점에 도달하면 return을 하게 되어 시작점으로 돌아옵니다.
//이 과정을 모두 출력 해주세요.
//(재귀호출로 구현 해 주세요)
//입력 예제
//5
//출력 결과
//시작 3 2 도착 2 3 시작

#include <iostream>

int main()
{

}

//문제 11번
//추적을 시작 할 index를 입력 받으세요.
//만약 5를 입력 받았다면, 5번 index 부터 추적을 시작합니다.
//5번 index를 살펴보면 범인은 4번 index에서 출발했고, 9시에 도착했다는 것을 알 수 있습니다.
//4번 index를 살펴보면 범인은 2번 index에서 출발했고, 8시에 도착했다는 것을 알 수 있습니다.
//2번 index를 살펴보면 범인은 0번 index에서 출발했고, 5시에 도착했다는 것을 알 수 있습니다.
//범죄자의 흔적들을 추적해가면, 마지막에는 - 1에 도달합니다.
//- 1이 있는 곳에서 범죄자를 잡을 수 있습니다.
//범인은 0번 index부터 몇 시에 몇 번 index로 이동했는지
//순서대로 출력하세요.
//(재귀를 이용해서 범인을 추적 해 주세요)
//입력 예제
//5
//출력 결과
//0번index(출발)
//2번index(5시)
//4번index(8시)
//5번index(9시)

#include <iostream>

int a = 0;

int evid[7] = { -1,0,0,1,2,4,4 };
int timeStemp[7] = { 8,3,5,6,8,9,10 };

void abc(int _a)
{
	if (evid[_a] == -1)
	{
		std::cout << _a << "번index(출발)" << "\n";
		return;
	}
	abc(evid[_a]);
	std::cout << _a << "번index(" << timeStemp[_a] << "시)\n";
}

int main()
{
	std::cin >> a;

	abc(a);
}

//문제 12번
//3x3 배열에 숫자를 입력해 채워줍니다.
//그리고 가로로 한줄씩 모두 같은 숫자인지 검사하는 프로그램을 작성해주세요.
//같으면 같은 숫자를 출력, 아니면(소문자)x를 출력 하세요.
//입력 예제
//3 3 3
//5 6 7
//9 9 9
//출력 결과
//3
//x
//9

#include <iostream>

int arr[3][3] = {};

void isSame(int _a)
{
	int flag = 0;
	int a = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = i + 1; j < 3; j++)
		{
			if (arr[_a][i] != arr[_a][j])
			{
				flag = 1;
			}
			else
			{
				a = arr[_a][i];
			}
		}
	}
	if (flag == 1)
	{
		std::cout << "X" << "\n";
	}
	else
	{
		std::cout << a << "\n";
	}
}

int main()
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		isSame(i);
	}
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

//문제 16번

#include <iostream>

int main()
{

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