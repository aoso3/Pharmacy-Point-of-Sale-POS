#include "Date.h"
#include <ctime>
#include <iostream>
using namespace std;
time_t t = time(0);
const struct tm * now = localtime(&t);
Date::Date()
{
	Day = now->tm_mday;
	Month = now->tm_mon;
	Year = now->tm_year;
}

Date::Date(unsigned short d, unsigned short m, unsigned short y)
{

	Set_Day(d);
	Set_Month(m);
	Set_Year(y);
}

void Date::Set_Day(unsigned short d)
{
	if ((d <= 0) || (d>31))
		Day = now->tm_mday;
	else
		Day = d;
}
void Date::Set_Month(unsigned short m)
{
	if ((m <= 0) || (m>12))
		Month = now->tm_mon;
	else
		Month = m;
}
void Date::Set_Year(unsigned short y)
{
	if ((y >= 2100) || (y<200))
		Year = now->tm_year;
	else
		Year = y;
}
unsigned short  Date::Get_Day()
{
	return Day;
}
unsigned short  Date::Get_Month()
{
	return Month;
}
unsigned short  Date::Get_Year()
{
	return Year;
}

void Date::Print_Date()
{
	cout << Day << "/" << Month << "/" << Year;
}

bool operator >=(Date& first, Date& second)
{
	if (first.Get_Year()>second.Get_Year())
		return true;
	else if (first.Get_Year() == second.Get_Year())
	if (first.Get_Month() > second.Get_Month())
		return true;
	else if (first.Get_Month() == second.Get_Month())
	if (first.Get_Day() >= second.Get_Day())
		return true;

	return false;
}
bool operator <=(Date& first, Date& second)
{
	if (first.Get_Year()<second.Get_Year())
		return true;
	else if (first.Get_Year() == second.Get_Year())
	if (first.Get_Month() < second.Get_Month())
		return true;
	else if (first.Get_Month() == second.Get_Month())
	if (first.Get_Day() <= second.Get_Day())
		return true;

	return false;
}