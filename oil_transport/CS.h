#pragma once
#include <string>
#include <iostream>

class cs
{
public:
	int id = 0;
	string name;
	int rooms = 0;
	int active_rooms = 0;
	int efficiency = 0;

	friend ostream& operator << (ostream& out, const cs& new_cs);
};

