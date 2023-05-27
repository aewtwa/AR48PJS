#include <iostream>

void process(char(*_a)[4])
{
	for (int k = 0; k < 3; k++)
	{
		for (int i = 3; i >= 0; i--)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (_a[i][k] == '_' && _a[j][k] != '_')
				{
					char t = _a[i][k];
					_a[i][k] = _a[j][k];
					_a[j][k] = t;
				}
			}
		}
	}
}

int main()
{
	char map[4][4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> map[i];
	}
	process(map);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << map[i][j];
		}
		std::cout << "\n";
	}
}