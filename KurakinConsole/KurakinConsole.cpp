// KurakinConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdio>
#include "KurakinLib.h"

int main()
{
	PrintName();
	std::cout << "Some cool new text that totally change program" << std::endl;
	std::cout << "Enter any key to exit..." << std::endl;
	std::getchar();
	return 0;
}