//문제 1번
//현수는 다른 조직으로 이직에 성공했습니다.
//이 그룹의 조직도를 인접행렬(N x N 사이즈)로 전달 받으면, 현수의 직속 보스와 직속 부하 들이 누군지 출력 해 주세요.
//문제 조건
//1. 현수는 0번 노드입니다.
//2. 부하들끼리 번호 순서대로 출력 해 주세요
//입력 예제
//7
//0 0 0 0 1 0 1
//0 0 0 0 0 1 0
//1 1 0 1 0 0 0
//0 0 0 0 0 0 0
//0 0 0 0 0 0 0
//0 0 0 0 0 0 0
//0 0 0 0 0 0 0
//출력 결과
//boss : 2
//under : 4 6

#include <iostream>

int main()
{
	int matrix[7][7] = {};

	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 7; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	std::cout << "boss : ";
	for (size_t i = 0; i < 7; i++)
	{
		if (matrix[i][0] == 1)
		{
			std::cout << i;
		}
	}
	std::cout << "\n";
	std::cout << "under : ";
	for (size_t i = 0; i < 7; i++)
	{
		if (matrix[0][i] == 1)
		{
			std::cout << i << " ";
		}
	}
}

//문제 2번
//마마코코 가족의 계보는 다음과 같습니다. (A ~H)
//다음과 같은 그래프를 인접행렬(2차배열)로 하드코딩 해주세요.
//이제 노드이름을 입력받고, 그 노드의 형제들을 모두 출력 해주세요.
//(만약 형제들이 없다면 "없음" 을 출력해주시면 됩니다.)
//예를들어 H의 형제는 B와 C입니다.
//A의 형제는 없습니다.
//C의 형제는 B와 H입니다.
//입력 예제
//H
//출력 결과
//B C

#include <iostream>

int matrix[8][8] =
{
	0,1,1,0,0,0,0,1,
	0,0,0,0,0,0,0,0,
	0,0,0,1,1,0,1,0,
	0,0,0,0,0,1,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
};

char arr[8] = { 'A','B','C','D','E','F','G','H' };

char a = 0;
int idx = 0;

void print(int _a)
{
	int flag = 0;

	for (size_t i = 0; i < 8; i++)
	{
		if (matrix[_a][i] == 1 && idx != i)
		{
			flag = 1;
			std::cout << arr[i] << " ";
		}
	}
	if (flag == 0)
	{
		std::cout << "없음";
	}
}

int main()
{
	std::cin >> a;

	for (size_t i = 0; i < 8; i++)
	{
		if (arr[i] == a)
			idx = i;
	}
	int flag = 0;
	for (int j = 0; j < 8; j++)
	{
		if (matrix[j][idx] == 1)
		{
			flag = 1;
			print(j);
		}
	}
	if (flag == 0)
	{
		std::cout << "없음";
	}
}

//문제 3번
//아래 이진 트리를 1차원 배열에 저장하세요.
//(Root 노드인 'A'를 1번 Index에 두는 것을 잊지마세요.)
//이제 문자 2개를 입력 받으세요.
//그 문자에 해당하는 노드가 서로 부모자식 관계인지 아닌지 출력 하세요.
//입력 예제
//G F
//출력 결과
//부모자식관계

#include <iostream>

int main()
{
	char matrix[9] = { '\0','A','D','F','Z','C','G','Q','H' };

	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;

	int aidx = 0;
	int bidx = 0;

	for (size_t i = 0; i < 9; i++)
	{
		if (matrix[i] == a)
		{
			aidx = i;
		}
	}

	for (size_t i = 0; i < 9; i++)
	{
		if (matrix[i] == b)
		{
			bidx = i;
		}
	}

	if (aidx * 2 == bidx || aidx * 2 + 1 == bidx || bidx * 2 == aidx || bidx * 2 + 1 == aidx)
	{
		std::cout << "부모자식관계";
	}
	else
	{
		std::cout << "아님";
	}
}

//문제 4번
//DFS는 그래프 / 트리를 탐색하는 방법입니다.배열 or 링크드리스트 자료구조는 for문으로 쉽게 탐색이 가능하지만,
//그래프 같은 자료구조는 for문으로 탐색이 어렵습니다.DFS로 탐색을 하곤합니다.
//N x N 그래프를 인접행렬로 입력받고,
//DFS 탐색 순서대로 출력 해 주세요.
//입력 예제
//7
//0 0 1 1 1 0 0
//0 0 0 0 0 0 0
//0 0 0 0 0 1 1
//0 1 0 0 0 0 0
//0 0 0 0 0 0 0
//0 0 0 0 0 0 0
//0 0 0 0 0 0 0
//출력 결과
//0 2 5 6 3 1 4

#include <iostream>

int map[7][7] = {};

char value[8] = "0123456";

void dfs(int _level, int _now)
{
	std::cout << value[_now];
	for (size_t i = 0; i < 7; i++)
	{
		if (map[_now][i] == 1)
		{
			dfs(_level + 1, i);
		}
	}
}

int main()
{
	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 7; j++)
		{
			std::cin >> map[i][j];
		}
	}

	dfs(0, 0);
}

//문제 5번
//다음을 하드코딩 해주세요.
//위 1차배열은 다음 이진 트리를 나타냅니다.
//이제 변경할 index와 값을 입력받아주세요.
//만약 4 7 을 입력 받았다면,
//배열의 4번 index의 값을 7로 바꾼 후 DFS를 돌리면 됩니다.
//DFS 돌린 결과를 출력 해 주세요.
//입력 예제
//4 7
//출력 결과
//3 4 7 1 2 3

#include <iostream>

char arr[8] = { '\0','3','4','2','4','1','\0','3' };
void dfs(int _idx)
{
	std::cout << arr[_idx];
	if (_idx * 2 > 7)
	{
		return;
	}
	dfs(_idx * 2);
	dfs(_idx * 2 + 1);
}

int main()
{
	int a = 0;
	std::cin >> a;

	int b = 0;
	std::cin >> b;

	arr[a] = b + 48;

	dfs(1);
}

//문제 6번
//N x N인접행렬 트리를 입력받아주세요.
//Level 2에 도착했을 때 마다 경로를 출력하며 됩니다.
//만약 위와 같은 트리를 입력받았다면, 다음과 같이 출력하면 됩니다.
//0 1 3
//0 1 4
//0 1 5
//0 2 6
//0 2 7
//0 2 8
//입력 예제
//9
//0 1 1 0 0 0 0 0 0
//0 0 0 1 1 1 0 0 0
//0 0 0 0 0 0 1 1 1
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//출력 결과
//0 1 3
//0 1 4
//0 1 5
//0 2 6
//0 2 7
//0 2 8

#include <iostream>

int matrix[9][9] =
{
	0,1,1,0,0,0,0,0,0,
	0,0,0,1,1,1,0,0,0,
	0,0,0,0,0,0,1,1,1,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0
};

char path[10] = {};
char a = '0';
void dfs(int _level, int _now)
{
	if (_level == 2)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < 9; i++)
	{
		if (matrix[_now][i] == 1)
		{
			path[_level + 1] = i + 48;
			dfs(_level + 1, i);
		}
	}
}

int main()
{
	path[0] = '0';
	dfs(0, 0);
}

//문제 7번
//최대 Level이 2인, Binary Tree를 1차원 배열에 입력받아주세요.
//(숫자 8개 입력, 숫자 0 은 없는 노드입니다.)
//짝수 노드를 발견할 때마다
//탐색을 멈추고, 왔었던 경로를 출력하시면 됩니다.
//입력 예제
//0 3 7 10 5 6 3 6
//출력 결과
//3 7 6
//3 10

#include <iostream>

int arr[8] = { 0,3,7,10,5,6,3,6 };
int path[8] = {};
void dfs(int _idx, int _level)
{
	path[_level] = arr[_idx];
	int mod = arr[_idx] % 2;

	if (mod == 0)
	{
		for (size_t i = 0; i <= _level; i++)
		{
			std::cout << path[i] << " ";
		}
		std::cout << "\n";
		return;
	}

	if (_idx * 2 > 7)
		return;

	dfs(_idx * 2, _level + 1);
	path[_level + 1] = 0;
	dfs(_idx * 2 + 1, _level + 1);
	path[_level + 1] = 0;
}

int main()
{
	dfs(1, 0);
}