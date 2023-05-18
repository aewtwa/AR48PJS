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