#include <iostream>

int main()
{
	int map[4][3] =
	{
		1,5,3,
		4,5,5,
		3,3,5,
		4,6,2
	};

	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (a <= map[i][j] && map[i][j] <= b)
			{
				map[i][j] = 0;
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (map[i][j] == 0)
			{
				std::cout << "#";
			}
			else
			{
				std::cout << map[i][j];
			}
		}
		std::cout << "\n";
	}
}