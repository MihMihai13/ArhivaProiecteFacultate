#include <iostream>
#include <vector>
#include "produs_mixt.h"

produs_mixt::produs_mixt(modul_hardware &h, produs_software &s, vector<string> func, int nr) : modul_hardware(h) {
	ps = s;
	functionalitati = func;
	nr_functionalitati = nr;
}
