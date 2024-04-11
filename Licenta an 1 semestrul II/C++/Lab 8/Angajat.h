#include "Persoana.h"

class Angajat: public Persoana{
    int salariu;
    string nume_firma;
public:
	Angajat();
	Angajat(string, int, int, string);
	Angajat(const Angajat &);
	void afisare();
	int get_salariu();
};
