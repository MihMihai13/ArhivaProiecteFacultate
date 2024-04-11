#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

//creez o structura in care salvez coordonatele unui punct
struct Punct {
	int x;
	int y;
};
//functia citeste coordonatele unui punct
void citire (struct Punct &p) {
	cout << "x: ";
	cin >> p.x;
	cout << "y: ";
	cin >> p.y;
}
//functia afiseaza coordonatele unui punct
void afisare (struct Punct &p) {
	cout << "(" << p.x << ", " << p.y << ")";
}
//functia calculeza distanta dintre 2 puncte
int distanta (struct Punct &p1, struct Punct &p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main () {
	cout << "Dati n: ";
	int n;
	cin >> n;
	struct Punct *v = (Punct*) malloc(n*sizeof(Punct)); //aloc dinamic memorie pentru un vector cu elemente de tip Punct
	//citesc elementele vectorului
	for (int i = 0; i < n; i++) {
		cout << "P" << i << ":\n";
		citire (v[i]);
	}
	//calculez distanta dintre 2 puncte consecutive
	for (int i = 0; i < n-1; i++) {
		cout << "\nDistanta dintre P" << i << " si P" << i+1 << ": ";
		cout << distanta (v[i], v[i+1]);
	}
	cout << endl;
	//afisez componenta vectorului
	for (int i = 0; i < n; i++) {
		afisare (v[i]);
		cout << " ";
	}
	return 0;
}
