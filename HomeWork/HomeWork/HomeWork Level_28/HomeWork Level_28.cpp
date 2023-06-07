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

#include <iostream>

int main()
{

}

//문제 5번

#include <iostream>

int main()
{

}

//문제 6번

#include <iostream>

int main()
{

}

//문제 7번

#include <iostream>

int main()
{

}