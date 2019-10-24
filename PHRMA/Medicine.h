
#ifndef Medicine_H
#define Medicine_H
#include <iostream>
#include "Replacement.h"
using namespace std;
class Medicine
{
	Replacement *Rep;
public:

	Medicine * Next;
	Medicine();
	Medicine(string, string, Date, Date, int, int);
	
	Replacement*& Get_Rep();
};

#endif