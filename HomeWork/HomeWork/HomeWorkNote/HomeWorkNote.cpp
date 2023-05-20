#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	char c = 0;
	std::cin >> c;

	for (size_t k = 0; k < 2; k++)
	{
		for (size_t i = 0; i < a; i++)
		{
			for (size_t j = 0; j < b; j++)
			{
				std::cout << c;
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}
}