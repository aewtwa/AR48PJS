#pragma once
#include "int2.h"
#include "ConsoleGameMap.h"

class Player
{
public:
	int2 GetPos()
	{
		return PlayerPos;
	}

	void SetPos(int2 _Pos)
	{
		PlayerPos = _Pos;
	}

	Player()
	{
	}
protected:

private:
	int2 PlayerPos = int2(5,5);
	wchar_t PlayerPrinter = L'¡Ú';
};