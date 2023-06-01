#include <iostream>

char dicenum[6] = { '1','2','3','4','5','6' };
char path[6] = {};
void dice(int _level, int _a)
{
	if (_level == _a)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < 6; i++)
	{
		path[_level] = dicenum[i];
		dice(_level + 1, _a);
		path[_level] = 0;
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	dice(0, n);
}