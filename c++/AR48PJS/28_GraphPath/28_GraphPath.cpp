#include <iostream>
#include <queue>

int matrixGraph[6][6] =
{
	0,1,1,1,0,0,
	1,0,0,1,0,1,
	1,0,0,1,0,0,
	1,1,1,0,1,1,
	0,0,0,1,0,1,
	0,1,0,1,1,0,
};

char valueGr[10] = "ZADCEB";
char path[10] = "";
int visited[10] = {};

int min = 987654321;

// 모든경로 확인
void dfs(int now, int level)
{
	//
	std::cout << path;
	std::cout << std::endl;

	for (size_t i = 0; i < 6; i++)
	{
		if (matrixGraph[now][i] == 1
			&& visited[i] == 0)
		{
			path[level + 1] = valueGr[i];
			visited[i] = 1;
			dfs(i, level + 1);
			visited[i] = 0;
			path[level + 1] = 0;
		}
	}
}

struct Node
{
	int num = -1;
	int used[6] = {};
};

int main()
{
	path[0] = 'Z';
	visited[0] = 1;
	//dfs(0, 0);


	std::queue<Node> queue;
	queue.push(Node{ 0, {1,0,0,0,0,0} });

	while (!queue.empty())
	{
		Node p = queue.front();

		for (int i = 0; i < 6; i++)
		{
			if (matrixGraph[p.num][i] == 1
				&& p.used[i] == 0)
			{
				Node newNode = {};
				newNode.num = i;
				memcpy(newNode.used, p.used, sizeof(int) * 6);
				newNode.used[i] = 1;

				queue.push(newNode);
			}
		}

		for (size_t i = 0; i < 6; i++)
		{
			if (p.used[i] == 1)
			{
				std::cout << valueGr[i];
			}
		}
		std::cout << std::endl;

		queue.pop();
	}

	return 0;
}