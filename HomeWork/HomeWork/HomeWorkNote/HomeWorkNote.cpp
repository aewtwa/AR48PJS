#include <iostream>
char map[4][5] = {};
char map1[4][5] =
{
	"ABCD",
	"BBAB",
	"CBAC",
	"BAAA"
};

int count;
int Acount = 0;
int Bcount = 0;
int Ccount = 0;
int Dcount = 0;

char isSame()
{
	
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (map[i][j] == map1[i][j] && map[i][j] == 'A')
			{
				Acount++;
			}
			else if (map[i][j] == map1[i][j] && map[i][j] == 'B')
			{
				Bcount++;
			}
			else if (map[i][j] == map1[i][j] && map[i][j] == 'C')
			{
				Ccount++;
			}
			else if (map[i][j] == map1[i][j] && map[i][j] == 'D')
			{
				Dcount++;
			}
		}
	}
	int countarr[4] = {};
	countarr[0] = Acount;
	countarr[1] = Bcount;
	countarr[2] = Ccount;
	countarr[3] = Dcount;
	int max = 0;
	for (size_t i = 0; i < 4; i++)
	{
		if (max < countarr[i])
		{
			max = countarr[i];
		}
	}
	return max;
}

void output()
{
	if (count == Acount)
	{
		std::cout << "A";
	}
	else if (count == Bcount)
	{
		std::cout << "B";
	}
	else if (count == Ccount)
	{
		std::cout << "C";
	}
	else
	{
		std::cout << "D";
	}
}

int main()
{
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> map[i];
	}
	count = isSame();
	output();
}