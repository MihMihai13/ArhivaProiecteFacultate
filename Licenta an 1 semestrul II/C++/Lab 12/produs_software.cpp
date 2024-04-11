#include <iostream>
#include <fstream>
#include "produs_software.h"

using namespace std;

produs_software::produs_software(int p) {
	pret = p;
}

produs_software::produs_software(produs_software &s){
	pret = s.pret;
}

produs_software::produs_software(){
	pret = 0;
}

void produs_software::afis_fisier() {
	fstream f("output", ios::app);
	f << "pret: " << pret << endl;
}

int produs_software::getpret() {
	return pret;
}
