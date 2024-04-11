#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Dati n: ";
	cin >> n;
	float m = 0;

/*	
	//secventa calculeaza suma valorilor apoi o imparte la nr de elemente pentru a afla media
	for(int i = 1, x; i <= n; cout << "Dati valoarea nr. " << i <<": ", cin >> x, m+=x, i++) {}
	m/=n;
*/

/*
	//secventa calculeaza suma valorilor apoi o imparte la nr de elemente pentru a afla media
	int i = 1, x;
	while(i <= n){
		cout << "Dati valoarea nr. " << i <<": ";
		cin >> x;
		m+=x;
		i++;
	}
	m/=n;
*/

	//secventa calculeaza suma valorilor apoi o imparte la nr de elemente pentru a afla media
	int i = 1, x;
	do {
		cout << "Dati valoarea nr. " << i <<": ";
		cin >> x;
		m+=x;
		i++;
	} while(i <= n);
	m/=n;
		
	cout << "Media: " << m;
	return 0;
}
