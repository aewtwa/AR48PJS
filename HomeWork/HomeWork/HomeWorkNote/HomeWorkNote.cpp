#include <iostream>

void dfs(int _idx)
{


	dfs(_idx * 2);
	dfs(_idx * 2 + 1);
}

int main()
{
	dfs(1);
}