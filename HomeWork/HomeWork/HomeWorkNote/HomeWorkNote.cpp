#include <iostream>

int main()
{
	char arr2d[2][5] = {};
	std::cin >> arr2d[0];
	std::cin >> arr2d[1];
	char arr[12] = {};
	int arr2d1len = 0;
	int arr2d2len = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arr2d[0][i] != '\0')
		{
			arr2d1len++;
		}
		if (arr2d[1][i] != '\0')
		{
			arr2d2len++;
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		if (i < arr2d1len)
		{
			arr[i] = arr2d[0][i];
		}
		else if (arr2d1len <= i && i <= arr2d1len + arr2d2len)
		{
			arr[i] = arr2d[1][i - arr2d1len];
		}
		else
		{
			break;
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		std::cout << arr[i];
	}
}