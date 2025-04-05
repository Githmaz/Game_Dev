#pragma once

#include <iostream>

class UserInput
{
public:
	static int getInt();
	static int getIntInRange(int min, int max);
	static double getDouble();
	static char getChar();
	static  std::string  getString();
};

