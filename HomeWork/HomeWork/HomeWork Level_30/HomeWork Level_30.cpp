//문제 1번
//인접 행렬 그래프를 깊이 우선 탐색법으로 탐색 해봅시다.
//그래프를 나타내는 인접 행렬을 하드코딩 하세요.
//출발지점의 노드 값을 입력 받으세요.
//입력 받는 노드 부터 탐색을 시작할때,
//DFS로 노드들을 방문할 때마다 노드의 값을 출력해 주세요.
//한 노드에 여러 노드로 갈 수 있다면,
//숫자가 작은 노드부터 탐색 해주세요.
//입력 예제
//0
//출력 결과
//0 2 4 5 3

#include <iostream>

int matrix[6][6] =
{
	0,0,1,1,0,1,
	0,0,0,1,1,1,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	1,0,0,0,0,1,
	0,0,0,0,0,0
};

int visited[10] = {};

void dfs(int _now)
{
	std::cout << _now;
	for (size_t i = 0; i < 6; i++)
	{
		if (matrix[_now][i] == 1 && visited[i] == 0)
		{
			visited[i] = 1;
			dfs(i);
		}
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	visited[a] = 1;
	dfs(a);
}

//문제 2번
//각 노드들을 연결하는 선에는 가중치가 저장되어 있습니다.
//가중치가 저장되어 있는 그래프를 인접행렬로 하드 코딩하고 출발 지점을 입력 받으세요.
//출발 지점부터 깊이 우선 탐색법으로 탐색했을때 노드 번호와 가중치 경로의 합을 출력해 주세요.
//한번 방문한 노드는 다시 방문할 수 없습니다.출발지점의 가중치 시작 값은 0 입니다.
//한 노드에 여러 노드가 붙어있다면, 숫자가 작은 순서대로  탐색을 시도 합니다.
//입력 예제
//0
//출력 결과
//0 0
//2 1
//5 8
//3 15
//4 23

#include <iostream>

int matrix[6][6] =
{
	0,0,1,0,2,0,
	5,0,3,0,0,0,
	0,0,0,0,0,7,
	2,0,0,0,8,0,
	0,0,9,0,0,0,
	4,0,0,7,0,0
};

int visited[10] = {};

void dfs(int _now, int _sum)
{
	std::cout << _now << " " << _sum << "\n";
	for (size_t i = 0; i < 6; i++)
	{
		if (matrix[_now][i] != 0 && visited[i] == 0)
		{
			visited[i] = 1;
			dfs(i, _sum + matrix[_now][i]);
		}
	}
}

int main()
{
	int a = 0;
	std::cin >> a;

	visited[a] = 1;
	dfs(a, 0);
}

//문제 3번
//트리 자료구조에서 너비 우선 탐색법으로 각 노드를 탐색해주세요.
//시작 지점 부터, 노드에 방문할 때마다 값을 출력 해주세요.
//출발지점은 입력으로 주어 집니다.
//한번 방문 했던 노드는 방문할 수 없습니다.
//트리 자료구조는 인접행렬로 하드코딩 해주세요.
//입력 예제
//0
//출력 결과
//0 1 4 2 5 3

#include <iostream>
#include <queue>

struct Node
{
	int num;

};

int tree[6][6] =
{
	0,1,0,0,1,0,
	0,0,1,0,0,1,
	0,0,0,1,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
};


int main()
{
	int a = 0;
	std::cin >> a;
	std::queue<Node> queue;
	queue.push(Node{ a });

	while (!queue.empty())
	{
		Node p = queue.front();
		std::cout << p.num;

		for (int i = 0; i < 6; i++)
		{
			if (tree[p.num][i] == 1)
			{
				queue.push(Node{ i });
			}
		}
		queue.pop();
	}
}

//문제 4번
//아래에 그래프가 놓여져 있습니다.
//입력 받은 출발 지점에서 너비 우선 탐색법으로 그래프를 탐색해주세요.
//한번 방문했던 노드는 다시 방문할 수 없습니다.
//시작 지점부터 BFS가 끝날때까지 방문한 노드를 출력해주세요.
//입력 예제
//0
//출력 결과
//0
//4
//1
//3
//5
//2

#include <iostream>
#include <queue>

struct Node
{
	int num;
};

int graph[6][6] =
{
	0,0,0,0,1,0,
	1,0,1,0,0,1,
	1,0,0,1,0,0,
	1,1,0,0,0,0,
	0,1,0,1,0,1,
	0,0,1,1,0,0
};

int used[6];

int main()
{
	int a = 0;
	std::cin >> a;
	used[a] = 1;
	std::queue<Node> queue;
	queue.push(Node{ a });

	while (!queue.empty())
	{
		Node p = queue.front();
		std::cout << p.num << "\n";

		for (int i = 0; i < 6; i++)
		{
			if (graph[p.num][i] == 1 && used[i] == 0)
			{
				queue.push(Node{ i });
				used[i] = 1;
			}
		}
		queue.pop();
	}
}

//문제 5번
//원형시계가 있습니다.
//몇도 돌릴것인지 90도의 배수로 입력 받아주세요.
//그리고 시계를 시계방향으로 돌리고, 그 결과를 출력 하세요.
//입력 예제
//180
//출력 결과
//6 3 9 12

#include <iostream>

int map[3][3] =
{
	0,12,0,
	9,0,3,
	0,6,0
};

void spin()
{
	int c = map[0][1];
	map[0][1] = map[1][0];
	map[1][0] = map[2][1];
	map[2][1] = map[1][2];
	map[1][2] = c;
}

int main()
{
	int a = 0;
	std::cin >> a;
	int b = a / 90;

	for (size_t i = 0; i < b; i++)
	{
		spin();
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (map[i][j] != 0)
			{
				std::cout << map[i][j] << " ";
			}
		}
	}
}

//문제 6번
//축구 결승전에서 승부차기를 하게 되었습니다.
//oxox 이면 첫번째 / 세번째 사람이 공을 넣은 것입니다.
//승부차기 할 사람수를 입력 받고, 가능한 경우수를 출력 하세요.
//(재귀호출로 구현해주세요)
//입력 예제
//4
//출력 결과
//oooo
//ooox
//ooxo
//ooxx
//oxoo
//oxox
//oxxo
//oxxx
//xooo
//xoox
//xoxo
//xoxx
//xxoo
//xxox
//xxxo
//xxxx

#include <iostream>

char arr[2] = { 'O','X' };
char path[10] = {};

void dfs(int _level, int _a)
{
	if (_level == _a)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < 2; i++)
	{
		path[_level] = arr[i];
		dfs(_level + 1, _a);
		path[_level] = 0;
	}
};

int main()
{
	int a = 0;
	std::cin >> a;
	dfs(0, a);
}

//문제 7번
//아래 배열을 하드 코딩 해주세요.
//1 5 4 2 -5 -7
//n을 입력받고, n번째 큰 숫자를 출력 해주세요.
//만약 3을 입력받았다면, 세 번째로 큰 숫자는 5 > 4 > 2이기 때문에 2를 출력하면 됩니다.
//입력 예제
//3
//출력 결과
//2

#include <iostream>

int arr[6] = { 1,5,4,2,-5,-7 };

int main()
{
	int a = 0;
	std::cin >> a;

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
	std::cout << arr[a - 1];
}

//문제 8번
//0과 1로된 문자열 3개 입력 받으세요. (최대 30글자)
//2진수라고 생각 했을 때, 가장 큰 숫자를 출력 해주세요.
//입력 예제
//1001011
//11110
//1101110
//출력 결과
//1101110

#include <iostream>

int main()
{

}

//문제 9번
//후보들을 입력 받으세요.
//그리고 입력 한 후보 중 몇명을 선출할지 뽑을 인원을 입력 받으세요.(숫자 1개 입력)
//중복을 허용하여 뽑을 수 있는 후보의 경우를 출력 해주세요.
//(Backtracking을 이용해서 풀어주세요)
//입력 예제
//AGFT
//2
//출력 결과
//AA
//AG
//AF
//AT
//GA
//GG
//GF
//GT
//FA
//FG
//FF
//FT
//TA
//TG
//TF
//TT

#include <iostream>

char arr[256] = {};
char path[10] = {};

void dfs(int _level, int _a, int _b)
{
	if (_level == _a)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < _b; i++)
	{
		path[_level] = arr[i];
		dfs(_level + 1, _a, _b);
		path[_level] = 0;
	}
}

int main()
{
	std::cin >> arr;
	int A = strlen(arr);
	int a = 0;
	std::cin >> a;
	dfs(0, a, A);
}

//문제 10번
//A ~Z 까지 대입을 해봐서 암호를 알아내려고 합니다.
//아래의 순서대로 대입을 해보려합니다.
//AAAA
//AAAB
//AAAC
//...
//ZZZZ
//자전거 암호 n개가 존재할때, 몇회만에 각 암호를 해제 할 수 있는지 출력하세요.
//입력 예제
//3
//AAAC
//ATKC
//ZBAB
//출력 결과
//3
//13107
//440078

#include <iostream>

int count = 0;
char path[10] = {};
char arr[256][256] = {};

void dfs(int _level)
{
	if (_level == 4)
	{
		count++;
		for (size_t i = 0; i < 3; i++)
		{
			if (strcmp(arr[i], path) == 0)
				std::cout << count << "\n";
		}
		return;
	}



	for (size_t i = 0; i < 26; i++)
	{
		path[_level] = 'A' + i;
		dfs(_level + 1);
		path[_level] = 0;
	}
}

int main()
{
	int a = 0;
	std::cin >> a;

	for (size_t i = 0; i < a; i++)
	{
		std::cin >> arr[i];
	}

	dfs(0);
}

//문제 11번
//다섯 숫자를 아래 배열에 입력 받으세요.
//입력받은 숫자들 중 몇 개를 뽑아서
//더했을 때 값이 10~20 되는 조합이 총 몇 가지 인지 Counting 해주세요
//(Backtracking으로 구현 해 주세요)
//입력 예제
//5 4 3 9 1
//출력 결과
//16

#include <iostream>

int main()
{

}

//문제 12번

#include <iostream>

int main()
{

}