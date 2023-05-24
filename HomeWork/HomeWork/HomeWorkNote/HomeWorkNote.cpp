#include <iostream>

void abc(int _a)
{
	if (_a == 0)
		return;
	abc(_a / 2);
	std::cout << _a;
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(a);
}