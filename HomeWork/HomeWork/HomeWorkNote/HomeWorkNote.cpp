#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int c = 1;
	for (int i = 0; i < a; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			std::cout << c;
			c++;
		}
		c = 1;
		std::cout << "\n";
	}
}