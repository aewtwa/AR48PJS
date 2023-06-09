#include <iostream>

char str1[16] = {};
char str2[16] = {};
char findstr[16] = {};
char findmaxstr[16] = {};
int findstrlen = 0;
int findmaxstrlen = 0;

void isfind(int _1idx, int _2idx)
{
	int flag = 0;
	for (int i = _1idx; i < strlen(str1); i++)
	{
		for (size_t j = _2idx; j < strlen(str2); j++)
		{
			if (str1[i] == str2[j])
			{
				char ch = str1[i];
				findstr[findstrlen] = ch;
				findstrlen++;
				i++;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	if (findmaxstrlen < findstrlen)
	{
		findmaxstrlen = findstrlen;
		for (size_t i = 0; i < findstrlen; i++)
		{
			findmaxstr[i] = findstr[i];
		}
	}
	for (size_t i = 0; i < findstrlen; i++)
	{
		findstr[i] = 0;
	}
	findstrlen = 0;
	return;
}

int main()
{
	std::cin >> str1;
	std::cin >> str2;

	for (size_t i = 0; i < strlen(str1); i++)
	{
		for (size_t j = 0; j < strlen(str2); j++)
		{
			if (str1[i] == str2[j])
			{
				isfind(i, j);
			}
		}
	}
	for (size_t i = 0; i < 16; i++)
	{
		std::cout << findmaxstr[i];
	}
}