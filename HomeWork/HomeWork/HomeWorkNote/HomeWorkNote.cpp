#include <iostream>

int main()
{
	char arr2d[2][8] = {};
	std::cin >> arr2d[0];
	std::cin >> arr2d[1];
	int count = 0;
	for (size_t j = 0; j < 8; j++)
	{
		if (arr2d[0][j] != arr2d[1][j])
		{
			count++;
		}
	}
	std::cout << count;
}