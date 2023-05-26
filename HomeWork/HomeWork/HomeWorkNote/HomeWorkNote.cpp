#include <iostream>

int map[4][5] =
{
	3,5,4,2,5,
	3,3,3,2,1,
	3,2,6,7,8,
	9,1,1,3,2
};

int sum(int _a, int _b, int _maxY, int _maxX)
{
	int sum = 0;
	for (int i = _maxY; i < _a + _maxY; i++)
	{
		for (int j = _maxX; j < _b + _maxX; j++)
		{
			sum += map[i][j];
		}
	}
	return sum;
}

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int max = 0;
	int maxY = 0;
	int maxX = 0;
	for (int i = 0; i < 4 - a + 1; i++)
	{
		for (int j = 0; j < 5 - b + 1; j++)
		{
			if (max < sum(a, b, i, j))
			{
				max = sum(a, b, i, j);
				maxY = i;
				maxX = j;
			}
			
		}
	}
	std::cout << "(" << maxY << "," << maxX << ")";
}