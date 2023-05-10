#include <iostream>

int main()
{
	int a;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> a;
		if (a == 20)
		{
			std::cout << "정답입니다." << "\n";
		}
		else if (a < 20)
		{
			std::cout << "더 큰 수를 입력하세요." << "\n";
		}
		else if (a > 20)
		{
			std::cout << "더 작은 수를 입력하세요." << "\n";
		}
	}
}