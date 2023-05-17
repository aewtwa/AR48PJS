#include <iostream>

int main()
{
	char a[256];
	std::cin >> a;
	char b[256];
	std::cin >> b;
	int check = 0;
	for (int i = 0; i < 256; i++)
	{
		if (a[i] == '\0')
		{
			check = i;
			break;
		}
	}
	std::cout << check;
	for (int i = 0; i < 256; i++)
	{
		if (b[i] == '\0')
		{
			check = i;
			break;
		}
	}
	std::cout << check;
}