#include"Garantie.h"

Garantie::Garantie(){
	nr_luni = 0;
	service = "fara garantie";
}

Garantie::Garantie(int n, string s) {
	nr_luni = n;
	service = s;
}

Garantie::Garantie(Garantie &g) {
	nr_luni = g.nr_luni;
	service = g.service;
}

Garantie & Garantie::operator=(const Garantie &g){
	nr_luni = g.nr_luni;
	service = g.service;
	return *this;
}

ostream& operator<<(ostream &dev,const Garantie &g) {
	dev << "\nDurata garantie: " << g.nr_luni << " luni" << endl;
	dev << "Service: " << g.service;
}
