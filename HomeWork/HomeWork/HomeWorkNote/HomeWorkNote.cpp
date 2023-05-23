#include <iostream>

int main()
{
	char vect[10] = "MINCODING";
	int n = 0;
	std::cin >> n;
	int bucket[256] = {};
	for (size_t i = 0; i < 256; i++)
	{
		bucket[vect[i]]++;
	}
	char arr[256] = {};
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}