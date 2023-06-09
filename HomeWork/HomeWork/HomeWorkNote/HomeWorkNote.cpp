#include <iostream>

int map[3][3] = {};

int A[3][3] =
{
	2,6,3,
	7,1,1,
	3,4,2
};

int B[2][4] =
{
	6,4,2,4,
	1,1,5,8
};

int C[2][3] =
{
	9,2,3,
	4,2,1
};

void Ainput()
{
	int max = 0;
	int maxYidx = 0;
	int maxXidx = 0;
	for (size_t k = 0; k < 3; k++)
	{
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 3; j++)
			{
				if (max < A[i][j])
				{
					max = A[i][j];
					maxYidx = i;
					maxXidx = j;
				}
			}
		}
		map[0][k] = max;
		max = 0;
		A[maxYidx][maxXidx] = 0;
	}
}

void Binput()
{
	int min = 987654321;
	int minYidx = 0;
	int minXidx = 0;
	for (size_t k = 0; k < 3; k++)
	{
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < 4; j++)
			{
				if (min > B[i][j])
				{
					min = B[i][j];
					minYidx = i;
					minXidx = j;
				}
			}
		}
		map[1][k] = min;
		min = 987654321;
		B[minYidx][minXidx] = 987654321;
	}
}

void Cinput()
{
	int min = 987654321;
	int lastmin = 0;
	for (size_t k = 0; k < 2; k++)
	{
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < 3; j++)
			{
				if (C[i][j] == lastmin)
				{
					continue;
				}
				if (C[i][j] < min)
				{
					min = C[i][j];
				}
			}
		}
		map[2][k] = min;
		lastmin = min;
		min = 987654321;
	}
	int max = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (C[i][j] > max)
			{
				max = C[i][j];
			}
		}
	}
	map[2][2] = max;
}

void mapOutput()
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << map[i][j] << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	Ainput();
	Binput();
	Cinput();
	mapOutput();
}
