#include "int2.h"
#include "ConsoleGameMap.h"
#include <windows.h>
int main()
{
	while (true)
	{
		ConsoleGameMap::getInstance().MapPrint();
		Sleep(50);
		ConsoleGameMap::getInstance().MapClear();
	}
}