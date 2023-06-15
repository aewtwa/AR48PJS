#include <iostream>

int map[3][3] =
{
	0,12,0,
	9,0,3,
	0,6,0
};

void spin()
{
	int c = map[0][1];
	map[0][1] = map[1][0];
	map[1][0] = map[2][1];
	map[2][1] = map[1][2];
	map[1][2] = c;
}

int main()
{
	int a = 0;
	std::cin >> a;
	int b = a / 90;

	for (size_t i = 0; i < b; i++)
	{
		spin();
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (map[i][j] != 0)
			{
				std::cout << map[i][j] << " ";
			}
		}
	}
}
