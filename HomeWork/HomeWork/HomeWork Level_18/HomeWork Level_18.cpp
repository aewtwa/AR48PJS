//문제 1번
//cardList 배열에 여러종류의 카드가 있습니다.
//아래와 같이 카드를 입력받아주세요(한 문장을 입력받아주세요, 최대 15글자)
//DAT(Direct Address Table)을 이용하여 총 몇 종류의 카드가 있는지 count 해서 출력 해주세요.
//ABCDACABCDE
//출력: 5개
//입력 예제
//ABCDACABCDE
//출력 결과
//5개

#include <iostream>

int main()
{
	char cardlist[16] = {};
	std::cin >> cardlist;
	int cardlistlen = 0;
	for (size_t i = 0; i < 16; i++)
	{
		if (cardlist[i] == '\0')
		{
			cardlistlen = i;
			break;
		}
	}
	int arr[256] = {};
	for (size_t i = 0; i < cardlistlen; i++)
	{
		char target = cardlist[i];
		arr[target]++;
	}
	int count = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr[i] != 0)
		{
			count++;
		}
	}
	std::cout << count << "개";
}

//문제 2번
//1~65535 번의 ID를 가진 사람들이 있습니다.
//출입기록이 있을 때 가장 성실하게 출근한 사람이 누군지 알려주는 프로그램을 작성 해주세요.
//(Direct Address Table을 사용해서 풀어주세요, 입력값은 없습니다)
//65000 35    42    70
//70    35    65000 1300
//65000 30000 38    42
//출력: 65000
//출력 결과
//65000

#include <iostream>

int main()
{
	int arr2d[3][4] =
	{
		65000,35,42,70,
		70,35,65000,1300,
		65000,30000,38,42
	};
	int arr[65536] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int target = arr2d[i][j];
			arr[target]++;
		}
	}
	int max = 0;
	for (int i = 1; i <= 65535; i++)
	{
		if (arr[i] > 0)
		{
			for (int i = 0; i < arr[i]; i++)
			{
				if (arr[i] > max)
				{
					max = arr[i];
				}
			}
		}
	}
	for (int i = 1; i < 65535; i++)
	{
		if (arr[i] == 3)
		{
			std::cout << i;
		}
	}
}

//문제 3번
//9개 숫자를 입력받고, 3x3 배열에 채워주세요.
//1~9까지 숫자 중 어떤 숫자들이 없는지를 찾아서 출력 해주세요.
//ex)
//입력:
//3 5 5
//1 4 9
//2 2 1
//출력 : 6 7 8
//(없는 숫자는 6, 7, 8 입니다)
//입력 예제
//3 5 5
//1 4 9
//2 2 1
//출력 결과
//6 7 8

#include <iostream>

int main()
{
	int arr2d[3][3] = {};
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> arr2d[i][j];
		}
	}
	int arr[10] = {};
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			int target = arr2d[i][j];
			arr[target]++;
		}
	}
	for (size_t i = 1; i < 10; i++)
	{
		if (arr[i] == 0)
		{
			std::cout << i;
		}
	}
}

//문제 4번
//8글자를 입력 받아주세요.
//가장 많이 나온 알파벳을 출력해주세요.
//(1등은 한명만 존재합니다.)
//ex)
//입력 : BQTABABA
//출력 : A
//입력 예제
//BQTABAAA
//출력 결과
//A

#include <iostream>

int main()
{
	char arr[9] = {};
	std::cin >> arr;
	int arrbucket[256] = {};
	for (size_t i = 0; i < 8; i++)
	{
		int target = arr[i];
		arrbucket[target]++;
	}
	int max = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (arrbucket[i] > max)
		{
			max = arrbucket[i];
		}
	}
	for (size_t i = 0; i < 256; i++)
	{
		if (arrbucket[i] == max)
		{
			std::cout << (char)i;
		}
	}
}

//문제 5번
//3x3 town배열을 하드코딩 해주세요.
//C D A
//B M Z
//Q P O
//블랙리스트 네명을 입력 받고,
//마을에 블랙리스트에 해당하는 사람이 몇 명 있는지 출력하세요.
//ex)
//입력 : BTCK
//출력 : 2명
//입력 예제
//BTCK
//출력 결과
//2명

#include <iostream>

int main()
{
	char arr2d[3][3] =
	{
		{'C','D','A'},
		{'B','M','Z'},
		{'Q','P','O'}
	};
	char black[5] = {};
	std::cin >> black;
	int count = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				if (black[i] == arr2d[j][k])
				{
					count++;
				}
			}
		}
	}
	std::cout << count << "명";
}

//문제 6번
//칸에 알파벳들이 채워져 있습니다.
//이 알파벳들을 정렬해서 한줄로 출력 해주세요.
//(DirectAddressTable를 사용해서 풀어주세요)
//A B C
//A G H
//H I J
//K A B
//A B C
//출력:AAAABBBCCGHHIJK
//출력 결과
//AAAABBBCCGHHIJK

#include <iostream>

int main()
{
	char arr2d[5][4] =
	{
		"ABC",
		"AGH",
		"HIJ",
		"KAB",
		"ABC"
	};
	int arr2dB[256] = {};
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			int target = arr2d[i][j];
			arr2dB[target]++;
		}
	}
	for (size_t i = 0; i < 256; i++)
	{
		if (arr2dB[i] > 0)
		{
			for (size_t j = 0; j < arr2dB[i]; j++)
			{
				std::cout << (char)i;
			}
		}
	}
}

//문제 7번
//기차(train)에 탄 사람들 중에 우리팀이 있는지 찾으려 합니다.
//3 7 6 4 2 9 1 7
//우리팀(team)을 입력 받고
//우리팀이 기차에서 몇번부터~몇번째 칸에 탑승하고 있는지 출력 하세요.
//입력 예제
//7 6 4
//출력 결과
//1번~3번 칸

#include <iostream>

int main()
{
	int train[8] = { 3,7,6,4,2,9,1,7 };
	int team[3] = {};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> team[i];
	}
	int first = 0;
	int flag = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 8; j++)
		{
			if (team[i] == train[j])
			{
				first = j;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	std::cout << first << "번~" << first + 2 << "번 칸";
}


//문제 8번
//아래는 아파트를 배열으로 나타낸 사진 입니다.
//맨 아래는 1층(15 2 6)
//맨 꼭대기층은 5층(15 18 17) 입니다.
//이 배열을 하드코딩 해 주세요.
//15 18 17
//4  6  9
//10 1  3
//7  8  9
//15 2  6
//숫자 3개를 family 배열에 입력 받으세요.
//이 family가 몇층에 사는지 isPattern 함수를 이용해서 문제를 풀어 주세요.
//입력 예제
//7 8 9
//출력 결과
//2층

#include <iostream>

int main()
{

}

//문제 9번
//1 3 3 5 1
//3 6 2 4 2
//1 9 2 6 5
//위 배열을 하드코딩 하세요.
//그리고 숫자 1개를 변수 n에다가 입력 받으세요.
//위 배열에는 똑같은 숫자가 여러개가 존재합니다.
//예로들어 숫자 1은 3개 존재하고,
//숫자6은 2개 존재합니다.
//n개 존재하는 숫자를 출력하는 프로그램을 작성 해 주세요
//예로들어 숫자 2를 입력받으면,
//배열에서 2개 존재하는 숫자를 찾아야 합니다.
//따라서 5와 6 을 출력 하시면 됩니다.
//입력 예제
//3
//출력 결과
//1 2 3

#include <iostream>

int main()
{
	int arr2d[3][5] =
	{
		1,3,3,5,1,
		3,6,2,4,2,
		1,9,2,6,5
	};
	int n = 0;
	std::cin >> n;
	int arr[10] = {};
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			int target = arr2d[i][j];
			arr[target]++;
		}
	}
	int arr1[10] = {};
	for (size_t i = 1; i < 10; i++)
	{
		if (arr[i] == n)
		{
			std::cout << i;
		}
	}
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

//문제 19번

#include <iostream>

int main()
{

}

//문제 20번

#include <iostream>

int main()
{

}