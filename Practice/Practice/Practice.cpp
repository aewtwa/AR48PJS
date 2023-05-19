#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <vector>

class Map
{
public:

static const int MapXsize = 5;
static const int MapYsize = 5;

protected:

private:
	Map()
	{
	}
};

class int2
{
public:
	int2(int _X,int _Y)
		:mX(_X)
		,mY(_Y)
	{

	}
	int mX;
	int mY;
};

class GameObject
{
public:
	GameObject()
		:mObjectPrinter(0)
		, mPos(int2(0,0))
	{

	}
	// setter
	void SetObjectPrinter(char _Printer)
	{
		mObjectPrinter = _Printer;
	}

	void SetPos(int2 _Pos)
	{
		mPos = _Pos;
	}
	int2 GetPos()
	{
		return mPos;
	}
protected:

private:
	char mObjectPrinter;
	int2 mPos;
};

class Player
{
};

std::vector< GameObject> GameObjects = {};
GameObject GamePlayer;

const int MapXsize = 5;
const int MapYsize = 5;
int arr2d[MapYsize][MapXsize] = {};

void SetMap()
{
	char MapPrint = 'a';
	for (int i = 0; i < MapYsize; i++)
	{
		for (int j = 0; j < MapXsize; j++)
		{
			arr2d[i][j] = MapPrint;
		}
	}
}


void PlayerMove()
{
	int2 PlayerPos = GamePlayer.GetPos();

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
		if (PlayerPos.mX > 0)
		{
			PlayerPos.mX -= 1;
		}
		break;
	case 'd':
	case 'D':
		if (PlayerPos.mX < 4)
		{
			PlayerPos.mX += 1;
		}
		break;
	case 'w':
	case 'W':
		if (PlayerPos.mY > 0)
		{
			PlayerPos.mY -= 1;
		}
		break;
	case 's':
	case 'S':
		if (PlayerPos.mY < 4)
		{
			PlayerPos.mY += 1;
		}
		break;
	}
	GamePlayer.SetPos(PlayerPos);
}

void SetObjects()
{
	for (int i = 0; i < MapYsize; i++)
	{
		for (int j = 0; j < MapXsize; j++)
		{
			arr2d[i][j] = GamePlayer.SetObjectPrinter('@');
		}
	}
}

void MapPrint()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << 'a';
		}
		std::cout << "\n";
	}
	/*
		gameobjects들을 순회하면서 gameobject 들을 출력해보세요
	*/
}

int main()

{
	GameObjects.push_back(GamePlayer);
	GamePlayer.SetObjectPrinter('@');
	GamePlayer.SetPos(int2(2, 2));
	while (true)
	{
		system("cls");
		SetMap();
		PlayerMove();
		SetObjects();
		MapPrint();
		Sleep(100);
	}
	int a = 0;
}
