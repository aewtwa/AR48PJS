#include <iostream>

int main()
{
	int map[4][4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> map[i][j];
		}
	}

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0;  j < 4;  j++)
		{
			if (map[i][j] == 1)
			{
				if (i == j)
					continue;

				map[i][i]++;
			}
		}
	}
}