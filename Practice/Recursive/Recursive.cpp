// Recursive.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
int arr[5] = { 5,7,1,2,3 };
void kfc(int _a)
{
	if (_a == 5)
	{
		return;
	}
	std::cout << arr[_a];
	kfc(_a + 1);
	std::cout << arr[_a];
}

int main()
{
	kfc(0);
}