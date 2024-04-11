#include "Proprietate.h"

class Imobil : public Proprietate{
    double venit_pe_an;
    char *info_tip_intretinere;
public:
	Imobil();
	Imobil(char*, double, double, char*);
	Imobil(const Imobil&);
	Imobil & operator=(const Imobil&);
	~Imobil();
	afisare();
	double venit_luna();
};

