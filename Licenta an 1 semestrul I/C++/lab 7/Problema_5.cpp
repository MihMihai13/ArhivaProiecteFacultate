#include<iostream>
#include<stdlib.h>
using namespace std;

void elim(int* v, int x, int &n) {
	for(int i = 0; i < n; i++) {
		if(v[i] == x) {
			for(int j = i; j < n; j++) {
				v[j] = v[j+1];
			}
			i--;
			n--;
		}
	}
	int* aux = NULL;
	aux = (int*)realloc(v, n*sizeof(int));
	if (aux != NULL)
		v = aux;
	else
		cout << "Eroare";
}

int main() {
	int n;
	cout << "Dati lungimea sirului: ";
	cin >> n;
	int* v = NULL;
	v = (int*) malloc(n*sizeof(int));
	for(int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	cout << "Dati elementul de eliminat: ";
	int x;
	cin >> x;
	elim(v, x, n);
	cout << "Rezultat: ";
	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
