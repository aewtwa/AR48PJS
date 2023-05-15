#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int mod = 0;
	mod = a % 5;
	int arr2d[3][3] = {};
	int b = 0;
	if (mod == 1)
	{
		b = 9;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[j][i] = b;
				b--;
			}
		}
	}
	else if (mod == 2)
	{
		b = 9;
		for (int i = 0; i <= 2 ; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr2d[i][j] = b;
				b--;
			}
		}
	}
	else
	{
		b = 10;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[j][i] = b;
				b++;
			}
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