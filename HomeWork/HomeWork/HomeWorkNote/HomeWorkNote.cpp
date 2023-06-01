#include <iostream>

char str[11] = {};

int isPair()
{
	int bucket[256] = {};
	for (int i = 0; i < 10; i++)
	{
		int target = str[i];
		bucket[target]++;
		if (bucket[70] > bucket[66])
		{
			return 1;
		}
	}
	if (bucket[66] != bucket[70])
	{
		return 1;
	}
	return 0;
}

int main()
{
	std::cin >> str;
	if (isPair() == 1)
	{
		std::cout << "짝이 안 맞음";
	}
	else
	{
		std::cout << "짝이 맞음";
	}
}