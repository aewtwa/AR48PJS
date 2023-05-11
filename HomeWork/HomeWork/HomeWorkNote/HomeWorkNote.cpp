#include <iostream>
void starBox()
{
	int arr[20] = {};
	for (int i = 0; i < 19; i++)
	{
		arr[i] = i++ + 1;
		int mod = i % 2;
		if (mod == 1)
		{
			std::cout << i << " ";
		}
	}
}

void macDoll()
{
	char arr[8] = {};
	char a = 'H';
	for (int i = 0; i < 8; i++)
	{
		arr[i] = a;
		std::cout << a << " ";
		a--;
	}
}

void copyBean()
{
	for (int i = -5; i <= 5; i++)
	{
		std::cout << i << " ";
	}
}

int main()
{
	int input;
	std::cin >> input;
	if (3500 <= input && input <= 5000)
	{
		starBox();
	}
	else if (2500 <= input && input < 3500)
	{
		macDoll();
	}
	else
	{
		copyBean();
	}
}