#include <iostream>

int main()
{
	int arr2d[4][4] =
	{
		{3,4,1,6},
		{3,5,3,6},
		{},
		{5,4,6,0}
	};
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		arr2d[2][i] = arr[i];
	}
	int MAX = 0;
	int MIN = 987654321;
	int MAXXidx = 0;
	int MAXYidx = 0;
	int MINXidx = 0;
	int MINYidx = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr2d[i][j] > MAX)
			{
				MAX = arr2d[i][j];
				MAXXidx = j;
				MAXYidx = i;
			}
			else if (arr2d[i][j] < MIN)
			{
				MIN = arr2d[i][j];
				MINXidx = j;
				MINYidx = i;
			}
		}
	}
	std::cout << "MAX = " << MAX << "(" << MAXYidx << "," << MAXXidx << ")" << "\n";
	std::cout << "MAX = " << MIN << "(" << MINYidx << "," << MINXidx << ")";
}