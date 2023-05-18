//문제 1번
//아래와 같이 vect라는 배열에 하드코딩 해 주세요
//3	5 1	1 2	3 2
//4칸짜리 1차원 배열에 숫자 4개를 입력받아주세요
//입력받은 각 숫자가 vect 배열 안에 몇개 존재하는지 출력 해 주세요
//입력 예시
//4 1 2 3
//출력 예시
//4 = 0개
//1 = 2개
//2 = 2개
//3 = 2개

#include <iostream>

int main()
{
	int count = 0;
	int vect[7] = { 3,5,1,1,2,3,2 };
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 7; j++)
		{
			if (arr[i] == vect[j])
			{
				count++;
			}
		}
		std::cout << arr[i] << " = " << count << "개" << "\n";
		count = 0;
	}
}

//문제 2번
//아래 배열을 하드코딩 해 주세요
//10 50	40 20 30 40
//이제 6칸짜리 새로운 배열을 하나 더 만들고 숫자 6개를 입력받으세요
//그리고 각각의 숫자보다 큰 값이 몇개 있는지 Count해서 출력 해 주세요
//만약 15 35 80 35 45 5를 입력받았다면
//15 35	80 35 45 5
//이렇게 배열에 값을 채우고, 하드코딩한 배열에 입력받은 값보다 큰 숫자가 몇개 존재하는지
//출력 하시면 됩니다
//입력 예시
//15 35 80 35 45 5
//출력 예시
//15 = 5개
//35 = 3개
//80 = 0개
//35 = 3개
//45 = 1개
//5 = 6개

#include <iostream>

int main()
{
	int arr1[6] = { 10,50,40,20,30,40 };
	int arr2[6] = {};
	int count = 0;
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr2[i];
	}
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (arr1[j] > arr2[i])
			{
				count++;
			}
		}
		std::cout << arr2[i] << "=" << count << "개\n";
		count = 0;
	}
}

//문제 3번
//두 문장을 입력받아주세요(최대 5글자)
//그리고 각 문장을 정렬 합니다
//정렬한 문장을 한 문장으로 옮기고 출력 해 주세요
//[힌트]
//가장 먼저 각 문장이 몇 글자인지 알아야 합니다
//예로들어 "DCBA", "QWLBB"을 입력받았다면
//문장1 정렬 : ABCD
//문장2 정렬 : BBLQW
//한 문장으로 만들기 : ABCDBBLQW
//입력 예시
//DCBA
//QWLBB
//출력 예시
//ABCDBBLQW

#include <iostream>

int main()
{
	char arr2d[2][6] = {};
	std::cin >> arr2d[0];
	std::cin >> arr2d[1];
	int arr2d1len = 0;
	int arr2d2len = 0;
	int arr[12] = {};
	for (int i = 0; i < 6; i++)
	{
		if (arr2d[0][i] == '\0')
		{
			arr2d1len = i;
			break;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr2d[1][i] == '\0')
		{
			arr2d2len = i;
			break;
		}
	}
	for (size_t i = 0; i < arr2d1len; i++)
	{
		for (size_t j = i + 1; j < arr2d1len; j++)
		{
			if (arr2d[0][i] > arr2d[0][j])
			{
				int c = arr2d[0][i];
				arr2d[0][i] = arr2d[0][j];
				arr2d[0][j] = c;
			}
		}
	}
	for (size_t i = 0; i < arr2d2len; i++)
	{
		for (size_t j = i + 1; j < arr2d2len; j++)
		{
			if (arr2d[1][i] > arr2d[1][j])
			{
				int c = arr2d[1][i];
				arr2d[1][i] = arr2d[1][j];
				arr2d[1][j] = c;
			}
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		if (i < arr2d1len)
		{
			arr[i] = arr2d[0][i];
		}
		else if (arr2d1len <= i && i < arr2d1len + arr2d2len)
		{
			arr[i] = arr2d[1][i - arr2d1len];
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		std::cout << (char)(arr[i]);
	}
}

//문제 4번
//두 문장을 입력받아주세요(최대 6글자)
//두 문장이 완전히 같은 문장이라면 "같음"
//다른문장이라면 "다름" 을 출력 해 주세요
//[HINT] 두 문장이 모두 같은문장인지 파악하기 위해서는
//일단 각 문장의 길이를 비교 해 봅니다.
//조건1.두 문장의 길이가 같은지
//조건2.다른 글자가 없는지
//이 두 가지를 검사하면 됩니다.
//입력 예시
//MINS
//MINST
//출력 예시
//다름

#include <iostream>

int main()
{
	char arr2d[2][7] = {};
	int flag = 0;
	for (int i = 0; i < 2; i++)
	{
		std::cin >> arr2d[i];
	}
	for (size_t i = 0; i < 7; i++)
	{
		if (arr2d[0][i] != arr2d[1][i])
		{
			flag = 2;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		std::cout << "같음";
	}
	else
	{
		std::cout << "다름";
	}
}

//문제 5번
//1000 ~9999 사이의 숫자 1개를 입력받아주세요
//(문장으로 입력받지 않고 int형 변수에 입력 받습니다)
//숫자를 쪼개서 각 자리 숫자를 4개의 변수에 옮겨담고, 각 자리를 따로 따로 출력 해 주세요
//[HINT] MOD 연산자를 활용해보세요
/// 10, % 10 등등 나눗셈과 MOD연산자를 잘 활용하면
//각 자릿수를 쪼갤 수 있습니다
//ex) t = 13
//int a = t / 10; //앞자리
//int b = t % 10; //뒷자리
//입력 예시
//5127
//출력 예시
//숫자5
//숫자1
//숫자2
//숫자7

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = a / 1000;
	int c = (a - b * 1000) / 100;
	int d = (a - b * 1000 - c * 100) / 10;
	int e = a % 10;
	std::cout << "숫자" << b << "\n";
	std::cout << "숫자" << c << "\n";
	std::cout << "숫자" << d << "\n";
	std::cout << "숫자" << e << "\n";
}

//문제 6번
//6명의 학생들이 일렬로 앉아있습니다.
//앞사람과 뒷사람의 성적차이가 3보다 작게(< 3) 차이가 나게끔 자리를 앉아야합니다
//6명의 학생들 성적을 입력받고, 순차적으로 배열에 값을 넣어주세요
//앞칸과 뒷칸의 성적차이가 3보다 작은지 검사하는 프로그램을 작성 해 주세요
//ex) 예로들어 1 3 5 7 5 6 을 입력 받았다면
//앞칸과 뒷칸이 3이상 차이나는 곳이 없으므로 "완벽한배치" 라고 출력 하세요
//ex) 예로들어 2 1 6 4 3 2 를 입력 받았다면
//1과 6의 차이가 3 이상 차이가 나기때문에 완벽한 배치가 아닙니다
//이때는 "재배치필요" 라고 출력 해 주세요
//입력 예시
//1 3 5 7 5 6
//출력 예시
//완벽한배치

#include <iostream>

int main()
{
	int arr[6] = {};
	int flag = 0;
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = i + 1; j < 6; j++)
		{
			if (arr[i] >= arr[j] + 3 || arr[i] + 3 <= arr[j])
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 2;
				break;
			}
			i++;
		}
		if (flag == 1)
		{
			break;
		}
	}
	if (flag == 2)
	{
		std::cout << "완벽한배치";
	}
	else
	{
		std::cout << "재배치필요";
	}
}

//문제 7번
//두 문장을 입력받으세요(최대 10글자)
//두 문장이 거꾸로 된 문장이 맞는지 확인하는 프로그램을 작성 해 주세요
//ex) 예로들어 "ABCD" "DCBA" 를 입력받았다면
//ABCD를 거꾸로 하면 DCBA가 맞습니다.따라서 "거울문장" 이라고 출력 해 주세요
//ex) 예로들어 "BKRQA" "ABC"를 입력받았다면
//BKRQA를 거꾸로 하면 AQRKB 이기 때문에 "거울문장아님" 이라고 출력 해 주세요
//[힌트]
//변수 t를 하나 더 만들어서 활용하면 됩니다.
//t = length - 1 부터 시작해서
//for문 돌때마다 1씩 빼주는 방식을 쓰면 됩니다.
//입력 예시
//NCQ
//QCN
//출력 예시
//거울문장

#include <iostream>

int main()
{
	char arr2d[2][11] = {};
	std::cin >> arr2d[0];
	std::cin >> arr2d[1];
	int arr2d1len = 0;
	int arr2d2len = 0;
	int flag = 0;
	for (size_t i = 0; i < 11; i++)
	{
		if (arr2d[0][i] == '\0')
		{
			arr2d1len = i;
			break;
		}
	}
	for (size_t i = 0; i < 11; i++)
	{
		if (arr2d[1][i] == '\0')
		{
			arr2d2len = i;
			break;
		}
	}
	if (arr2d1len == arr2d2len)
	{
		for (int i = 0; i < arr2d1len; i++)
		{
			for (int j = arr2d2len - 1; j >= 0; j--)
			{
				if (arr2d[0][i] != arr2d[1][j])
				{
					flag = 1;
					break;
				}
				else
				{
					flag = 2;
				}
				i++;
			}
			if (flag == 1)
			{
				break;
			}
		}
		if (flag == 2)
		{
			std::cout << "거울문장";
		}
		else
		{
			std::cout << "거울문장아님";
		}
	}
	else
	{
		std::cout << "거울문장아님";
	}
}

//문제 8번
//네 문장을 2차배열에 입력받아주세요(최대 6글자)
//그리고 각 문장의 길이를 저장할 4칸짜리 1차원 배열을 만들어주세요
//문장의 길이를 1차원 배열에 저장한 후 정렬하고 출력하시면 됩니다
//ex) 만약 "ABCD", "BBQ", "UIOUIO", "MINS" 를 입력받았다면
//A B C	 D \0
//B B Q	\0
//U	I O	U  I O \0
//M	I N	S \0
//이렇게 2차배열이 채워지고 각 문장의 길이를 1차원 배열에 저장 해 주세요
//4	3	6	4
//이 배열을 정렬하면 3 4 4 6 이 되므로 3 4 4 6을 출력 해 주시면 됩니다
//입력 예시
//ABCD
//BBQ
//UIOUIO
//MINS
//출력 예시
//3 4 4 6

#include <iostream>

int main()
{
	char arr2d[4][7] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr2d[i];
	}
	int arr[4] = {};
	for (size_t j = 0; j < 4; j++)
	{
		for (size_t i = 0; i < 7; i++)
		{
			if (arr2d[j][i] == '\0')
			{
				arr[j] = i;
				i = 0;
				break;
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = i + 1; j < 4; j++)
		{
			if (arr[i] > arr[j])
			{
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << arr[i] << " ";
	}
}

//문제 9번
//한 문장을 입력받으세요(최대 10글자)
//홀수번째 문자는 대문자 이어야 합니다
//짝수번째 문자는 소문자 이어야 합니다
//대소문자가 번갈아가면서 나오는 문장이 맞다면 "개구리문장"
//그렇지 않다면 "일반문장" 을 출력 해 주세요
//입력 예시
//AgKeOqV
//출력 예시
//개구리문장

#include <iostream>

int main()
{
	char arr[11] = {};
	std::cin >> arr;
	int arrlen = 0;
	int flag = 0;
	for (size_t i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			arrlen = i;
			break;
		}
	}
	for (size_t i = 0; i < arrlen; i = i + 2)
	{
		int y = 0;
		y = i + 1;
		if (('A' <= arr[i] && arr[i] <= 'Z') &&
			('a' <= arr[y] && arr[y] <= 'z'))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag == 1)
	{
		std::cout << "개구리문장";
	}
	else
	{
		std::cout << "일반문장";
	}
}

//문제 10번
//마을에 아래와 같은 알파벳 성을 가진 사람들이 살고 있습니다
//(아래 1차원 배열을 하드코딩 해 주세요)
//A	B C	Z E	T Q
//그리고 어느날, 범죄자 블랙리스트가 세상에 공개가 되었고
//그 블랙리스트에 있는 사람이 마을 사람인지아닌지 확인 해 보려고합니다
//블랙리스트는 다음과 같습니다
//A	P L	Q F
//블랙리스트 5명을 입력받아주세요
//그리고 블랙리스트를 보면서 우리마을에 존재하는 사람인지 확인하는 프로그램을 작성 해 주세요
//우리마을 사람이라면 "마을사람" 이라고 출력하면 됩니다
//우리마을 사람이 아니라면 "외부사람" 이라고 출력하면 됩니다
//입력 예시
//APLQF
//출력 예시
//A = 마을사람
//P = 외부사람
//L = 외부사람
//Q = 마을사람
//F = 외부사람

#include <iostream>

int main()
{
	char arr1[7] = { 'A','B','C','Z','E','T','Q' };
	char arr2[6] = {};
	std::cin >> arr2;
	int arr3[5] = {};
	int a = 0;
	int b = 1;
	int arr3idx = 0;
	for (size_t i = 0; i < 5; i++)
	{
		int flag = 0;
		for (size_t j = 0; j < 7; j++)
		{
			if (arr1[j] == arr2[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			std::cout << arr2[i] << " = 마을사람\n";
		}
		else
		{
			std::cout << arr2[i] << " = 외부사람\n";
		}
	}
}

//문제 11번

#include <iostream>

int main()
{

}