#include <iostream>

int main()
{
	char arr[256] = {};
	std::cin >> arr;
	char arr1[6] = "GHOST";
	int flag = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (arr[i] == arr1[0])
		{
			for (size_t j = 0; j < 5; j++)
			{
				for (size_t k = i; k < i + 5; k++)
				{
					if (arr1[j] == arr[k])
					{
						flag = 1;
					}
					else
					{
						flag = 0;
					}
				}
			}
		}
	}
	if (flag == 1)
	{
		std::cout << "존재";
	}
	else
	{
		std::cout << "존재하지 않음";
	}
}