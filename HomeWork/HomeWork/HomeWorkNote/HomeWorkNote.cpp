#include <iostream>

int arr[8] = { 0,3,7,10,5,6,3,6 };
int path[8] = {};
void dfs(int _idx, int _level)
{
	path[_level] = arr[_idx];
	int mod = arr[_idx] % 2;

	if (mod == 0)
	{
		for (size_t i = 0; i <= _level; i++)
		{
			std::cout << path[i] << " ";
		}
		std::cout << "\n";
		return;
	}

	if (_idx * 2 > 7)
		return;

	dfs(_idx * 2, _level + 1);
	path[_level + 1] = 0;
	dfs(_idx * 2 + 1, _level + 1);
	path[_level + 1] = 0;
}

int main()
{
	dfs(1, 0);
}