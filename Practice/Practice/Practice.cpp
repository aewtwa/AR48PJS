#include <iostream>
#include <conio.h>
#include <Windows.h>

const int MapXsize = 5;
const int MapYsize = 5;
int PlayerXPos = 2;
int PlayerYPos = 2;
int arr2d[MapYsize][MapXsize] = {};
void SetMap()
{
	char MapPrint = 'a';
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr2d[i][j] = MapPrint;
		}
	}
}

void SetPlayer()
{
	char PlayerPrint = '@';
	arr2d[PlayerYPos][PlayerXPos] = PlayerPrint;
}

void PlayerMove()
{
	if (0 == _kbhit())
	{
		Sleep(0);
		return;
	}
	char a = _getch();
	switch (a)
	{
	case 'a':
	case 'A':
		if (PlayerXPos > 0)
		{
			PlayerXPos -= 1;
		}
		break;
	case 'd':
	case 'D':
		if (PlayerXPos < 4)
		{
			PlayerXPos += 1;
		}
		break;
	case 'w':
	case 'W':
		if (PlayerYPos > 0)
		{
			PlayerYPos -= 1;
		}
		break;
	case 's':
	case 'S':
		if (PlayerYPos < 4)
		{
			PlayerYPos += 1;
		}
		break;
	}
}

void MapPrint()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << (char)(arr2d[i][j]);
		}
		std::cout << "\n";
	}
}

int main()

{
	while (true)
	{
		system("cls");
		SetMap();
		SetPlayer();
		PlayerMove();
		MapPrint();
		Sleep(100);
	}
}
