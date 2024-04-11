#include<iostream>
#include<stdlib.h>
using namespace std;

bool multime(int* v, int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(v[i] == v[j])
				return 0;
		}
	}
	return 1;
}

void elim(int* v, int &n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(v[i] == v[j]) {
				for(int x = j; x < n; x++)
					v[x] = v[x+1];
				n--;
			}
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
	int n, *v = NULL;
	cout << "Dati n: ";
	cin >> n;
	v = (int*) malloc(n*sizeof(int));
	cout << "Elementele sirului:\n";
	for(int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	if(multime(v, n) == true) {
		cout << "Sirul dat este multime";
	} else {
		elim(v, n);
		cout << "Multimea rezultata:\n";
		for(int i = 0; i < n; i++)
			cout << v[i] << " ";
	}
	return 0;
}
