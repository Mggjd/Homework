#pragma once
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Bird
{
protected:
	string Name = "";
	int ID = 0;
	string WinterOut = "";
	string Voice = "";
	string Home = "";
	string rarity = "";
public:
	void View();
};


