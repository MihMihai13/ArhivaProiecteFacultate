#include "Proprietate.h"
#include <iostream>
#include <string.h>

using namespace std;

Proprietate::Proprietate(){
	tip = NULL;
	valoare = 0;
}

Proprietate::Proprietate(char* t, double v){
	tip = new char[strlen(t)+1];
	strcpy(tip, t);
	valoare = v;
}

Proprietate::Proprietate(const Proprietate &p){
	tip = new char[strlen(p.tip)+1];
	strcpy(tip, p.tip);
	valoare = p.valoare;
}

Proprietate & Proprietate::operator=(const Proprietate &p){
	tip = new char[strlen(p.tip)+1];
	strcpy(tip, p.tip);
	valoare = p.valoare;
	return *this;
}

Proprietate::~Proprietate(){
	if(tip != NULL)
		delete [] tip;
}

Proprietate::afisare(){
	cout << "\nTip: " << tip << endl;
	cout << "Valoare: " << valoare << endl;
}

double Proprietate::venit_luna(){
	return 0;
}

double Proprietate::get_valoare(){
	return valoare;
}
