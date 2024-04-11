#include <iostream>
#include <fstream>
#include <vector>
#include "modul_hardware.h"

using namespace std;

modul_hardware::modul_hardware(vector<Piesa> p, int nr, int pman, int ore) {
	vec = p;
	nr_piese = nr;
	pm = pman;
	nr_ore = ore;
}

modul_hardware::modul_hardware(modul_hardware &h) {
	vec = h.vec;
	nr_piese = h.nr_piese;
	pm = h.pm;
	nr_ore = h.nr_ore;
}

int modul_hardware::getpret() {
	int s = 0;
	vector<Piesa>::iterator it;
	for(it = vec.begin(); it != vec.end(); it++) {
		s += it->getpret();
	}
}


void modul_hardware::afis_fisier() {
	fstream f("output", ios::app);
	f << "piese:\n";
	vector<Piesa>::iterator it;
	for(it = vec.begin(); it != vec.end(); it++) {
		f << "\t\tcod: " << it->getcod() << endl;
		f << "\t\tpret: " << it->getpret() << endl << endl;
	}
}
