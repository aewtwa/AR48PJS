// 13_Flag.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arr[8] = { 4,7,6,8,43,5,3 };

	//플래그기법
	int flag = 0;
	for (size_t i = 0; i < 8; i++)
	{
		if (arr[i] == 8)
		{
			flag = 1;
		}
	}

	if (flag == 1)
	{
		//있다.
	}
	else
	{
		//없다.
	}


	// 최소값
	int min = 987654321;
	for (size_t i = 0; i < 8; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	// 문자 배열에 있는 소문자 값을 다른 배열로 복사

	char str[5] = { 'A', 'B', 'a', 'd', 'E' };
	char buffer[5] = {};
	int idx = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if ('a' <= str[i]
			&& str[i] <= 'z')
		{
			buffer[idx] = str[i];
			idx++;
		}
	}

	return 0;
}