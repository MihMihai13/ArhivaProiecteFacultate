#include <iostream>
#include "Angajat.h"

using namespace std;

Angajat::Angajat(){
}

Angajat::Angajat(string num, int v, int sal, string fir):Persoana(num, v){
	salariu = sal;
	nume_firma = fir;
}

Angajat::Angajat(const Angajat &a):Persoana(a){
	salariu = a.salariu;
	nume_firma = a.nume_firma;
}

void Angajat::afisare(){
	Persoana::afisare();
	cout << "Salariu: " << salariu << endl;
	cout << "Nume firma: " << nume_firma << endl;
}

int Angajat::get_salariu(){
	return salariu;
}
