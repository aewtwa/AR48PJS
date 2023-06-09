#include <iostream>

int matrix[5][5] =
{
	0,1,1,1,0,
	1,0,1,0,1,
	1,1,0,1,1,
	1,0,1,0,0,
	0,1,1,0,0
};

char arr[5] = {'A','B','C','D','E'};
char path[10] = "";

void abc(int _level, int _now)
{
	for (size_t i = 0; i < 5; i++)
	{
		if (matrix[_now][i])
		{
			path[_level] = 'A' + i;
			abc(_level + 1, i);
			path[_level] = 0;
		}
	}
}


int main()
{
	abc(0, 0);
}
