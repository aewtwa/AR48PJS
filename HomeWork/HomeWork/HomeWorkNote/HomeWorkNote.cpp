#include <iostream>

struct Node
{
	char ch;
	int num;
};

int main()
{
	Node ABC[8] = {};
	for (size_t i = 0; i < 8; i++)
	{
		std::cin >> ABC[i].ch;
		std::cin >> ABC[i].num;
	}

	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = i + 1; j < 8; j++)
		{
			if (ABC[i].ch > ABC[j].ch)
			{
				Node c = ABC[i];
				ABC[i] = ABC[j];
				ABC[j] = c;
			}
		}
	}

	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = i + 1; j < 8; j++)
		{
			if (ABC[i].ch == ABC[j].ch && ABC[i].num>ABC[j].num)
			{
				Node c = ABC[i];
				ABC[i] = ABC[j];
				ABC[j] = c;
			}
		}
	}

	for (size_t i = 0; i < 8; i++)
	{
		std::cout << ABC[i].ch << " " << ABC[i].num << "\n";
	}
}