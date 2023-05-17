#include <iostream>

int main()
{
	int arr2d[3][3] = {};
	int a;
	std::cin >> a;
	int xidx = 2;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = xidx; j < 3; j++)
		{
			arr2d[i][j] = a;
			a++;
		}
		xidx--;
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j];
		}
		std::cout << "\n";
	}
}