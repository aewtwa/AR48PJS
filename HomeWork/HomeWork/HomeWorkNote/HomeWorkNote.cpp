#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << a;
		}
		std::cout << "\n";
		a--;
	}
}