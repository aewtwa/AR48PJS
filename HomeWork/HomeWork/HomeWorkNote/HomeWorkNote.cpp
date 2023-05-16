#include <iostream>

int arr2d[3][3] =
{
	{1,1,1},
	{1,2,1},
	{3,6,3}
};

int count(int _a)
{
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr2d[i][j] == _a)
			{
				count++;
			}
		}
	}
	return count;
}

void output(int _a)
{
	std::cout << _a;
}

int main()
{
	int a;
	std::cin >> a;
	output(count(a));
}