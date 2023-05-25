#include <iostream>

void draw(int(*_a)[4])
{
	char a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	if (a == 'G')
	{
		for (size_t i = 0; i < 4; i++)
		{
			_a[b][i] = 1;
		}
	}
	else if (a == 'S')
	{
		for (size_t i = 0; i < 4; i++)
		{
			_a[i][b] = 1;
		}
	}
}

int main()
{
	int arr[4][4] = {};
	draw(arr);
	draw(arr);
	draw(arr);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << "\n";
	}
}
