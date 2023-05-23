#include <iostream>

int main()
{
	int arr2d[3][4] =
	{
		65000,35,42,70,
		70,35,65000,1300,
		65000,30000,38,42
	};
	int arr[65536] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int target = arr2d[i][j];
			arr[target]++;
		}
	}
	int max = 0;
	for (int i = 1; i <= 65535; i++)
	{
		if (arr[i] > 0)
		{
			for (int i = 0; i < arr[i]; i++)
			{
				if (arr[i] > max)
				{
					max = arr[i];
				}
			}
		}
	}
	for (int i = 1; i < 65535; i++)
	{
		if (arr[i] == 3)
		{
			std::cout << i;
		}
	}
}