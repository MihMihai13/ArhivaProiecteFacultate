#include "Proprietate.h"

class Teren : public Proprietate{
    double venit_pe_luna_m2;
    double suprafata;
public:
	Teren(char*, double, double, double);
	afisare();
	double venit_luna();
};
