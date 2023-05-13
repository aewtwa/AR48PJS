#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	int c;
	std::cin >> c;
	for (int i = 0; i < c; i++)
	{
		for (char i = a; i <= b; i++)
		{
			std::cout << i;
		}
		std::cout << "\n";
	}
}