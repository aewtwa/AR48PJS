#include <iostream>

struct MC
{
	char burger1[8];
	char burger2[8];
};

int getlen(char* _a)
{
	for (int i = 0; i < 8; i++)
	{
		if (_a[i] == '\0')
		{
			return i;
		}
	}
}

int main()
{
	MC bob = {};
	MC tom = {};
	std::cin >> bob.burger1;
	std::cin >> bob.burger2;
	std::cin >> tom.burger1;
	std::cin >> tom.burger2;
	int bobburger1count = 0;
	int bobburger2count = 0;
	int tomburger1count = 0;
	int tomburger2count = 0;
	std::cout << "bob.burger1 = " << getlen(bob.burger1) << "\n";
	std::cout << "bob.burger2 = " << getlen(bob.burger2) << "\n";
	std::cout << "tom.burger1 = " << getlen(tom.burger1) << "\n";
	std::cout << "tom.burger2 = " << getlen(tom.burger2);
}