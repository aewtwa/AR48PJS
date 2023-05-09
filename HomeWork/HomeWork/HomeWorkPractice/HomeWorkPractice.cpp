#include <iostream>

int main()
{
	int arr[6] = {};
	int a;
	std::cin >> a;
	int i;
	int sum = a;
	for (i = 0; i < 6; i++)
	{
		arr[i] = sum;
		std::cout << sum << " ";
		sum = sum + a;
	}
}