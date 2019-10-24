#include "Replacement.h"

static int C = 1;
Replacement::Replacement()
{
	Name = "Replecement";
	Company = "Company";
	Price = 100;
	Count = 1;
	Down = NULL;
	C++;
}

Replacement::Replacement(string name, string company, Date pro, Date exp, int price, int count)
{
	Name = name;
	Company = company;
	Pro = pro;
	Exp = exp;
	Price = price;
	Count = count;
	Down = NULL;
}
string  Replacement::Get_Name()		{ return Name; }
string  Replacement::Get_Company()		{ return  Company; }
Date Replacement::Get_Pro()			{ return Pro; }
Date Replacement::Get_Exp()			{ return  Exp; }
double Replacement::Get_Price()		{ return Price; }
int Replacement::Get_Count()			{ return Count; }
void Replacement::Set_Name(string name)		{ Name = name; }
void Replacement::Set_Count(int count)
{
	if (count >= 0)
		Count = count;
	else
		Count = 0;
}
/*void Replacement ::Set_Company(string company)	{Company=company;}
void Replacement ::Set_Price(double price)		{Price=price;}

void Replacement ::Set_Pro(Date pro)			{Pro=pro;}
void Replacement ::Set_Exp(Date exp)			{Exp=exp;}*/

