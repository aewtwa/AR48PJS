#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int arr2d[4][4] = {};
	for (int i = 0; i < 4; i++)
	{
		int mod = i % 2;
		if (mod == 1)
		{
			for (int j = 3; j >= 0; j--)
			{
				arr2d[i][j] = a;
				a++;
			}
		}
		else
		{
			for (int j = 0; j < 4; j++)
			{
				arr2d[i][j] = a;
				a++;
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}