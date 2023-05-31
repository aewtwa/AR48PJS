#include <iostream>

int map[4][4] =
{
	0,0,0,0,
	0,1,1,0,
	2,2,3,0,
	1,3,3,1
};;

int isSafe()
{
	for (size_t x = 0; x < 4; x++)
	{
		for (size_t y = 0; y < 3; y++)
		{
			if (map[y][x] > map[y+1][x])
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	if (isSafe() == 1)
	{
		std::cout << "안전하지 않은 성";
	}
	else
	{
		std::cout << "안전한 성";
	}
}