#include <iostream>

int main()
{
	char arr[5][11] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	int arrlen[5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 11; j++)
		{
			if (arr[i][j] == '\0')
			{
				arrlen[i] = j;
				break;
			}
		}
	}
	int max = 0;
	int maxidx = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arrlen[i] > max)
		{
			max = arrlen[i];
			maxidx = i;
		}
	}
	for (size_t i = 0; i < 11; i++)
	{
		std::cout << arr[maxidx][i];
	}
}