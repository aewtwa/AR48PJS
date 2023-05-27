#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <vector>

enum class eGameObjectType
{
	Player,
	Wall,

	End,
};

class Map
{
public:


protected:

private:
	static const int MapXsize = 5;
	static const int MapYsize = 5;

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
	char GetObjectPrinter() const
	{
		return mObjectPrinter;
	}

	void SetPos(int2 _Pos)
	{
		mPos = _Pos;
	}
	int2 GetPos() const
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


std::vector<GameObject*> GameObjects[static_cast<UINT>(eGameObjectType::End)] = {};
GameObject* GamePlayer;

const int MapXsize = 6;
const int MapYsize = 5;
char arrMap[MapYsize][MapXsize] =
	{
		"#####",
		"#   #",
		"#   #",
		"#   #",
		"#####"
	};

void SetMap()
{
	char MapPrint = ' ';
	for (int i = 0; i < MapYsize; i++)
	{
		for (int j = 0; j < MapXsize; j++)
		{
			if (arrMap[i][j] == '#')
			{
				continue;
			}
			arrMap[i][j] = MapPrint;
		}
	}
}

void SetWall()
{

}

void PlayerMove()
{
	int2 PlayerPos = GamePlayer->GetPos();

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
	GamePlayer->SetPos(PlayerPos);
}

void SetObjects()
{
	UINT TypeSize = static_cast<UINT>(eGameObjectType::End);

	for (size_t i = 0; i < TypeSize; i++)
	{
		for (size_t j = 0; j < GameObjects[i].size(); j++)
		{
			int2 objectPos = GameObjects[i][j]->GetPos();
			arrMap[objectPos.mY][objectPos.mX] = GameObjects[i][j]->GetObjectPrinter();
		}
	}
}

void MapPrint()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << (arrMap[i][j]);
		}
		std::cout << "\n";
	}
	
}


GameObject* obj = new GameObject();

int main()
{
	for (int i = 0; i < MapYsize; i++)
	{
		for (int j = 0; j < MapXsize; j++)
		{
			if('#' == arrMap[i][j])
			{
				GameObject* newWall = new GameObject();
				GameObjects[(UINT)eGameObjectType::Wall].push_back(newWall);
				newWall->SetPos(int2(j, i));
				newWall->SetObjectPrinter('#');
			}
		}
	}
	GamePlayer = new GameObject();	
	GameObjects[(UINT)eGameObjectType::Player].push_back(GamePlayer);
	GamePlayer->SetObjectPrinter('@');
	GamePlayer->SetPos(int2(2, 2));
	while (true)
	{
		system("cls");
		SetMap();
		PlayerMove();
		SetObjects();
		MapPrint();
		Sleep(100);
	}

	UINT TypeSize = static_cast<UINT>(eGameObjectType::End);

	for (size_t i = 0; i < TypeSize; i++)
	{
		for (size_t j = 0; j < GameObjects[i].size(); j++)
		{
			delete GameObjects[i][j];
			GameObjects[i][j] = nullptr;
		}
	}
}
