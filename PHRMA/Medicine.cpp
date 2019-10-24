#include "Medicine.h"
#include "Replacement.h"
static int C = 1;
Medicine::Medicine(void)
{
	Rep = new Replacement();
    Rep->Set_Name("Medecine");
	Next = NULL;
	C++;
}


Medicine::Medicine(string name, string company, Date pro, Date exp, int price, int count)
{
	Rep = new Replacement(name, company, pro, exp, price, count);

	Next = NULL;

}
Replacement*& Medicine::Get_Rep()			{ return Rep; }
