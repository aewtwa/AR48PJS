//포인터와 배열
#include <iostream>
using namespace std;


int CompareGo(int A[5], int* B)
{
	int flag = 1;
	for (size_t i = 0; i < 5; i++)
	{
		/* *(B + 2) = 100; */

		B[2] = 20;

		if (A[i] != B[i])
		{
			flag = 0;
			return flag;
		}
	}

	return flag;
}
//0x000000c9c773fab8 {3, 5, 1, 2, 7}
int main(void)
{
	int arrA[5] = { 3,5,1,2,7 };
	int arrB[5] = { 3,5,1,1,1 };

	int t = 100;
	// 배열의 첫번쨰 인자의 주소는
	// 배열의 이름으로 대체 가능하다.
	int ret = CompareGo(arrA, &arrB[0]);

	if (ret == 1)
	{
		// 같다
	}
	else
	{
		// 다르다.
	}



	return 0;
}