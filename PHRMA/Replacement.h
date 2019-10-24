#ifndef Replacement_H
#define Replacement_H
#include <iostream>
#include"Date.h"
using namespace std;

class Replacement
{
	string Name;
	string Company;
	Date Pro;
	Date Exp;
	int Price;
	int Count;



public:
	Replacement * Down;
	Replacement();
	Replacement(string, string, Date, Date, int, int);
	string  Get_Name();
	string  Get_Company();
	Date Get_Pro();
	Date Get_Exp();
	double Get_Price();
	int Get_Count();
	void Set_Name(string);
	void Set_Count(int);

	/*
	void Set_Company(string);
	void Set_Price(double);

	void Set_Pro(Date);
	void Set_Exp(Date);
	*/
};
#endif
