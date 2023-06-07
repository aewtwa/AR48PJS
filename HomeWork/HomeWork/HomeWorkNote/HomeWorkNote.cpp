#include <iostream>

char str[16] = {};
int num[16] = {};

int count = 0;

int abc(int _a, int _b)
{
	_a * 10;
}

int main()
{
	std::cin >> str;
	for (size_t i = 0; i < 16; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			num[i] = str[i]-48;
			count++;
		}
	}

	for (int i = 0; i < 16; i++)
	{
		if (num[i] != 0)
		{
			num[i]
		}
	}
}