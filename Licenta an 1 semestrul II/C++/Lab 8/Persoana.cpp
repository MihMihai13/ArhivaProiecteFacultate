#include <iostream>
#include "Persoana.h"

Persoana::Persoana(){
	nume = " ";
	varsta = -1;
}

Persoana::Persoana(string n, int v){
	nume = n;
	varsta = v;
}

void Persoana::afisare(){
	cout << "Nume: " << nume << endl;
	cout << "Varsta: " << varsta << endl;
}
