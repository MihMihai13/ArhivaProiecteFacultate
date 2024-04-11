#include<iostream>
using namespace std;

void incrementare(int& a, int& b, int& c) {
	//incrementez valorile cu 1, 2 respectiv 5
	a+=1;
	b+=2;
	c+=5;
}

int main () {
	int a, b, c;
	//citesc valoare lui a
	cout << "Dati a: ";
	cin >> a;
	//citesc valoare lui b
	cout << "Dati b: ";
	cin >> b;
	//citesc valoare lui c
	cout << "Dati c: ";
	cin >> c;
	//apelez functia incrementare
	incrementare(a, b, c);
	//afisez rezultatul incrementarii
	cout << "a=" << a << " b=" << b << " c=" << c;
	return 0;
}
