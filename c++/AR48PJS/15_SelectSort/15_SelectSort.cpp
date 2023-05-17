#include <iostream>

int main()
{
	// 선택정렬 (유사품으로 버블정렬)
	int arr[6] = { 5,3,5,2,1,8 };
	for (size_t y = 0; y < 6; y++)
	{
		for (size_t x = y + 1; x < 6; x++)
		{
			if (arr[y] > arr[x])
			{
				int c = arr[y];
				arr[y] = arr[x];
				arr[x] = c;
			}
		}
	}
}