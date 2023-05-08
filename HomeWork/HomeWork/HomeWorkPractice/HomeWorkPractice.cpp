#include <iostream>

int main()
{
	int arr[4] = {};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	arr[0] = a;
	arr[2] = b;
	int i;
	for (i = 0; i < 4; i++)
	{
		std::cout << arr[i];
	}
}