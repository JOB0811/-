#pragma once
#include<iostream>

using std::cout;
using std::cin;
using std::endl;


struct Family
{
	enum
	{
		NameMax = 20,
		HobbyMax = 40,
		RegionMax = 30
	};

	char Name[NameMax];
	int Age;
	char Hobby[HobbyMax];
	char Region[RegionMax];

};
