#include <iostream>

int isSame(char *_a, char *_b)
{
	if (strcmp(_a, _b) != 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	char arr[5][256] =
	{
		"JASON",
		"DR.tom",
		"EXEXI",
		"GK12P",
		"POW"
	};
	int flag = 0;
	char PASSWORD[5][256] = {};
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> PASSWORD[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		flag = isSame(arr[i], PASSWORD[i]);
	}
	if (flag == 1)
	{
		std::cout << "암호 틀림";
	}
	else
	{
		std::cout << "암호 해제";
	}
}