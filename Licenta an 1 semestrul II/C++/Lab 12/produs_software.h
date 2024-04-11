#include "produs.h"
#pragma once

class produs_software : virtual public Produs {
protected:
	int pret;
public:
	produs_software();
	produs_software(produs_software&);
	produs_software(int);
	int getpret();
	void afis_fisier();
};
