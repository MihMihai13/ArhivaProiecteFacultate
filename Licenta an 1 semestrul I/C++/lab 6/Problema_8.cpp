#include<iostream>
using namespace std;

void verificare(int a[10][10], int l1, int l2) {
	
}

//citesc componentele vectorului
void citire(int a[][10], int l, int c) {
	for(int i = 0; i < l; i++)
		for(int j = 0; j < c; j++) {
		cout << "a[" << i << "][" << j << "]=";
		cin >> a[i][j];
	}
}

//afisez componentele vectorului
void afisare(int a[][10], int l, int c) {
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < c; j++)
			cout << a[i] << " ";
		cout << endl;
	}
}

int main() {
	int a[10][10], l, c;
	cout << "Dati l: ";
	cin >> l;
	cout << "Dati c: ";
	cin >> c;
	citire(a, l, c);
	afisare(a, l, c);
}
