// Task 10 new.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bunnies.h"
#include <iostream>
using namespace std;

int main()
{
	Bunnies newBunnies;
	for (int i = 0; i < 10; i++)
	{
		newBunnies.getRandomSex();
		newBunnies.getRandomColour();
		newBunnies.getRandomAge();
		newBunnies.getRandomName();
		newBunnies.insert();
	}
	//cout << "bunnies inserted" << endl;
	system("pause");
    return 0;
}

