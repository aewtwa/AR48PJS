#include <iostream>

int a;
int b;
void input()
{
	std::cin >> a;
	std::cin >> b;
}

void output()
{
	int i = 5;
	while (i <= a + b)
	{
		std::cout << i << " ";
		i++;
	}
}

int main()
{
	input();
	output();
}