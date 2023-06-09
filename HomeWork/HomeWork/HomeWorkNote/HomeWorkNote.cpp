#include <iostream>

int arr[10] = { 0,3,1,2,1,3,2,1,2,1 };

void abc(int _idx)
{
	if (_idx > 9)
	{
		std::cout << "도착";
		return;
	}
	std::cout << arr[_idx];
	abc(_idx + arr[_idx]);
	std::cout << arr[_idx];
}

int main()
{
	int n = 0;
	std::cin >> n;
	abc(n);
}