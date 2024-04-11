#include <iostream>
using namespace std;

int main() {
	cout << "Dati cele 10 numere: ";
	int suma = 0, produs = 1, pare = 0, impare = 0;
	//secventa numara cate numere pare/impare sunt introduse si calculeaza suma celor pare respectiv produsul celor impare
	for(int i = 1, x; i <= 10; i++){
		cin >> x;
		if(x%2 == 0) {
			pare++;
			suma += x;
		}
		else {
			impare++;
			produs *= x;
		}
	}
	//afiseaza cele 4 valori calculate
	cout << "Suma numerelor pare: " << suma << "\nProdusul numerelor impare: " << produs << "\nNumere pare: " << pare << "\nNumere impare: " << impare;
	return 0;
}
