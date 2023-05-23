#include <iostream>

void input(int* _a)
{
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> _a[i];
	}
}

void celebate(int(*_a)[3], int* _b)
{
	int arr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				if (_a[j][k] == _b[i])
				{
					arr[i] = 1;
					break;
				}
				else
				{
					arr[i] = 0;
				}
			}
			if (arr[i] == 1)
			{
				break;
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (arr[i] == 1)
		{
			std::cout << _b[i] << "번 합격\n";
		}
		else
		{
			std::cout << _b[i] << "번 불합격\n";
		}
	}
}

int main()
{
	int win[2][3] =
	{
		3,5,1,
		4,2,6
	};
	int people[4] = {};
	input(people);
	celebate(win, people);
}