#include "Teren.h"
#include <iostream>

using namespace std;

Teren::Teren(char *t, double val, double venit, double supraf):Proprietate(t, val){
	venit_pe_luna_m2 = venit;
	suprafata = supraf;
}

Teren::afisare(){
	Proprietate::afisare();
	cout << "Venit pe luna pe m2: " << venit_pe_luna_m2 << endl;
	cout << "Suprafata: " << suprafata << endl;
}

double Teren::venit_luna(){
	return venit_pe_luna_m2*suprafata;
}
