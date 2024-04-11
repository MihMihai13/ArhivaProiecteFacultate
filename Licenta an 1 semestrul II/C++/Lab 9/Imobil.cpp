#include "Imobil.h"
#include <iostream>
#include <string.h>

using namespace std;

Imobil::Imobil(){
	venit_pe_an = 0;
	info_tip_intretinere = NULL;
}

Imobil::Imobil(char *t, double val, double venit, char *info):Proprietate(t, val){
	venit_pe_an = venit;
	info_tip_intretinere = new char[strlen(info)+1];
	strcpy(info_tip_intretinere, info);
}

Imobil::Imobil(const Imobil &i):Proprietate(i){
	venit_pe_an = i.venit_pe_an;
	info_tip_intretinere = new char[strlen(i.info_tip_intretinere)+1];
	strcpy(info_tip_intretinere, i.info_tip_intretinere);
}

Imobil & Imobil::operator=(const Imobil &i){
	Proprietate::operator=(i);
	venit_pe_an = i.venit_pe_an;
	info_tip_intretinere = new char[strlen(i.info_tip_intretinere)+1];
	strcpy(info_tip_intretinere, i.info_tip_intretinere);
}

Imobil::~Imobil(){
	if(info_tip_intretinere != NULL)
		delete [] info_tip_intretinere;
}

Imobil::afisare(){
	Proprietate::afisare();
	cout << "Venit pe an: " << venit_pe_an << endl;
	cout << "Info tip intretinere: " << info_tip_intretinere << endl;
}

double Imobil::venit_luna(){
	return venit_pe_an/12;
}
