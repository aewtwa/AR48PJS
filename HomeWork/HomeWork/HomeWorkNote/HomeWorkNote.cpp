#include <iostream>

void write(int(*_a)[4], int _b, int _c)
{
	int t = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (t == _b)
			{
				_a[i][j] = _c;
			}
			t++;
		}
	}
}

int main()
{
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
	int arr2d[4][4] = {};
	int bucket[20] = {};
	for (size_t i = 0; i < 4; i++)
	{
		int target = arr[i];
		bucket[target - 1]++;
	}
	int count = 1;
	for (size_t i = 0; i < 20; i++)
	{
		if (bucket[i] == 1)
		{
			write(arr2d, i, count);
			count++;
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