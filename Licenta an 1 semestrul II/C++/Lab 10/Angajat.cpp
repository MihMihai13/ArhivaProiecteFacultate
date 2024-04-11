#include "Angajat.h"
#include <iostream>

using namespace std;

Angajat::Angajat(int id, string f, int sal){
	id_angajat = id;
	firma = f;
	salariu = sal;
}

int Angajat::venit(){
	return salariu;
}

void Angajat::afisare(){
	cout << "id angajat: " << id_angajat << "\nfirma: " << firma << "\nsalariu: " << salariu;
}
