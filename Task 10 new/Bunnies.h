#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class Bunnies
{
private:
	char sex;
	string bunnyColour;
	int age;
	string name;
public:
	Bunnies(){}
	char getRandomSex();
	string getRandomColour();
	int getRandomAge();
	string getRandomName();
	void insert();
};
