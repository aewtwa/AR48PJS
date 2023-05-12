#include <iostream>

struct Person
{
	int age;
	int height;
};

Person a = {};
Person b = {};

void input()
{
	std::cin >> a.age;
	std::cin >> a.height;
	std::cin >> b.age;
	std::cin >> b.height;
}

void output()
{
	std::cout << (a.age + b.age) / 2;
	std::cout << " ";
	std::cout << (a.height + b.height) / 2;
}

int main()
{
	input();
	output();
}