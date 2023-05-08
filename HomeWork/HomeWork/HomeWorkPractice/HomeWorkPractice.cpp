#include <iostream>

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < 11; i += a)
	{
		std::cout << arr[i];
	}
}