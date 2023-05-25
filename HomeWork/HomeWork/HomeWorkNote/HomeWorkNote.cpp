#include <iostream>

int map[3][3] =
{
	3,5,1,
	3,8,1,
	9,1,5
};

int bitarray[2][2] = {};

int sum(int _a, int _b)
{
	int sum = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (bitarray[i][j] == 1)
			{
				sum += map[i + _a][j + _b];
			}
		}
	}
	return sum;
}

int main()
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			std::cin >> bitarray[i][j];
		}
	}
	int sumarr[4] = {};
	int sumidx = 0;
	int max = 0;
	int maxy = 0;
	int maxx = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sumarr[sumidx] = sum(i, j);
			if (max < sumarr[sumidx])
			{
				max = sumarr[sumidx];
				maxy = i;
				maxx = j;
			}
			sumidx++;
		}
	}
	std::cout << "(" << maxy << "," << maxx << ")";
}