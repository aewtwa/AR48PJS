#include <iostream>

char map[5][4] =
{
	"___",
	"___",
	"ATK",
	"___",
	"___"
};

void move(char _a, char* _b)
{
	int offset[4][2] =
	{
		-1,0,
		1,0,
		0,-1,
		0,1
	};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (map[i][j] == _a && strcmp(_b,"UP") == 0)
			{
				char c = map[i][j];
				map[i][j] = map[i - 1][j];
				map[i - 1][j] = c;
				return;
			}
			else if (map[i][j] == _a && strcmp(_b, "DOWN") == 0)
			{
				char c = map[i][j];
				map[i][j] = map[i + 1][j];
				map[i + 1][j] = c;
				return;
			}
			else if (map[i][j] == _a && strcmp(_b, "LEFT") == 0)
			{
				char c = map[i][j];
				map[i][j] = map[i][j - 1];
				map[i][j - 1] = c;
				return;
			}
			else if (map[i][j] == _a && strcmp(_b, "RIGHT") == 0)
			{
				char c = map[i][j];
				map[i][j] = map[i][j + 1];
				map[i][j + 1] = c;
				return;
			}
		}
	}
}

int main()
{
	char model[7] = {};
	char order[7][256] = {};
	for (size_t i = 0; i < 7; i++)
	{
		std::cin >> model[i];
		std::cin >> order[i];
	}
	for (size_t i = 0; i < 7; i++)
	{
		move(model[i], order[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << map[i][j];
		}
		std::cout << "\n";
	}
}