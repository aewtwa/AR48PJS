#include <iostream>

void run(int _a)
{
	int arr2d[3][3] = {};
	int a = 1;
	if (_a < 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr2d[i][j] = a;
				a++;
			}
		}
	}
	if (_a >= 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr2d[i][j] = a;
				a++;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr2d[i][j] << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	int a;
	std::cin >> a;
	run(a);
}