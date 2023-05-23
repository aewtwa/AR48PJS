#include <iostream>

int main()
{
	int arr2d[3][5] =
	{
		1,3,3,5,1,
		3,6,2,4,2,
		1,9,2,6,5
	};
	int n = 0;
	std::cin >> n;
	int arr[10] = {};
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			int target = arr2d[i][j];
			arr[target]++;
		}
	}
	int arr1[10] = {};
	for (size_t i = 1; i < 10; i++)
	{
		if (arr[i] == n)
		{
			std::cout << i;
		}
	}
}