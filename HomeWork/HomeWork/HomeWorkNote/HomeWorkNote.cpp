#include <iostream>

int main()
{
	char arr2d[3][10] = {};
	int last[3] = {};
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr2d[i];
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr2d[i][j] == '\0')
			{
				last[i] = j - 1;
				break;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr2d[i][last[i]];
	}
}