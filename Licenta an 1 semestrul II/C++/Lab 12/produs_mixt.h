#include "modul_hardware.h"
#include "produs_software.h"

class produs_mixt: public modul_hardware, virtual public Produs{
	produs_software ps;
    vector<string> functionalitati;
    int nr_functionalitati;
    //pret = pret ps+pret MH
public:
	produs_mixt(modul_hardware&, produs_software&, vector<string>, int);
};

