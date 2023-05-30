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