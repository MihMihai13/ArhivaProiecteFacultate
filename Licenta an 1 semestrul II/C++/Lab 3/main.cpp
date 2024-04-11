#include <iostream>
#include "fractie.h"
using namespace std;

int main() {
	fractie f1, f2, aux;
	int x, y;
	cout << "Numitorul primei fractii: ";
	cin >> x;
	cout << "Numaratorul primei fractii: ";
	cin >> y;
	f1.setData(x, y);
	cout << "Numitorul celei de a 2 a fractii: ";
	cin >> x;
	cout << "Numaratorul celei de a 2 a fractii: ";
	cin >> y;
	f2.setData(x, y);

	aux = f1+f2;
	cout << "\nf1+f2 = ";
	aux.afisare();
	
	aux = f1-f2;
	cout << "\nf1-f2 = ";
	aux.afisare();
	
	aux = f1*f2;
	cout << "\nf1*f2 = ";
	aux.afisare();
	
	aux = f1/f2;
	cout << "\nf1/f2 = ";
	aux.afisare();
	
	if(f1 < f2) {
		cout << "\nf1 < f2";
	}
	
	return 0;
}
