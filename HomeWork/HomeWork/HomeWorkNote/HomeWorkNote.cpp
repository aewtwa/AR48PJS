#include <iostream>

int main()
{
	int y = 5;
	int x = 5;
	int a = 0;
	std::cin >> a;
	char** b = new char* [a];
	for (int i = 0; i < a; i++)
	{
		b[i] = new char[256];
	}
	for (int i = 0; i < a; i++)
	{
		std::cin >> b[i];
	}
	char up[3] = "up";
	char down[5] = "down";
	char left[5] = "left";
	char right[6] = "right";
	char click[6] = "click";
	for (int i = 0; i < a; i++)
	{
		if (strcmp(up, b[i]) == 0)
		{
			y -= 1;
		}
		else if (strcmp(down, b[i]) == 0)
		{
			y += 1;
		}
		else if (strcmp(left, b[i]) == 0)
		{
			x -= 1;
		}
		else if (strcmp(right, b[i]) == 0)
		{
			x += 1;
		}
		else if (strcmp(click, b[i]) == 0)
		{
			std::cout << y << " , " << x << "\n";
		}
	}
}