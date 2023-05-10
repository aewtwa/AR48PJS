#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (int j = 5; j >= 0; j--)
	{
		std::cout << arr[j] << " ";
		if (arr[j] == 7)
		{
			break;
		}
	}
}