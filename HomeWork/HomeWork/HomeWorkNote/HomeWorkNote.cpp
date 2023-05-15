#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int mod = 0;
	mod = a % 5;
	int arr2d[3][3] = {};
	int x = 0;
	int y = 0;
	int b = 9;
	if (mod == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[y][x] = b;
				y++;
				b--;
			}
			y = 0;
			x++;
		}
	}
	else if (mod == 2)
	{
		x = 2;
		y = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[y][x] = b;
				x--;
				b--;
			}
			x = 2;
			y++;
		}
	}
	else
	{
		x = 0;
		y = 0;
		b = 10;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[y][x] = b;
				y++;
				b++;
			}
			y = 0;
			x++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}