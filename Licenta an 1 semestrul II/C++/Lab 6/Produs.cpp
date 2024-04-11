#include"Produs.h"

Produs::Produs() {
	pret = 0;
	marca = " ";
	nr_proprietati = 0;
	proprietati = NULL;
}

Produs::Produs(int p, string m, int nrp, string *prop, Garantie gar) {
	pret = p;
	marca = m;
	nr_proprietati = nrp;
	proprietati = prop;
	g = gar;
}

Produs::Produs(Produs &p) {
	pret = p.pret;
	marca = p.marca;
	nr_proprietati = p.nr_proprietati;
	proprietati = p.proprietati;
	g = p.g;
}

Produs & Produs::operator=(const Produs &p) {
	pret = p.pret;
	marca = p.marca;
	nr_proprietati = p.nr_proprietati;
	proprietati = new string[nr_proprietati];
	for(int i = 0; i < nr_proprietati; i++) {
		proprietati[i] = p.proprietati[i];
	}
	g = p.g;
	return *this;
}

ostream& operator<<(ostream &dev,const Produs &p) {
	dev << "Pret: " << p.pret << endl;
	dev << "Marca: " << p.marca << endl;
	dev << "Proprietati: ";
	for(int i = 0; i < p.nr_proprietati; i++) {
		dev << p.proprietati[i] << " ";
	}
	dev << p.g;
}

