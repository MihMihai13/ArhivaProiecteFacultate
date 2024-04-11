#include<string>
#include"Garantie.h"
using namespace std;

class Produs{
   int pret;
   string marca;
   int nr_proprietati;
   string *proprietati;
   Garantie g;
public:
	Produs();
	Produs(Produs &);
	Produs(int p, string m, int nrp, string *prop, Garantie gar);
	Produs & operator=(const Produs &);
	friend ostream& operator<<(ostream &,const Produs &);
}; 
