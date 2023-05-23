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
//G K G
//  
//문자 3개를 배열의 빈 칸에다가 입력 받고, 빈칸에 채워주세요.
//총 6개의 문자에서 같은 문자가 3개이상(>= 3) 존재 하는지 검사하는 소스코드를 작성해주세요.
//존재하면 "있음" 출력
//존재하지 않으면 "없음" 출력
//예로들어 A B C를 입력받으면
//배열에는 G K G A B C 이렇게 6개 문자가 있습니다.
//여기서 같은문자 3개이상 존재하는 문자는 없으니
//"없음" 이 답입니다.
//입력 예제
//A B C
//출력 결과
//없음

#include <iostream>

int main()
{
	char arr2d[2][3] =
	{
		'G','K','G',
	};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> arr2d[1][i];
	}
	int arr[256] = {};
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			int target = arr2d[i][j];
			arr[target]++;
		}
	}
	int flag = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr[i] >= 3)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		std::cout << "있음";
	}
	else
	{
		std::cout << "없음";
	}
}

//문제 11번
//6개 숫자를 입력 받으세요.
//같은 숫자가 존재하는지 확인하고 출력 해주세요.
//존재O = > "도플갱어 발견" 출력
//존재X = > "미발견" 출력
//* 충분한 설계를 하신 후 풀어주시면 됩니다
//입력 예제
//1 3 3 5 1 4
//출력 결과
//도플갱어 발견

#include <iostream>

int main()
{
	int arr1[6] = {};
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr1[i];
	}
	int arr2[10] = {};
	for (size_t i = 0; i < 6; i++)
	{
		int target = arr1[i];
		arr2[target]++;
	}
	int flag = 0;
	for (size_t i = 0; i < 10; i++)
	{
		if (arr2[i] > 1)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		std::cout << "도플갱어 발견";
	}
	else
	{
		std::cout << "미발견";
	}
}

//문제 12번
//한문장을 입력 받으세요.(최대 10글자)
//그리고 가장 많은 알파벳이 어떤 알파벳인지 출력 해주세요.
//입력 예제
//AKFBBQAAK
//출력 결과
//A

#include <iostream>

int main()
{
	char arr1[11] = {};
	std::cin >> arr1;
	int arr1len = 0;
	for (size_t i = 0; i < 11; i++)
	{
		if (arr1[i] == '\0')
		{
			arr1len = i;
			break;
		}
	}
	int arr2[256] = {};
	for (size_t i = 0; i < arr1len; i++)
	{
		int target = arr1[i];
		arr2[target]++;
	}
	int max = 0;
	int maxidx = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr2[i] > 0 && max < arr2[i])
		{
			max = arr2[i];
			maxidx = i;
		}
	}
	std::cout << (char)maxidx;
}

//문제 13번
//하마는 여러충치를 가지고 있는데, 입을 닫으면 이빨끼리 부딪칩니다.
//이때 충치끼리 닿으면 하마가 아파합니다.
//up 2번치아와 down 2번치아는 충치라서 닿으면 하마가 고통을 느낍니다.
//윗니와 아랫니 상태를 입력받고, 고통을 느끼는 치아의 갯수를 출력 하세요.
//입력 예제
//1 0 1 0 1
//0 1 1 0 0
//출력 결과
//1개

#include <iostream>

int main()
{
	int up[5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> up[i];
	}
	int down[5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> down[i];
	}
	int count = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (up[i] == down[i] && up[i] == 1)
		{
			count++;
		}
	}
	std::cout << count << "개";
}

//문제 14번
//아래 문장을 하드코딩 해 주세요
//ATKPTCABC
//그리고 두 문자를 입력받아주세요
//첫번째 문자는 왼쪽에서부터 오른쪽으로 검색 해 주세요
//두번째 문자는 오른쪽에서부터 왼쪽으로 검색 해 주세요
//검색해서 가장 먼저 발견되는 글자들이 얼마나 떨어져 있는지 출력하세요
//만약 P와 A를 입력받았다면 정답은 3 입니다
//입력 예제
//P A
//출력 결과
//3

#include <iostream>

int main()
{
	char arr[10] = "ATKPTCABC";
	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;
	int aidx = 0;
	int bidx = 0;
	for (size_t i = 0; i < 9; i++)
	{
		if (arr[i] == a)
		{
			aidx = i;
			break;
		}
	}
	for (size_t i = 9; i >= 0; i--)
	{
		if (arr[i] == b)
		{
			bidx = i;
			break;
		}
	}
	std::cout << bidx - aidx;
}

//문제 15번
//3 5 1
//4 2 6
//win 배열에 합격자 명단이 있습니다.
//people의 번호를 입력 받고,
//네명의 합격 여부를 출력 해주세요.
//입력 예제
//1 5 7 0
//출력 결과
//1번 합격
//5번 합격
//7번 불합격
//0번 불합격

#include <iostream>

void input(int* _a)
{
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> _a[i];
	}
}

void celebate(int(*_a)[3], int* _b)
{
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				if (_a[j][k] == _b[i])
				{
					arr[i] = 1;
					break;
				}
				else
				{
					arr[i] = 0;
				}
			}
			if (arr[i] == 1)
			{
				break;
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (arr[i] == 1)
		{
			std::cout << _b[i] << "번 합격\n";
		}
		else
		{
			std::cout << _b[i] << "번 불합격\n";
		}
	}
}

int main()
{
	int win[2][3] =
	{
		3,5,1,
		4,2,6
	};
	int people[4] = {};
	input(people);
	celebate(win, people);
}

//문제 16번
//"MINCODING" 문장을 vect라는 배열에 하드코딩 해 주세요
//이제 찾을 문자 개수 n과 문자들을 입력 받습니다.
//입력받은 각 문자가 vect배열에 존재하는지 출력 해 주세요.
//존재하면 O, 존재하지 않으면 X를 출력 해 주세요.
//* DAT(Direct Address Table)을 이용하시면 됩니다
//ex)
//5
//A B C D E
//출력결과 : XXOOX
//입력 예제
//3
//I N G
//출력 결과
//OOO

#include <iostream>

int main()
{

}

//문제 17번
//세 문장을 입력받고
//같은글자가 한글자라도 없으면 Perfect
//아니면 No를 출력 해 주세요.
//Ex)
//ABCDEF
//GHIJKLMN
//OPQR
//를 입력 하였으면
//Perfect를 출력 해 주세요.
//Ex2)
//BBQWORLD
//ABCWORLD
//ZYM
//를 입력 하였으면
//No를 출력 해 주세요.
//입력 예제
//ABCDEF
//GHIJKLMN
//OPQR
//출력 결과
//Perfect

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