#include "int2.h"
#include "ConsoleGameMap.h"
#include <windows.h>
#include "Player.h"

int main()
{
	Player OwO = {};

	OwO.GetPos();
	OwO.SetPos(int2(5,5));
	OwO.
	while (true)
	{
		ConsoleGameMap::getInstance().MapClear();
		ConsoleGameMap::getInstance().MapPrint();
		Sleep(50);
	}
}