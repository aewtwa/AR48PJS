#include <iostream>

int main()
{
	int a;
	char gd;
	std::cin >> a;
	std::cin >> gd;
	int* p = &a;
	char* t = &gd;
	std::cout << *p;
	std::cout << *t;
}