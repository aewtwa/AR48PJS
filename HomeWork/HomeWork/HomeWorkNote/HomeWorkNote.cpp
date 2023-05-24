#include <iostream>

int image[4][4] = {};

int rectSum(int _a, int _b)
{
	int sum = 0;
	int max = 0;
	for (size_t y = 0; y < 2; y++)
	{
		for (size_t x = 0; x < 3; x++)
		{
			sum = sum + image[_a + y][_b + x];
		}
	}
	return sum;
}

int main()
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> image[i][j];
		}
	}
	int A = 0;
	int B = 0;
	int sumarr[4][4] = {};
	int max = 0;
	int maxY = 0;
	int maxX = 0;
	for (A = 0; A < 4; A++)
	{
		for (B = 0; B < 4; B++)
		{
			sumarr[A][B] = rectSum(A, B);
			if (max < sumarr[A][B])
			{
				max = sumarr[A][B];
				maxY = A;
				maxX = B;
			}
		}
	}
	std::cout << "(" << maxY << "," << maxX << ")";
}