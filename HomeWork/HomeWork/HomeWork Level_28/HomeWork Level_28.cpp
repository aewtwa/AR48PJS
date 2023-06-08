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

//문제 8번
//문자와 숫자로 구성된 세트를 n개 입력 받습니다.
//(노드를 만들고 구조체 배열에 입력 받아주세요)
//아래와 같은 우선순위를 기준으로, 정렬 후 결과를 출력 해주세요.
//* 정렬 우선순위
//1. 문자 우선
//2. 같은 문자라면 숫자를 기준으로 정렬
//입력 예제
//8
//A 3
//C 2
//H 9
//I 8
//H 2
//C 9
//C 1
//A 10
//출력 결과
//A 3
//A 10
//C 1
//C 2
//C 9
//H 2
//H 9
//I 8

#include <iostream>

struct Node
{
	char ch;
	int num;
};

int main()
{
	Node ABC[8] = {};
	for (size_t i = 0; i < 8; i++)
	{
		std::cin >> ABC[i].ch;
		std::cin >> ABC[i].num;
	}

	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = i + 1; j < 8; j++)
		{
			if (ABC[i].ch > ABC[j].ch)
			{
				Node c = ABC[i];
				ABC[i] = ABC[j];
				ABC[j] = c;
			}
		}
	}

	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = i + 1; j < 8; j++)
		{
			if (ABC[i].ch == ABC[j].ch && ABC[i].num > ABC[j].num)
			{
				Node c = ABC[i];
				ABC[i] = ABC[j];
				ABC[j] = c;
			}
		}
	}

	for (size_t i = 0; i < 8; i++)
	{
		std::cout << ABC[i].ch << " " << ABC[i].num << "\n";
	}
}

//문제 9번
//Level depth와 Branch수를 입력 받으세요.
//아래 그림과 같이 동작하는 재귀호출을 구현하고,
//마지막 Level 에서 경로를 모두 출력 해주세요.
//입력 예제
//2
//3
//출력 결과
//0 0
//0 1
//0 2
//1 0
//1 1
//1 2
//2 0
//2 1
//2 2

#include <iostream>

int a = 0;
int b = 0;
char path[10] = {};
char arr[3] = { '0','1','2' };

void abc(int _level)
{
	if (_level == a)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < b; i++)
	{
		path[_level] = arr[i];
		abc(_level + 1);
		path[_level] = 0;
	}
}

int main()
{
	std::cin >> a;
	std::cin >> b;
	abc(0);
}

//문제 10번
//6칸짜리 두 배열이 있습니다.
//두배열에 6자리 숫자를 각각 채워주세요.
//그리고 두 숫자의 합을 출력 해주세요.
//(두 수의 합이 1, 000, 000보다 작은 입력값으로 주어집니다.)
//자릿수 올림 처리를 잊지마세요
//ex)
//351429
//+ 137735
//__________
//489164
//입력 예제
//3 5 1 4 2 9
//1 3 7 7 3 5
//출력 결과
//4 8 9 1 6 4

#include <iostream>

int main()
{
	int arr1[6] = {};
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr1[i];
	}
	int arr2[6] = {};
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr2[i];
	}
	int arr3[6] = {};
	for (size_t i = 0; i < 6; i++)
	{
		if (arr2[i] + arr1[i] > 9)
		{
			arr3[i] = arr2[i] + arr1[i] - 10;
			arr3[i - 1]++;
		}
		else
		{
			arr3[i] = arr2[i] + arr1[i];
		}
	}
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << arr3[i] << " ";
	}
}

//문제 11번
//5개의 숫자를 배열에 입력 받으세요.
//이 숫자가 증가되는 숫자로 되어 있는지 확인하는 프로그램을 작성해주세요.
//(Hint:1중 for문을 사용하면 됩니다)
//증가되는 숫자로 되어 있으면 "증가됨"
//아니면 "증가안됨" 이라고 출력 해주세요.
//입력 예제
//3 9 7 10 5
//출력 결과
//증가안됨

#include <iostream>

int main()
{
	int arr[5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	int flag = 0;
	for (size_t i = 1; i < 5; i++)
	{
		if (arr[i] <= arr[i - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		std::cout << "증가안됨";
	}
	else
	{
		std::cout << "증가됨";
	}
}

//문제 12번
//다섯 자리 숫자 1개를 입력으세요. (10000 ~89999 사이 숫자)
//그리고 이 숫자를 분해하여 배열에 각 숫자들을 집어 넣어 주세요.
//그 다음 각각 1씩 더하여 거꾸로 출력 하면 됩니다.
//(자리올림을 신경쓰셔야 합니다)
//입력 예제
//35421
//출력 결과
//23564

#include <iostream>

int main()
{
	char arr[6] = {};
	std::cin >> arr;
	for (size_t i = 0; i < 5; i++)
	{
		arr[i]++;
	}
	for (int i = 4; i >= 0; i--)
	{
		std::cout << arr[i];
	}
}

//문제 13번
//한 문장을 입력 받으세요.(최대 10글자)
//도플이니셜(같은 알파벳이 있는 문자)들을 찾고, 정렬해서 출력 해주세요.
//만약 ATKPGTBA를 입력받았다면,
//A와 T만 2개 이상 있으므로, 도플이니셜입니다.
//입력 예제
//ATKPGTBA
//출력 결과
//AT

#include <iostream>

int main()
{
	char str[11] = {};
	std::cin >> str;

	int bucket[256] = {};
	for (size_t i = 0; i < 10; i++)
	{
		int target = str[i];
		bucket[target]++;
	}

	for (size_t i = 1; i < 256; i++)
	{
		if (bucket[i] > 1)
		{
			std::cout << (char)i;
		}
	}
}

//문제 14번
//2차배열에 1~6까지의 숫자가 있습니다.
//아래 2차배열을 하드코딩 해주세요.
//그리고 숫자들의 빈도수를 그래프로 표현해주세요.(Direct Addressing Table 이용)
//빈도수 그래프를 화면에 그대로 표현(출력) 해주시면 됩니다.
//출력 결과
//1 * *
//2 *
//3 * **
//4 * *
//5 * *
//6 * *

#include <iostream>

int map[4][3] =
{
	3,5,1,
	3,1,2,
	3,4,6,
	5,4,6
};

int main()
{
	int bucket[7] = {};

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			int target = map[i][j];
			bucket[target]++;
		}
	}

	for (size_t i = 1; i < 7; i++)
	{
		std::cout << i << " ";
		for (size_t j = 0; j < bucket[i]; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}