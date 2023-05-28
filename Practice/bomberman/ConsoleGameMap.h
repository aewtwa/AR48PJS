#pragma once
#include <iostream>
#include"int2.h"

class ConsoleGameMap
{
public:
	static ConsoleGameMap& getInstance()
	{
		static ConsoleGameMap Map;
		return Map;
	}

	void MapPrint()
	{
		for (size_t y = 0; y < Mapsize.Y; y++)
		{
			for (size_t x = 0; x < Mapsize.X; x++)
			{
				std::cout << arrMap[y][x];
			}
			std::cout << "\n";
		}
	}

	void MapClear()
	{
		system("cls");
	}

protected:

private:
	int2 Mapsize;
	char arrMap[10][10];

	ConsoleGameMap()
		:Mapsize{10,10}
	{
		for (size_t y = 0; y < 10; y++)
		{
			for (size_t x = 0; x < 10; x++)
			{
				arrMap[y][x] = '@';
			}
		}
	}
	ConsoleGameMap(const ConsoleGameMap& Mapref)
	{
	}
	~ConsoleGameMap()
	{
	}
	static ConsoleGameMap Mainscreen;
};