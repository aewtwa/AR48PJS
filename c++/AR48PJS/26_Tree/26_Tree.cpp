// 26_Tree.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>

//template <typename T>
//class Queue
//{
//public:
//    Queue()
//        : mDatas{-1, -1,}
//        , mFront(0)
//        , mEnd(0)
//    {
//
//    }
//
//    void Push(T data)
//    {
//        mDatas[mEnd] = data;
//        mEnd++;
//    }
//
//    T Pop()
//    {
//        return mDatas[mFront++];
//    }
//
//private:
//    T mDatas[256];
//    int mFront;
//    int mEnd;
//};

// Tree
// 단방향 그래프
// Cycle이 없어야한다.
// 부모자식 구조를 띄게된다.


// 배열을 이용한 트리 표현(인접행렬)
int matrix[5][5] =
{
	0,1,1,0,0,
	0,0,0,1,1,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
};

int matrixGraph[5][5] =
{
	0,1,0,0,0,
	0,0,1,1,0,
	0,0,0,0,0,
	1,0,0,0,1,
	0,0,0,0,0,
};

char valueGr[10] = "TEQWA";
char value[10] = "TBECD";
char path[10] = "";
int visited[10] = {};

void dfs(int now)
{
	std::cout << valueGr[now];

	for (size_t i = 0; i < 5; i++)
	{
		if (matrixGraph[now][i] == 1
			&& visited[i] == 0)
		{
			visited[i] = 1;
			dfs(i);
		}
	}
}


void dfs(int level, int now)
{
	std::cout << value[now];

	for (size_t i = 0; i < 5; i++)
	{
		if (matrix[now][i] == 1)
		{
			path[level + 1] = value[i];
			dfs(level + 1, i);
			path[level + 1] = 0;
		}
	}
}


//bfs 를 쓰는 이유
// 그래프 / 트리를 탐색하는데 dfs만으로는 시간적으로
// 많은 시간이 소요된다.
// 그래프 / 트리의 연결상태에 따라서 dfs보다 빠른속도로
// 탐색하기위해 bfs를 사용한다.


// dfs ( 깊이 우선 탐색 )
// 모든 노드를 탐색해야 할때 BFS보다 더 빠른 속도를 낸다.
// 구현 소스코드가 짧다.
// 구현하기는 더 어렵다 ( 재귀함수를 활용하기 때문에 )

// bfs ( 너비 우선 탐색 )
// 최소 level에 있는 노드를 찾아야 할 때 dfs보다 더
// 빠른 속도를 낸다.
// 이해하기는 쉽지만 구현해야할 소스코드가 더 길다.

int bfsMatrix[6][6] =
{
	0,1,1,0,0,0,
	0,0,0,1,1,0,
	0,0,0,0,0,1,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
};

struct Node
{
	int num;
	int level;
};

// 그래프 탐색할떄 노드가 사용됬는지
// 체크해주는 배열
int used[256] = {};

int main()
{
	std::queue<Node> queue;
	queue.push(Node({ 0,0 }));

	while (!queue.empty())
	{
		Node p = queue.front();
		std::cout << p.num << " ";

		for (int i = 0; i < 6; i++)
		{
			if (bfsMatrix[p.num][i] == 1
				&& used[i] == 0)
			{
				used[i] = 1;
				queue.push(Node{ i, p.level + 1 });
			}
		}
		queue.pop();
	}

	//길찾기 BFS
	struct MazeNode
	{
		int x;
		int y;
	};

	int map[3][4] = {};
	std::queue<MazeNode> mazeQueue;
	mazeQueue.push(MazeNode({ 0,2 }));

	int direct[4][2] =
	{
		0,-1,
		1,0,
		0,1,
		-1,0,
	};

	while (!mazeQueue.empty())
	{
		MazeNode p = mazeQueue.front();
		map[p.y][p.x] = 1;

		if (p.x == 3 && p.y == 0)
		{
			// 찾았다.
		}

		for (size_t i = 0; i < 4; i++)
		{
			int newX = p.x + direct[i][0];
			int newY = p.y + direct[i][1];

			if (map[newY][newX] == 1)
				continue;
			if (newX < 0 || newY < 0)
				continue;
			if (newX >= 4 || newY >= 3)
				continue;

			mazeQueue.push(MazeNode({ newX , newY }));

		}

		mazeQueue.pop();
	}


	return 0;
}