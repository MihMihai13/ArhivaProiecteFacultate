#include <iostream>
using namespace std;

struct numar {
	int v;
	numar *urm;
};

numar *adaugare_stiva(numar* cap, int a) {
	numar *d = new numar;
	d->v = a;
	d->urm = cap;
	return d;
}

numar *stergere_stiva(numar *cap) {
	cap = cap->urm;
	return cap;
}


numar *conversie_baza(int x, int baza) {
	if(baza < 2 or baza > 16) {
		cout << "Baza trebuie sa fie in intervalul [2, 16]";
		return NULL;
	}
	numar *s;
	s = new numar;
	s->v = x%baza;
	x /= baza;
	s->urm = NULL;
	while(x != 0) {
		s = adaugare_stiva(s, x%baza);
		x /= baza;
	}
	return s;
}

void afisare(numar *cap) {
	char c;
	while(cap != NULL) {
		if(cap->v < 10) {
			cout << cap->v;
		} else {
			cout << char(65+cap->v-10);
		}
		cap = stergere_stiva(cap);
	}
}


int main() {
	numar *n;
	int x, b;
	int op = 1;
	do {
		cout << "Dati nr.: ";
		cin >> x;
		cout << "Dati baza: ";
		cin >> b;
		n = conversie_baza(x, b);
		afisare(n);
		do {
			cout << endl << "Convertiti alt numar? [0/1]: ";
			cin >> op;
			if(op == 0 or op == 1)
				break;
			cout << "Optiune invalida!";
		} while(1);
	} while(op);
	return 0;
}
