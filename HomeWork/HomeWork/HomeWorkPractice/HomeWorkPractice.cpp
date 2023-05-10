#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		{3,4,1},
		{2,1,4},
		{3,3,0}
	};
	int i = 0;
	int j = 0;
	arr2d[3][3] = arr2d[i][j];
	int a = arr2d[i][j] % 2;
	int b = 0;
	int c = 0;
	if (a == 0)
	{
		b++;
	}
	else
	{
		c++;
	}
	std::cout << "짝수 : " << b;
	std::cout << "홀수 : " << c;
}