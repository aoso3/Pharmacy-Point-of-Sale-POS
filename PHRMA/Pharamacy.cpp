
#include "Pharamacy.h"
#include<iostream>
#include "Date.h"
#include"Medicine.h"
#include "Replacement.h"
#include<string>
#include<ctime>
#include <string>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;





Pharamacy::Pharamacy()
{
	for (int i = 0; i<26; i++)
		PHA[i] = NULL;
}

Medicine * Pharamacy::Search_Med(string name)
{
	int x = name[0];
	if ((x >= 'A') && (x <= 'Z'))
		x = x - 'A' + 'a';
	if (PHA[x - 97] != NULL)
	{
		Medicine * Temp_Med = PHA[x - 97];
		while ((Temp_Med != NULL) && (Temp_Med->Get_Rep()->Get_Name() != name))
			Temp_Med = Temp_Med->Next;
		if (Temp_Med != NULL)
			return Temp_Med;
	}
	return NULL;
}

Replacement * Pharamacy::Search_Rep(string name_med, string name_rep)
{
	Medicine * Temp_Med = Search_Med(name_med);
	if (Temp_Med != NULL)
	{
		Replacement * Temp_Rep = Temp_Med->Get_Rep()->Down;
		while ((Temp_Rep != NULL) && (Temp_Rep->Get_Name() != name_rep))
			Temp_Rep = Temp_Rep->Down;
		if (Temp_Rep != NULL)
			return Temp_Rep;
	}
	return NULL;
}

void Pharamacy::Add_Med(bool ok,string name, string company, Date pro, Date exp, int price, int count)
{
	Medicine * S_Med = Search_Med(name);
	if (S_Med != NULL)
	{

		if (S_Med->Get_Rep()->Get_Company() == company)
		{
			S_Med->Get_Rep()->Set_Count(S_Med->Get_Rep()->Get_Count() + count);
		if(ok)	MessageBox::Show("This Medicine is really Exist , increasing the number  succeeded  ");
		}
		else
		if (ok)	MessageBox::Show("Sorry,This Medicine is found but in other combany ");
	}
	else
	{
		int x = name[0];
		if ((x >= 'A') && (x <= 'Z'))
			x = x - 'A' + 'a';
		Medicine * Temp_Med = PHA[x - 97];
		Medicine *N_Med = new Medicine(name, company, pro, exp, price, count);
		if (Temp_Med == NULL)
			PHA[x - 97] = N_Med;
		else

		if (Temp_Med->Get_Rep()->Get_Name() > name)
		{
			N_Med->Next = Temp_Med;
			PHA[x - 97] = N_Med;
		}
		else
		{
			Medicine * Prev = Temp_Med;
			Temp_Med = Temp_Med->Next;
			while ((Temp_Med != NULL) && (Temp_Med->Get_Rep()->Get_Name() < name))
			{
				Prev = Temp_Med;
				Temp_Med = Temp_Med->Next;
			}
			Prev->Next = N_Med;
			N_Med->Next = Temp_Med;
		}
		if (ok)MessageBox::Show("Done");
	}
}

void Pharamacy::Add_Rep(bool ok,string name_med, string name_rep, string company, Date pro, Date exp, int price, int count)
{
	Replacement *Temp_Rep = Search_Rep(name_med, name_rep);
	if (Temp_Rep != NULL)
	{
		if (Temp_Rep->Get_Company() == company)
		{
			Temp_Rep->Set_Count(Temp_Rep->Get_Count() + count);
			if (ok)MessageBox::Show(" increasing the number  succeeded");
		}
		else
		if (ok)MessageBox::Show("Sorry,This Replacement is found but in other combany ");
	}
	else
	{
		Replacement *N_Rep = new Replacement(name_rep, company, pro, exp, price, count);
		Medicine *Temp_Med = Search_Med(name_med);
		if (Temp_Med != NULL)
		{
			Temp_Rep = Temp_Med->Get_Rep()->Down;
			if (Temp_Rep == NULL)
				Temp_Med->Get_Rep()->Down = N_Rep;
			else
			{
				if (Temp_Rep->Get_Name() > name_rep)
				{
					N_Rep->Down = Temp_Rep;
					Temp_Med->Get_Rep()->Down = N_Rep;
				}
				else
				{
					Replacement * Prev = Temp_Rep;
					Temp_Rep = Temp_Rep->Down;
					while ((Temp_Rep != NULL) && (Temp_Rep->Get_Name() < name_rep))
					{
						Prev = Temp_Rep;
						Temp_Rep = Temp_Rep->Down;
					}
					Prev->Down = N_Rep;
					N_Rep->Down = Temp_Rep;
				}
			}
		}
		if (ok)MessageBox::Show("Done");
	}
}



void Pharamacy::Sale_Med(string name, int count)
{
	Medicine * Temp_Med = Search_Med(name);
	if (Temp_Med == NULL)
		MessageBox::Show("Sorry, The Medecine " + (String^) gcnew String(name.c_str()) + " isn't found  ");
	else
	{
		int Count = Temp_Med->Get_Rep()->Get_Count();
		MessageBox::Show((String^) gcnew String(name.c_str()) + " Price : " + Temp_Med->Get_Rep()->Get_Price());
		if (Count < count)
			MessageBox::Show(" We have only " + Count + " of  " + (String^) gcnew String(name.c_str()));
		Temp_Med->Get_Rep()->Set_Count(Count - count);
	}
}

void Pharamacy::Sale_Rep(string name_Med, string name_Rep, int count)
{
	Replacement * Temp_Rep = Search_Rep(name_Med, name_Rep);
	if (Temp_Rep != NULL)
	{
		int Count = Temp_Rep->Get_Count();
		MessageBox::Show((String^) gcnew String(name_Rep.c_str()) + " Price : " + Temp_Rep->Get_Price());
		if (Count < count)
			MessageBox::Show(" We have only " + Count + " of  " + (String^) gcnew String(name_Rep.c_str()));

		Temp_Rep->Set_Count(Count - count);
	}
}


void Pharamacy::Delete_Med(string name)
{
	Medicine * Temp_Med = Search_Med(name);
	if (Temp_Med == NULL)
		MessageBox::Show("Sorry, The Medecine " + (String^) gcnew String(name.c_str())  +" isn't found  ");
	else
	{
		Replacement * Temp_Rep = Temp_Med->Get_Rep()->Down;;
		while (Temp_Rep != NULL)
		{
			Delete_Rep(name, Temp_Rep->Get_Name());
			Temp_Rep = Temp_Med->Get_Rep()->Down;
		}
		int x = name[0];
		if ((x >= 'A') && (x <= 'Z'))
			x = x - 'A' + 'a';
		Medicine *prev_Med = PHA[x - 97];
		if (prev_Med == Temp_Med)
		{
			PHA[x - 97] = Temp_Med->Next;
			delete Temp_Med;
		}
		else
		{
			while (prev_Med->Next != Temp_Med)
				prev_Med = prev_Med->Next;
			prev_Med->Next = Temp_Med->Next;
			delete Temp_Med;
		}
		MessageBox::Show(" The Medecine " + (String^) gcnew String(name.c_str()) + " is found and has been deleted ");
	}
}


void Pharamacy::Delete_Rep(string name_Med, string name_Rep)
{
	Medicine *Temp_Med = Search_Med(name_Med);
	if (Temp_Med == NULL)
		MessageBox::Show("Sorry, The Medecine " + (String^) gcnew String(name_Med.c_str()) + " isn't found  ");
	else
	{
		Replacement * Temp_Rep = Search_Rep(name_Med, name_Rep);
		if (Temp_Rep != NULL)
		{
			if (Temp_Med->Get_Rep()->Down == Temp_Rep)
			{
				Temp_Med->Get_Rep()->Down = Temp_Rep->Down;
				delete Temp_Rep;
			}
			else
			{
				Replacement * Rep_down = Temp_Med->Get_Rep()->Down;
				while (Rep_down->Down != Temp_Rep)
					Rep_down = Rep_down->Down;
				Rep_down->Down = Temp_Rep->Down;
				delete Temp_Rep;
			}
			MessageBox::Show("Has been deleted  ");
		}
	}
}


//
//
//void Pharamacy::Print_Rep(Replacement* Temp_Rep)
//{
//	cout << Temp_Rep->Get_Name() << " ,  Company : " << Temp_Rep->Get_Company() << "  , Pro : ";
//	Temp_Rep->Get_Pro().Print_Date();
//
//	cout << "\n\t Price      : " << Temp_Rep->Get_Price() << " ,  Count : " << Temp_Rep->Get_Count() << "\t  , Exp : ";
//	Temp_Rep->Get_Exp().Print_Date();
//	cout << "\n    ---------------------------------------------------------------------" << endl;
//}
//
//void Pharamacy::Print_Med(string name)
//{
//	Medicine* Temp_Med = Search_Med(name);
//	if (Temp_Med == NULL)
//		cout << " Medication : " << name << " isn't found yet " << endl;
//	else
//	{
//		cout << "\t Medication : ";
//		Print_Rep(Temp_Med->Get_Rep());
//	}
//
//}
//
//void Pharamacy::Print_Rep_Med(string name_Med, string name_Rep)
//{
//	Replacement *Temp_Rep = Search_Rep(name_Med, name_Rep);
//	if (Temp_Rep == NULL)
//		cout << " Replacement : " << name_Rep << " isn't found yet " << endl;
//	else
//	{
//		cout << "\t Replacement: ";
//		Print_Rep(Temp_Rep);
//	}
//}
//
//void Pharamacy::Print_allMed()
//{
//	for (char c = 'a'; c <= 'z'; c++)
//	{
//		Medicine *Temp_Med = PHA[c - 97];
//		while (Temp_Med != NULL)
//		{
//			cout << "\t Medication : ";
//			Print_Rep(Temp_Med->Get_Rep());
//			Temp_Med = Temp_Med->Next;
//		}
//	}
//}
//
//void Pharamacy::Print_allRep_Med(string name_Med)
//{
//	Medicine * Temp_Med = Search_Med(name_Med);
//	if (Temp_Med == NULL)
//		cout << " Medicine " << name_Med << " isn't have any replacment " << endl;
//	else
//	{
//		Replacement *Temp_Rep = Temp_Med->Get_Rep()->Down;
//		cout << " \n\t\tThe Replacments of Medicine " << name_Med << " is :\n\n	";
//		while (Temp_Rep != NULL)
//		{
//			cout << "\t Replacment ";
//			Print_Rep(Temp_Rep);
//			Temp_Rep = Temp_Rep->Down;
//		}
//	}
//}
//
//
//
//
//
//
//
//
//
//void Pharamacy::print_all_expired_med()
//{
//	time_t t = time(0);
//	const struct tm * now = localtime(&t);
//	Date d;
//	d.Set_Day(now->tm_mday);
//	d.Set_Month(now->tm_mon);
//	d.Set_Year(now->tm_year);
//	cout << "\n\t\t\t The Expired Medicine are: \n\n";
//	cout << "\t\t----------------------------------------------------\n";
//	for (char c = 'a'; c <= 'z'; c++)
//	{
//
//		Medicine *Temp_Med = PHA[c - 97];
//		while (Temp_Med != NULL)
//		{
//			if (Temp_Med->Get_Rep()->Get_Exp().Copmarer(d) == 1)
//			{
//				cout << "\t Medication : ";
//				Print_Rep(Temp_Med->Get_Rep());
//			}
//
//			Replacement *Temp_Rep = Temp_Med->Get_Rep()->Down;
//			while (Temp_Rep != NULL)
//			{
//				if (Temp_Rep->Get_Exp().Copmarer(d) == 1)
//				{
//					cout << "\t\t\t\tMedicine " << Temp_Med->Get_Rep()->Get_Name() << endl;
//					cout << "\t Replacment ";
//					Print_Rep(Temp_Rep);
//
//
//				}
//				Temp_Rep = Temp_Rep->Down;
//			}
//
//
//			Temp_Med = Temp_Med->Next;
//		}
//	}
//
//
//
//}
//
////void Pharamacy::print_Pharmacy()
////{
////	for (char c = 'a'; c <= 'z'; c++)
////
////	{
////
////		Medicine *Temp_Med = PHA[c - 97];
////		while (Temp_Med != NULL)
////		{
////			cout << "\t Medication : ";
////			Print_Rep(Temp_Med->Get_Rep());
////			Replacement *Temp_Rep = Temp_Med->Get_Rep()->Down;
////			if (Temp_Rep != NULL)
////				cout << "\t\t\t\tMedicine " << Temp_Med->Get_Rep()->Get_Name() << endl;
////			while (Temp_Rep != NULL)
////			{
////				cout << "\t Replacment ";
////				Print_Rep(Temp_Rep);
////				Temp_Rep = Temp_Rep->Down;
////				cout << "    -------------------------------------------------------------------\n";
////			}
////
////			Temp_Med = Temp_Med->Next;
////		}
////	}
////
////}
//
//void Pharamacy::Print_Med_and_Reps(string name)
//{
//	Print_Med(name);
//	Print_allRep_Med(name);
//
//}
//
//void Pharamacy::print_Company_Med(string name)
//{
//	cout << "\n\t\t\t The Medicines of this Company  " << name << ":\n\n";
//	cout << "\t\t----------------------------------------------------\n";
//	for (char c = 'a'; c <= 'z'; c++)
//	{
//
//		Medicine *Temp_Med = PHA[c - 97];
//		while (Temp_Med != NULL)
//		{
//			if (Temp_Med->Get_Rep()->Get_Company() == name)
//			{
//				cout << "\t Medication : ";
//				Print_Rep(Temp_Med->Get_Rep());
//			}
//
//			Replacement *Temp_Rep = Temp_Med->Get_Rep()->Down;
//			while (Temp_Rep != NULL)
//			{
//				if (Temp_Rep->Get_Company() == name)
//				{
//					cout << "\t\t\t\tMedicine " << Temp_Med->Get_Rep()->Get_Name() << endl;
//					cout << "\t Replacment ";
//					Print_Rep(Temp_Rep);
//
//
//				}
//				Temp_Rep = Temp_Rep->Down;
//			}
//
//
//			Temp_Med = Temp_Med->Next;
//		}
//	}
//
//}
