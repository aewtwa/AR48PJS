#include <iostream>

int input()
{
	int a;
	std::cin >> a;
	return a;
}

void CountDown(int _a)
{
	for (int i = _a; i >= 1; i--)
	{
		std::cout << i;
	}
}

int main()
{
	CountDown(input());
}