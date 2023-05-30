#include <iostream>

int arr[5] = {};
char path[5] = {};
int count = 0;

int isdiff()
{
	for (size_t i = 0; i < 3; i++)
	{
		if (path[i] + 3 < path[i + 1] || path[i] - 3 > path[i + 1])
			return 1;
	}
	return 0;
}

void abc(int _level)
{
	if (_level == 4)
	{
		if (isdiff() == 0)
		{
			count++;
		}
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		path[_level] = arr[i];
		abc(_level + 1);
		path[_level] = '\0';
	}
}

int main()
{
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	abc(0);
	std::cout << count;
}