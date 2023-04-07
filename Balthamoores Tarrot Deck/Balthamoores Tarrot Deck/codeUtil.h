#pragma once

// this file contains misc utility functions that i will likely use multiple times in the program

#include <string>
#include <iostream>

using namespace std;

bool selectionVerify(string type) // warning C4715 can be ignored, the code will loop until a option that returns something is chosen
{
	//variable block
	char response;
	int loopControl = 0;
	while (loopControl < 1)
	{
		cout << " \n";
		cout << "you have chosen option: " << type << "\n";
		cout << "is this correct? Y/N \n";
		cout << "\n";
		cin >> response;
		switch (response)
		{
		case 'Y':
			cout << "\n";
			loopControl++;
			return true;
			break;
		case 'y':
			cout << "\n";
			loopControl++;
			return true;
			break;
		case 'N':
			cout << "\n";
			loopControl++;
			return false;
			break;
		case 'n':
			cout << "\n";
			loopControl++;
			return false;
			break;
		default:
			cout << "\n";
			cout << "Sorry you did not enter a valid response \n";
			break;
		}
	}
}

void conClr()
{
	//loop control variable
	int i;

	for (i = 0; i < 30; i++)
	{
		std::cout << "\n";
	}
}