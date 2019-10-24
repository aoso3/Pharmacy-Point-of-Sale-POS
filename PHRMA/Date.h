#ifndef Date_H
#define Date_H
class Date
{
private:
	unsigned short Day, Month, Year;
public:
	Date();
	Date(unsigned short, unsigned short, unsigned short);
	void Set_Day(unsigned short);
	void Set_Month(unsigned short);
	void Set_Year(unsigned short);
	unsigned short Get_Day();
	unsigned short Get_Month();
	unsigned short Get_Year();
	void Print_Date();
	
	friend bool operator >=(Date& first, Date& second);
	friend bool operator <=(Date& first, Date& second);
};

#endif