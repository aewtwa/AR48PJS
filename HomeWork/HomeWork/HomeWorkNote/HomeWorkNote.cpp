#include <iostream>

int main()
{
	int arr[5] = {};
	int i;
	for (i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	int j;
	for (j = 0; j < 5; j++)
	{
		if (arr[j] >= 70)
		{
			std::cout << j + 1 << "번 사람은 " << arr[j] << "점 " << "PASS" << "\n";
		}
		else if (arr[j] >= 50)
		{
			std::cout << j + 1 << "번 사람은 " << arr[j] << "점 " << "RETEST" << "\n";
		}
		else if (arr[j] < 50)
		{
			std::cout << j + 1 << "번 사람은 " << arr[j] << "점 " << "FAIL" << "\n";
		}
	}
}