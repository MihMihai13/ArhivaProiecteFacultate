#include <iostream>
using namespace std;

//creez o structura in care pot salva ora exacta
struct Ora_exacta {
	int ora;
	int min;
	int sec;
};
//functia citeste ora exacta si verifica daca este valida
void citire(Ora_exacta &t) {
	do {
		cout << "Ora: ";
		cin >> t.ora;
	} while (t.ora >= 24 || t.ora < 0);
	do {
		cout << "Minutul: ";
		cin >> t.min;
	} while (t.min >= 60 || t.min < 0);
	do {
		cout << "Secunda: ";
		cin >> t.sec;
	} while (t.sec >= 60 || t.sec < 0);
}
//functia afiseza ora exacta
void afisare (Ora_exacta &t) {
	cout << t.ora << ":" << t.min << ":" << t.sec;
}
//functia calculeaza timpul scurs dintre 2 momente de timp
void diferenta (Ora_exacta &t1, Ora_exacta &t2, Ora_exacta &dt) {
	int x = (t2.ora - t1.ora) * 3600 + (t2.min - t1.min) * 60 + (t2.sec - t1.sec);
	if (x < 0)
		x *= (-1);
	dt.ora = x/3600;
	x %= 3600;
	dt.min = x/60;
	x %= 60;
	dt.sec = x;
}

int main() {
	Ora_exacta t1, t2, dt; //declar variabile de tip Ora_exacta
	cout << "Dati t1: ";
	citire (t1);
	cout << "Dati t2: ";
	citire (t2);
	//afisez timpul scrus intre cele 2 momente
	cout << "Timpul scurs: ";
	diferenta(t1, t2, dt);
	afisare(dt);
	return 0;
}
