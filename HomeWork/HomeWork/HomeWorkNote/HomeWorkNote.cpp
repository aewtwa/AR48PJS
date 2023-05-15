#include <iostream>

int main()
{
	char arr[8] = {};
	for (int i = 0; i < 8; i++)
	{
		std::cin >> arr[i];
	}
	char big[8] = {};
	int bigidx = 0;
	char small[8] = {};
	int smallidx = 0;
	for (int i = 0; i < 8; i++)
	{
		if ('A' <= arr[i] && arr[i] <= 'Z')
		{
			big[bigidx] = arr[i];
			bigidx++;
		}
		else if ('a' <= arr[i] && arr[i] <= 'z')
		{
			small[smallidx] = arr[i];
			smallidx++;
		}
	}
	std::cout << "big = ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << big[i];
	}
	std::cout << "\n";
	std::cout << "small = ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << small[i];
	}
	int a = 0;
}