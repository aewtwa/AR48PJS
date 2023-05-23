#include <iostream>

struct MC
{
	char burger1[8];
	char burger2[8];
};

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
	for (int i = 0; i < 8; i++)
	{
		if (bob.burger1[i] == '\0')
		{
			bobburger1count = i;
			break;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (bob.burger2[i] == '\0')
		{
			bobburger2count = i;
			break;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (tom.burger1[i] == '\0')
		{
			tomburger1count = i;
			break;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (tom.burger2[i] == '\0')
		{
			tomburger2count = i;
			break;
		}
	}
	std::cout << "bob.burger1 = " << bobburger1count << "\n";
	std::cout << "bob.burger2 = " << bobburger2count << "\n";
	std::cout << "tom.burger1 = " << tomburger1count << "\n";
	std::cout << "tom.burger2 = " << tomburger2count;
}
	
