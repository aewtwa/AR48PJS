#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	for (int i = 0; i < c; i++)
	{
		for (int x = a; x <= b; x++)
		{
			std::cout << x << " ";
		}
		std::cout << "\n";
	}
}