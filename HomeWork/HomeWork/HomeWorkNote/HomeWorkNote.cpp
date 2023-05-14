#include <iostream>

int main()
{
	char arr[3][6] = {};
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (0 <= j && j <= 3)
			{
				std::cout << a;
			}
			else if (4 <= j && j <= 5)
			{
				std::cout << b;
			}
		}
		std::cout << "\n";
	}
}