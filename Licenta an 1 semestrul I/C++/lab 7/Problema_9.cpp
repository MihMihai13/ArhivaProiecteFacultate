#include<iostream>
#include<stdlib.h>
using namespace std;

void citire(int* v, int n) {
	cout << "0: ";
	cin >> v[0];
	for(int i = 1; i < n; i++) {
		do {
			cout << i << ": ";
			cin >> v[i];
		} while(v[i] <= v[i-1]);
	}
}

int* comb(int* v1, int n1, int* v2, int n2) {
	int i = 0, j = 0, x = 0, *v3 = NULL;
	v3 = (int*) malloc((n1+n2)*sizeof(int));
	while (i < n1 && j < n2) {
		if(v1[i] < v2[j]) {
			v3[x] = v1[i];
			i++;
		}
		else {
			v3[x] = v2[j];
			j++;
		}
		x++;
	}
	while(i < n1) {
		v3[x] = v1[i];
		i++;
		x++;
	}
	while(j < n2) {
		v3[x] = v2[j];
		j++;
		x++;
	}
	return v3;
}

int main() {
	int n1, n2, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	cout << "Dati nr elemente sir 1: ";
	cin >> n1;
	v1 = (int*) malloc(n1*sizeof(int));
	cout << "Elemente sir 1:\n";
	citire(v1, n1);
	cout << "Dati nr elemente sir 2: ";
	cin >> n2;
	v2 = (int*) malloc(n2*sizeof(int));
	cout << "Elemente sir 2:\n";
	citire(v2, n2);
	v3 = comb(v1, n1, v2, n2);
	cout << "v3: ";
	for(int i = 0; i < (n1+n2); i++)
		cout << v3[i] << " ";
	return 0;
}
