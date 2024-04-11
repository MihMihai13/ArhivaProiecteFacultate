#include <iostream>
#include <cmath>
using namespace std;

//creez o structura in care salvez numere complexe
struct Nr_complex {
	double parte_reala;
	double parte_imaginara;
};

//functia citeste un numar complex
void citire(struct Nr_complex &nr) {
	cout << "parte reala: ";
	cin >> nr.parte_reala;
	cout << "parte imaginara: ";
	cin>> nr.parte_imaginara;
}
//functia calculeaza suma a 2 numere complexe
void adunare (struct Nr_complex &nr1, struct Nr_complex &nr2, struct Nr_complex &rez) {
	rez.parte_reala = nr1.parte_reala + nr2.parte_reala;
	rez.parte_imaginara = nr1.parte_imaginara + nr2.parte_imaginara;
}
//functia calculeaza diferenta a 2 numere complexe
void scadere (struct Nr_complex &nr1, struct Nr_complex &nr2, struct Nr_complex &rez) {
	rez.parte_reala = nr1.parte_reala - nr2.parte_reala;
	rez.parte_imaginara = nr1.parte_imaginara - nr2.parte_imaginara;
}
//functia calculeaza produsul a 2 numere complexe
void inmultire (struct Nr_complex &nr1, struct Nr_complex &nr2, struct Nr_complex &rez) {
	rez.parte_reala = nr1.parte_reala * nr2.parte_reala - nr1.parte_imaginara * nr2.parte_imaginara;
	rez.parte_imaginara = nr1.parte_imaginara * nr2.parte_reala + nr1.parte_reala * nr2.parte_imaginara;
}
//functia calculeza modulul unui numar complex
int modul (struct Nr_complex &nr) {
	return sqrt(pow(nr.parte_reala, 2) + pow(nr.parte_imaginara, 2));
}

int main () {
	Nr_complex nr1, nr2, rez; //declar variabile de tip Nr_complex
	//citesc 2 numere de tip Nr_complex
	cout << "nr1:\n";
	citire(nr1);
	cout << "nr2:\n";
	citire(nr2);
	//adun cele 2 numere complexe
	adunare(nr1, nr2, rez);
	cout << "\nAdunare: " << rez.parte_reala << " " << rez.parte_imaginara << "i";
	//scad cele 2 numere complexe
	scadere(nr1, nr2, rez);
	cout << "\nScadere: " << rez.parte_reala << " " << rez.parte_imaginara << "i";
	//inmultesc cele 2 numere complexe
	inmultire(nr1, nr2, rez);
	cout << "\nInmultire: " << rez.parte_reala << " " << rez.parte_imaginara << "i";
	//calculez modulul unui numar complex
	int m = modul(nr1);
	cout << "\nModul: " << m;
	return 0;
}
