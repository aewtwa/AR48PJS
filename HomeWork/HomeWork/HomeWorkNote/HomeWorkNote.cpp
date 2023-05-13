#include <iostream>

int main()
{
	int arr[3][2] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> arr[i][j];
			arr[i][j]++;
			arr[i][j]++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << arr[i][j] <<" ";
		}
		std::cout << "\n";
	}
}