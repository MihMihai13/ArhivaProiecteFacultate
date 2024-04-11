#include<iostream>
#include"Produs.h"
int main() {
	string prop[3];
	prop[0] = "rosu";
	prop[1] = "ignifug";
	prop[2] = "patrat";
	Garantie g(5, "SerVice");
	Produs x(45, "LG", 3, prop, g);
	Produs y(x);
	Produs z;
	z = y;
	cout << z;
	
	cout << "\n\nDati dimensiune vector: ";
	int n;
	cin >> n;
	Produs inv[n];
	for(int i = 0; i < n; i++) {
		cout << "\n\nPret: ";
		int pret;
		cin >> pret;
		cout << "Marca: ";
		string marca;
		cin >> marca;
		cout << "Nr. proprietati: ";
		int nr_prop;
		cin >> nr_prop;
		string prop[nr_prop];
		for(int j = 0; j < nr_prop; j++) {
			cout << "Proprietatea " << j << ": ";
			cin >> prop[j];
		}
		cout << "Durata garantie: ";
		int x;
		cin >> x;
		cout << "Service: ";
		string y;
		cin >> y;
		Garantie g(x, y);
		Produs p(pret, marca, nr_prop, prop, g);
		inv[i] = p;
	}
	Persona aux;
	for(int i = 0; i < n-1; i++) {
		for(int j = i; j < n; j++) {
			if(p[i].pret > p[j].pret) {
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
		cout << inv[i] << endl;
	}
	return 0;
}
