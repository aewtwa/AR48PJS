#include <iostream>

int main()
{
	int arr[5] = {};
	int i;
	char j = 0;
	char k = 0;
	char l = 0;
	int a;
	for (i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	if (arr[i] >= 70)
	{
		j = 'PASS';
	}
	else if (arr[i] >= 50)
	{
		k = 'RE';
	}
	else if (arr[i] < 50)
	{
		l = 'FAIL';
	}


	std::cout << "1번사람은" << arr[0] << "점" << j;
	
}