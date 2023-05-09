#include <iostream>

int main()
{
	int arr[6] = {};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int t = b - a + 1;
	int i;
	for (i = 0; i < t; i++)
	{
		arr[i] = a;
		std::cout << a;
		a++;
	}
}