#include <iostream>

void countline(char(*_a)[10], char* _b, char* _c, char* _d)
{
	int count[3] = {};
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (_a[j][i] == '\0')
			{
				count[j] = i;
				break;
			}
		}
	}
	std::cout << count[0] << "=" << _b << "\n";
	std::cout << count[1] << "=" << _c << "\n";
	std::cout << count[2] << "=" << _d;
}

int main()
{
	char a[3][10] = {};
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> a[i];
	}
	countline(a, a[0], a[1], a[2]);
}