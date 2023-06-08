#include <iostream>

int arr[3][3] = {};

void isSame(int _a)
{
	int flag = 0;
	int a = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = i + 1; j < 3; j++)
		{
			if (arr[_a][i] != arr[_a][j])
			{
				flag = 1;
			}
			else
			{
				a = arr[_a][i];
			}
		}
	}
	if (flag == 1)
	{
		std::cout << "X" << "\n";
	}
	else
	{
		std::cout << a << "\n";
	}
}

int main()
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		isSame(i);
	}
	
	
}