#include <iostream>

char a;
char b;

void ABC()
{
	std::cin >> a;
	std::cin >> b;
}

void OUTPUT()
{
	std::cout << a;
	std::cout << " ";
	std::cout << b;
}

int main()
{
	ABC();
	OUTPUT();
}