#include <iostream>

int main()
{
	char matrix[9] = { '\0','A','D','F','Z','C','G','Q','H' };

	char a = 0;
	std::cin >> a;
	char b = 0;
	std::cin >> b;

	int aidx = 0;
	int bidx = 0;

	for (size_t i = 0; i < 9; i++)
	{
		if (matrix[i] == a)
		{
			aidx = i;
		}
	}

	for (size_t i = 0; i < 9; i++)
	{
		if (matrix[i] == b)
		{
			bidx = i;
		}
	}

	if (aidx * 2 == bidx || aidx * 2 + 1 == bidx || bidx * 2 == aidx || bidx * 2 + 1 == aidx)
	{
		std::cout << "부모자식관계";
	}
	else
	{
		std::cout << "아님";
	}
}