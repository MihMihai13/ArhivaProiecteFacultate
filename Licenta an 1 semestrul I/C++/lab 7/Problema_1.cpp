#include<iostream>
using namespace std;

//functia calculeaza recursiv n!
long long int prod(int n) {
	if (n > 1)
		return n*prod(n-1);
	else
		return 1;
}

int main() {
	int n;
	cout << "Dati n: ";
	cin >> n;
	//apelez functia prod(n) si afisez rezultatul
	cout << "Produsul primelor " << n << " numere este: " << prod(n);
	return 0;
}
