#include "stdafx.h"
#include "Bunnies.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct bunnyNode
{
	// Bunnies * bunny;
	int bunnyData;
	struct bunnyNode *next;
	int randAge;
	char randSex;
	string randColour;
	string randName;
};
char Bunnies::getRandomSex()
{
	char sexArray[] = { 'M', 'F' };
	int randSexIndex = rand() % 2;
	sex = sexArray[randSexIndex];
	return this->sex;
}
string Bunnies::getRandomColour()
{
	string colour[] = {"White", "Black", "Brown" , "Spotted"};
	int randColourIndex = rand() % 4;
	bunnyColour = colour[randColourIndex];
	return this->bunnyColour;
}

int Bunnies::getRandomAge()
{
	age = rand() % 10 + 1;
	return this->age;
}

string Bunnies::getRandomName()
{
	string nameList[] = { "Poppy", "Fluffy", "Bunner", "Rocky", "Bonnie", "Sally", "Paulie", "Bubbles", "Flappy", "Whitey" };
	int nameIndex = rand() % 10;
	name = nameList[nameIndex];
	return this->name;
}

void Bunnies::insert()
{
	bunnyNode *newnode = new bunnyNode;
	bunnyNode *list = new bunnyNode;
	bunnyNode *iterator = new bunnyNode;
	newnode->randAge = age;
	newnode->randName = name;
	newnode->randColour = bunnyColour;
	newnode->randSex = sex;
	newnode->next = NULL;
	if (list == NULL)
	{
		list = newnode;
	}
	else
	{
		newnode->next = list;
		list = newnode;
		list->next = NULL;
	}
	//printing
	iterator = list;
	while (iterator != NULL)
	{
		cout << newnode->randAge << endl;
		cout << newnode->randName << endl;
		cout << newnode->randColour<< endl;
		cout << newnode->randSex << endl;
		cout << "--------------- \n" << endl;
		iterator = iterator->next;
	}
}


