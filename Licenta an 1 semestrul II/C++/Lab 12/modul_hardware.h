#include <vector>
#include "piesa.h"
#include "produs.h"
#pragma once

using namespace std;

class modul_hardware : virtual public Produs {
protected:
	vector<Piesa> vec;	//vector piese
	int nr_piese;		//nr piese din vec
	int pm;				//pret manopera
	int nr_ore;			//ore dezvoltare
						// pret=suma preturilor pieselor+pm*nr_ore
public:
	modul_hardware(modul_hardware&);
	modul_hardware(vector<Piesa>, int, int, int);
	int getpret();
	void afis_fisier();
};
