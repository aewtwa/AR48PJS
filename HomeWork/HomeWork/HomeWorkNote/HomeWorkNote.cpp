#include <iostream>

void BBQ(int _a)
{
	for (int i = 1; i <= _a; i++)
	{
		std::cout << i;
	}
}

void KFC(int _a)
{
	for (int i = 0; i < 7; i++)
	{
		std::cout << (char)(_a);
	}
}

int main()
{
	int a;
	std::cin >> a;
	int mod = a % 2;
	if (mod == 1)
	{
		int b;
		std::cin >> b;
		BBQ(b);
	}
	if (mod == 0)
	{
		char d;
		std::cin >> d;
		KFC(d);
	}
}