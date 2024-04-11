#include <iostream>
#include "Angajat.h"
#include "Student.h"
#include "Student_Angajat.h"

int main() {
	Persoana **v = new Persoana*[3];
	int note1[4] = {8, 8, 8, 9}; //media = 8.25
	v[0] = new Student(420, "Facultate 1", 4, note1);
	v[1] = new Angajat(690, "Firma 1", 6000);
	int note2[4] = {10, 9, 8, 7}; // media = 8.50
	v[2] = new Student_Angajat(125, "Facultate 2", 4, note2, 521, "Firma 2", 3000);
	
	for(int i = 0; i < 2; i++){
		for(int j = 1; j < 3; j++){
			if(v[i]->venit() > v[j]->venit()){
				Persoana *aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	for(int i = 0; i < 3; i++){
		v[i]->afisare();
		cout << "\t\tvenit: " << v[i]->venit();
		cout << "\n\n";
	}
	
	return 0;
}
