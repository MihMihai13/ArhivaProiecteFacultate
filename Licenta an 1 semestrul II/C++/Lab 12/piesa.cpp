#include <iostream>
#include <string.h>
#include <vector>
#include "piesa.h"

Piesa::Piesa(char* c, int p) {
	strcpy(cod, c);
	pret = p;
}

int Piesa::getpret() {
	return pret;
}

char* Piesa::getcod(){
	return cod;
}
