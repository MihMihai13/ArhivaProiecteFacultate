#include <iostream>
using namespace std;

int main() {
	int n;
	char x;
	cout << "Dati n: ";
	cin >> n;
	cout << "Dati comanda: ";
	cin >> x;
	switch(x) {
		case 's': {
			//secventa calculeaza suma primelor n numere naturale si apoi o afiseaza
			int s = 0;
			for(int i = 1; i <= n; i++)
				s+=i;
			cout << "Suma primelor " << n << " numere naturale este " << s;
			break;
		}
		case 'p': {
			//secventa calculeaza produsul primelor n numere naturale  si apoi o afiseaza
			int p = 1;
			for(int i = 1; i <= n; i++)
				p*=i;
			cout << "Produsul primelor " << n << " numere naturale este " << p;
			break;
		}
		case 'x': {
			//secventa verifica paritatea numarlui n si apoi o afiseaza
			int s = 0;
			if(n%2 == 0)
				cout << n << " este par";
			else
				cout << n << " este impar";
			break;
		}
		default: {
			cout << "aceasta nu e o comanda valida";
			break;
		}
	}
	return 0;
}
