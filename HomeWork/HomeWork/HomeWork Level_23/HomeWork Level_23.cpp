//문제 1번
//네 명의 친구들의 이름을 입력 받아 주세요. (사람당 한글자씩, 총 4글자)
//그리고 이 친구들 중 1등, 2등, 3등을 뽑아 선물을 주려고 합니다.
//한 사람은 하나의 선물만 받을 수 있습니다.
//선물을 줄 수 있는 경우를 모두 출력 해주세요.
//[TIP:중복순열과 순열의 차이]
//A, B, C, D 중 2장을 뽑는 경우의 수
//중복순열 : 16가지(AA, AB, AC, AD / BA, BB, BC, BD / CA, CB, CC, CD / DA, DB, DC, DB)
//순열 : 4가지(AB, AC, AD / BA, BC, BD / CA, CB, CD / DA, DB, DC)
//입력 예제
//ATKP
//출력 결과
//ATK
//ATP
//AKT
//AKP
//APT
//APK
//TAK
//TAP
//TKA
//TKP
//TPA
//TPK
//KAT
//KAP
//KTA
//KTP
//KPA
//KPT
//PAT
//PAK
//PTA
//PTK
//PKA
//PKT

#include <iostream>

char path[3] = {};
int visited[10] = {};
void abc(int _Level, char* _a)
{
	if (_Level == 3)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (visited[i] == 0)
		{
			visited[i] = 1;
			path[_Level] = _a[i];
			abc(_Level + 1, _a);
			path[_Level] = 0;
			visited[i] = 0;
		}
	}
}

int main()
{
	char arr[5] = {};
	std::cin >> arr;
	abc(0, arr);
}

//문제 2번
//네 글자를 입력 받으세요.
//네 글자를 조합하여 나올수 있는 모든 경우가 몇가지인지 알아내고자 합니다.
//그런데 B와 T 글자는 서로 붙어있으면 안됩니다.
//재귀호출을 이용해서 풀어주세요
//ex)
//만약, BOTK 네글자를 입력받았다면,
//BBBB->가능
//BBBT->불가능
//BOOT->가능
//TTBK->불가능
//TTTK->가능
//네 글자를 입력받고,
//B와 T글자가 서로 붙어있지 않은 총 경우의 수가 몇 가지인지 출력하세요.
//입력 예제
//BOTT
//출력 결과
//120

#include <iostream>

char path[4] = {};
int count = 0;
char arr[3][3] = {};
int isSame()
{
	char BT[3] = "BT";
	char TB[3] = "TB";
	for (size_t i = 0; i < 3; i++)
	{
		arr[i][0] = path[i];
		arr[i][1] = path[i + 1];
	}
	for (size_t i = 0; i < 3; i++)
	{
		if (strcmp(arr[i], BT) == 0 || strcmp(arr[i], TB) == 0)
		{
			return 0;
		}
	}
	return 1;
}

void abc(int _level, char* _a)
{
	if (_level == 4)
	{
		if (isSame() == 1)
		{
			count++;
		}
		return;
	}
	for (size_t i = 0; i < 4; i++)
	{
		path[_level] = _a[i];
		abc(_level + 1, _a);
		path[_level] = '\0';
	}
}

int main()
{
	char arr[5] = {};
	std::cin >> arr;
	abc(0, arr);
	std::cout << count;
}

//문제 3번
//A / B / C 세 종류의 초콜릿이 있습니다
//이 중 n개의 초콜릿을 선택하려고 하는데
//3개 연속으로 같은 알파벳의 초콜릿을 선택하면 안됩니다.
//가져갈 n개의 초콜릿 개수를 입력받고, 나올수 있는 총 가짓수를 출력해주세요.
//(재귀호출을 이용해서 풀어주세요)
//ex) 3개의 초콜릿을 선택한다고 한다면
//AAA-- > 불가능
//AAB-- > 가능
//AAC-- > 가능
//ABA-- > 가능
//...
//CCC->불가능
//----------------
//총 24가지
//입력 예제
//3
//출력 결과
//24

#include <iostream>

char path[10] = {};
int count = 0;

int isSame(int _a)
{
	for (int i = 0; i < _a - 2; i++)
	{
		if (path[i] == path[i + 1] && path[i + 1] == path[i + 2])
		{
			return 0;
		}
	}
	return 1;
}

void abc(int _level, int _a)
{
	if (_level == _a)
	{
		if (isSame(_a) == 1)
		{
			count++;
		}
		return;
	}
	for (size_t i = 0; i < 3; i++)
	{
		path[_level] = 'A' + i;
		abc(_level + 1, _a);
		path[_level] = '\0';
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(0, a);
	std::cout << count;
}

//문제 4번
//인기그룹 산타소년단이 있습니다.
//맴버 다섯명의 이름은 각각 B T S K R 입니다.
//이 그룹에서 n명을 순서대로 뽑아서 새로운 소규모 그룹을 만드려고 합니다.
//첫 번째 뽑인사람이 리더이며,
//두 번째 이후부터는 세컨드, 서드 등등 역할이 주어집니다.
//맴버 중 방송국 국장 아들인 S군은 새로운 소규모 팀에 들어있어야 합니다.
//n을 입력받으세요.
//그리고 n명을 뽑아 맴버를 구성하려고 할 때,
//나올 수 있는 순열의 수를 Counting해서 출력 해 주세요.
//[힌트]
//cnt++ 하기 전, via['S'의 index] == 1 인지 확인하면
//S가 포함되었는지 알 수 있음
//입력 예제
//3
//출력 결과
//36

#include <iostream>

char arr[5] = { 'B','T','S','K','R' };
char path[10] = {};
int count = 0;
int visited[10] = {};
int isExist()
{
	for (size_t i = 0; i < 10; i++)
	{
		if (path[i] == 'S')
		{
			return 1;
		}
	}
	return 0;
}

void abc(int _level, int _a)
{
	if (_level == _a)
	{
		if (isExist() == 1)
		{
			count++;
		}
		return;
	}
	for (size_t i = 0; i < 5; i++)
	{
		if (visited[i] == 0)
		{
			visited[i] = 1;
			path[_level] = arr[i];
			abc(_level + 1, _a);
			path[_level] = '\0';
			visited[i] = 0;
		}
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(0, a);
	std::cout << count;
}

//문제 5번
//'E', 'W', 'A', 'B', 'C' 라는 친구들이 놀이기구를 타려고 합니다.
//이 놀이기구는 가장 앞좌석부터 뒷좌석까지 4명이 탈 수 있는 보트입니다.
//다섯명의 친구들 중 탈 순서를 정해야 하는데,
//한명을 제외시켜야 합니다.
//제외시킬 친구를 입력받고(문자 1개입력)
//이 친구를 제외한 모든 순열을 출력 해 주세요.
//입력 예제
//E
//출력 결과
//WABC
//WACB
//WBAC
//WBCA
//WCAB
//WCBA
//AWBC
//AWCB
//ABWC
//ABCW
//ACWB
//ACBW
//BWAC
//BWCA
//BAWC
//BACW
//BCWA
//BCAW
//CWAB
//CWBA
//CAWB
//CABW
//CBWA
//CBAW

#include <iostream>

char arr[5] = { 'E','W','A','B','C' };
char path[5] = {};
int visited[10] = {};
void abc(int _level, char _a)
{
	if (_level == 4)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < 5; i++)
	{
		if (visited[i] == 0 && arr[i] != _a)
		{
			visited[i] = 1;
			path[_level] = arr[i];
			abc(_level + 1, _a);
			path[_level] = '\0';
			visited[i] = 0;
		}
	}
}

int main()
{
	char a = 0;
	std::cin >> a;
	abc(0, a);
}

//문제 6번
//다섯 종류의 카드를 입력받습니다. ('0' ~'9')
//각각의 카드들은 다량으로 쌓여있습니다.
//다섯 종류의 숫자 카드에서 4장을 뽑으려고 합니다.
//뽑을 때마다 전에 뽑았던 카드번호와 간격이 3이하로 차이나는
//중복순열이 몇 가지인지 출력하세요.
//재귀호출을 이용해서 풀어주세요
//[힌트]
//path[level - 1] 와 path[level] 의 절대값이 3 차이가 나는지 확인
//입력 예제
//12345
//출력 결과
//497

#include <iostream>

int arr[5] = {};
char path[5] = {};
int count = 0;

int isdiff()
{
	for (size_t i = 0; i < 3; i++)
	{
		if (path[i] + 3 < path[i + 1] || path[i] - 3 > path[i + 1])
			return 1;
	}
	return 0;
}

void abc(int _level)
{
	if (_level == 4)
	{
		if (isdiff() == 0)
		{
			count++;
		}
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		path[_level] = arr[i];
		abc(_level + 1);
		path[_level] = '\0';
	}
}

int main()
{
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	abc(0);
	std::cout << count;
}
//문제 7번
//위 배열을 하드코딩 해주세요.
//그리고 R 또는 L 문자 4개를 입력 받습니다.
//R은 right 방향을 의미하고
//L은 left 방향을 의미 합니다.
//아래 그림과 같이
//R을 입력 받으면 숫자를 오른쪽으로 한칸씩 모두 이동시키는데 맨 뒤에 있는 숫자는 맨앞으로 와야합니다.
//반대로 L을 입력 받으면 숫자를 왼쪽으로 한칸씩 모두 이동 시키고 맨 앞에 있는 숫자는 맨 뒤로 보냅니다.
//R 또는 L을 4번 입력 받은 후 처리된 결과를 출력 해주세요.
//입력 예제
//R
//R
//R
//L
//출력 결과
//9 7 3 5 1

#include <iostream>

int main()
{
	int arr[5] = { 3,5,1,9,7 };
	char arr1[5] = {};
	std::cin >> arr1;
	for (int k = 0; k < 4; k++)
	{
		if (arr1[k] == 'R')
		{
			for (int i = 4; i > 0; i--)
			{
				int t = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = t;
			}
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				int t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
			}
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << arr[i];
	}
}

//문제 8번
//#은 암살자들이 있는 위치 입니다. 3명의 암살자의 위치를 입력 받으세요.
//만약, 직선거리에 상대방이 있다면 서로 총을 쏘게 됩니다.
//세명의 좌표를 입력 받고
//서로 총을 쏘지 않는 안전한 위치라면 "안전" 출력
//그렇지않다면 "위험"을 출력 해주세요.
//입력 예제
//0 0
//1 2
//2 1
//출력 결과
//안전

#include <iostream>
int player[3][2] = {};
int playerYPos(int _a)
{
	return player[_a][0];
}

int playerXPos(int _a)
{
	return player[_a][1];
}

void safe(int _a)
{

}

int main()
{
	char map[3][5] = {};
	int count = 0;
	int flag = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			std::cin >> player[i][j];
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		map[playerYPos(i)][playerXPos(i)] = '#';
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (map[i][j] == '#')
			{
				count++;
			}
		}
		if (count > 1)
		{
			flag = 1;
			break;
		}
		count = 0;
	}
	if (flag == 1)
	{
		std::cout << "위험";
	}
	else
	{
		std::cout << "안전";
	}
}

//문제 9번
//4x4 배열을 만들고(0, 0)~(2, 2)까지 3 x 3칸에 다가 아홉 숫자를 입력 받으세요.
//예를들어
//1 2 1
//2 3 4
//3 2 1    을 입력 받았다면 아래와 같이 배열값이 넣어지게 됩니다.
//그리고 빈칸에는 가로줄의 합 & 세로줄의 합 & 대간선줄의 합이 계산되어 채워 집니다.
//배열에 모든 값이 채워지면 출력합니다.
//적절한 for문을 사용하여 이 프로그램을 만들어 주세요
//입력 예제
//1 2 1
//2 3 4
//3 2 1
//출력 결과
//1 2 1 4
//2 3 4 9
//3 2 1 6
//6 7 6 5

#include <iostream>

int arr[4][4] = {};

int main()
{
	int xsum = 0;
	for (size_t y = 0; y < 3; y++)
	{
		for (size_t x = 0; x < 3; x++)
		{
			std::cin >> arr[y][x];
			xsum = xsum + arr[y][x];
		}
		arr[y][3] = xsum;
		xsum = 0;
	}

	int ysum = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			ysum = ysum + arr[j][i];
		}
		arr[3][i] = ysum;
		ysum = 0;
	}

	int sum = 0;
	for (size_t i = 0; i < 3; i++)
	{
		sum = sum + arr[i][i];
		arr[3][3] = sum;
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr[i][j] != 0)
			{
				std::cout << arr[i][j] << " ";
			}
		}
		std::cout << "\n";
	}
}

//문제 10번
//3 5 4 1
//1 1 2 3
//6 7 1 2
//위 숫자들을 하드코딩 해주세요.
//그리고 각기 다른 숫자 4개를 배열에 입력 받으세요.
//예로들어 1 3 7 6 을 입력 받았다고 한다면, 이차배열의 값을
//숫자 1을 3으로 변경
//숫자 3을 7로 변경
//숫자 7을 6으로 변경
//숫자 6을 1로 변경
//하시면 됩니다.
//(이 외 나머지 숫자는 그대로 두시면 됩니다)
//변경된 이차배열 값을 출력해주세요.
//입력 예제
//1 3 7 6
//출력 결과
//7 5 4 3
//3 3 2 7
//1 6 3 2

#include <iostream>
int map[3][4] =
{
	3,5,4,1,
	1,1,2,3,
	6,7,1,2
};
int arr[4] = {};
void process(int _Y, int _X, int _a)
{
	if (_a + 1 == 4)
	{
		map[_Y][_X] = arr[_a - 3];
	}
	else
	{
		map[_Y][_X] = arr[_a + 1];
	}
}

int main()
{
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}

	for (int j = 0; j < 3; j++)
	{
		for (int k = 0; k < 4; k++)
		{
			for (int i = 0; i < 4; i++)
			{
				if (arr[i] == map[j][k])
				{
					process(j, k, i);
					break;
				}
			}
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << map[i][j];
		}
		std::cout << "\n";
	}
}

//문제 11번
//8개의 숫자를 배열에 입력받아주세요.
//배열에서 가장 왼쪽에 있는 숫자를 "피벗"이라고 합니다.
//만약 아래와 같이 4 1 7 9 6 3 3 6을 입력받으면 피벗은 4가 됩니다.
//이 배열을 가지고 아래에 나와있는 규칙대로 숫자들을 옮기다보면,
//신기하게도
//피벗 왼쪽에는 피벗보다 작은숫자들이
//피벗 오른쪽에는 피벗보다 큰 숫자들로 구성됩니다.
//아래의 규칙에 따라 숫자를 옮기고, 결과를 출력 해 주세요
//요약 :
//a는 pivot보다 큰수를 찾아야하고
//b는 pivot보다 작은수를 찾아서 SWAP 해야합니다.
//입력 예제
//4 1 7 9 6 3 3 6
//출력 결과
//3 1 3 4 6 9 7 6

#include <iostream>

int main()
{
	int arr[8] = {};
	for (size_t i = 0; i < 8; i++)
	{
		std::cin >> arr[i];
	}
	int pivot = 0;
	pivot = arr[0];
	int flag = 0;
	for (int i = 1; i < 8; i++)
	{
		for (int j = 7; j >= 1; j--)
		{
			if (arr[i] > pivot && arr[j] < pivot)
			{
				if (i > j)
				{
					int t = arr[0];
					arr[0] = arr[j];
					arr[j] = t;
					flag = 1;
					break;
				}
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << arr[i];
	}
}

//문제 12번
//아래 그림을 보면 두개의 4x4 배열이 있습니다.
//왼쪽배열(4x4)는 입력받고,
//오른쪽배열(4x4)는 하드코딩 해 주세요.
//A B C D
//B B A B
//C B A C
//B A A A
//이 두 배열에서 같은 좌표값이 같은 알파벳을 가지고 있으면 황금 좌표 입니다.
//황금 좌표를 가장 많이 가진 알파벳을 찾아 출력 해주세요.
//위 예제에서는 B가 황금좌표를 4개를 가지고 있기 때문에
//정답은 B입니다.
//입력 예제
//ABBA
//BACB
//CBAA
//DDAB
//출력 결과
//B

#include <iostream>
char map[4][5] = {};
char map1[4][5] =
{
	"ABCD",
	"BBAB",
	"CBAC",
	"BAAA"
};

int count;
int Acount = 0;
int Bcount = 0;
int Ccount = 0;
int Dcount = 0;

char isSame()
{

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (map[i][j] == map1[i][j] && map[i][j] == 'A')
			{
				Acount++;
			}
			else if (map[i][j] == map1[i][j] && map[i][j] == 'B')
			{
				Bcount++;
			}
			else if (map[i][j] == map1[i][j] && map[i][j] == 'C')
			{
				Ccount++;
			}
			else if (map[i][j] == map1[i][j] && map[i][j] == 'D')
			{
				Dcount++;
			}
		}
	}
	int countarr[4] = {};
	countarr[0] = Acount;
	countarr[1] = Bcount;
	countarr[2] = Ccount;
	countarr[3] = Dcount;
	int max = 0;
	for (size_t i = 0; i < 4; i++)
	{
		if (max < countarr[i])
		{
			max = countarr[i];
		}
	}
	return max;
}

void output()
{
	if (count == Acount)
	{
		std::cout << "A";
	}
	else if (count == Bcount)
	{
		std::cout << "B";
	}
	else if (count == Ccount)
	{
		std::cout << "C";
	}
	else
	{
		std::cout << "D";
	}
}

int main()
{
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> map[i];
	}
	count = isSame();
	output();
}