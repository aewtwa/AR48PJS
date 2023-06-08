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

int main()
{

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

//문제 8번

#include <iostream>

int main()
{

}

//문제 9번

#include <iostream>

int main()
{

}

//문제 10번

#include <iostream>

int main()
{

}

//문제 11번

#include <iostream>

int main()
{

}

//문제 12번

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