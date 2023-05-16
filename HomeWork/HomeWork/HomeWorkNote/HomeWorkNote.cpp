#include <iostream>

int main()
{
	int arr2d[2][3] = {};
	for (int i = 1; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			std::cin >> arr2d[i][j];
		}
	}
	int arr[6] = {};
	int arridx = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[arridx] = arr2d[i][j];
			arridx++;
		}
	}
	int c = arr[0];
	arr[0] = arr[5];
	arr[5] = c;
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i];
	}
}