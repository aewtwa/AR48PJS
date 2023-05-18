#include <iostream>

int main()
{
	char arr2d[2][256] =
	{
		"457132",
		"DFQWGZ"
	};
	char a = 0;
	std::cin >> a;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr2d[0][i] == a)
		{
			std::cout << arr2d[1][i];
		}
	}
}