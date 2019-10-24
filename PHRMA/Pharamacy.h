
#ifndef Pharamacy_H
#define Pharamacy_H
#include<iostream>
#include "Date.h"
#include"Medicine.h"
#include "Replacement.h"
class Pharamacy
{
private:

	void Print_Rep(Replacement *);
public:
	Medicine * PHA[26];
	Pharamacy();
	Medicine * Search_Med(string);
	Replacement * Search_Rep(string, string);
	void Add_Med(bool,string, string, Date, Date, int, int);
	void Add_Rep(bool,string, string, string, Date, Date, int, int);
	void Sale_Med(string, int);
	void Sale_Rep(string, string, int);
	void Delete_Med(string);
	void Delete_Rep(string, string);




	//void Print_Med(string);
	//void Print_Rep_Med(string, string);

	//void Print_allMed();
	//void Print_allRep_Med(string);
	//void print_Pharmacy();
	//void Print_Med_and_Reps(string);
	//void print_all_expired_med();
	//void print_Company_Med(string);
};
#endif
