#include<iostream>
#include<stdlib.h>
using namespace std;

//functia aloca memorie pentru o matrice de dimensiuni l si c
int** aloc(int l, int c) {
	int** matr = NULL;
	matr = (int**) calloc(l, sizeof(int*)); //aloc un spatiu de dimensiune l*sizeof(int*) pentru a salva locatiile fiecarei lini
	for (int i=0;i<l;i++)
		matr[i] = (int*) calloc(c, sizeof(int)); //aloc un spatiu de dimensiune c*sizeof(int*) in memoria pentru fiecare rand
	return matr;
}

//funtia citeste o matrice de dimensiuni l si c
void citire(int** matr, int l, int c) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			cin >> matr[i][j];
		}
	}
}

//functia afiseaza o matrice de dimensiuni l si c
void afisare(int** matr, int l, int c) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
}

//functia aduna 2 matrice
int** adunare(int** m1, int l1, int c1, int** m2, int l2, int c2) {
	//verific daca adunarea este posibila
	if(l1 == l2 && c1 == c2) {
		int** sum = NULL;
		sum = aloc(l1, c1);
		for (int i = 0; i < l1; i++) {
			for (int j = 0; j < c1; j++) {
				sum[i][j] = m1[i][j] + m2[i][j];
			}
		}
		return sum;
	} else {
		cout << "\nAdunarea matricelor nu este posibila";
		return NULL;
	}
}

//functia inmulteste 2 matrice
int** inmultire(int** m1, int l1, int c1, int** m2, int l2, int c2) {
	//verific daca este posibila inmultirea
	if (c1 == l2) {
		int** p = NULL;
		p = aloc(l2, c1);
		for(int i = 0; i < l1; i++) {
			for(int j = 0; j < c2; j++) {
				for(int x = 0; x < c1; x++) {
					p[i][j]+=m1[i][x]*m2[x][j];
				}
			}
		}
		return p;
	} else {
		cout << "\nMatricele nu pot fi inmultite";
		return NULL;
	}
}

//functia sorteaza un vector
void sortare (int* v, int n) {
	while(n>=0) {
		for(int i = 0; i < n-1; i++) {
			if(v[i] > v[i+1]) {
				int aux = v[i+1];
				v[i+1] = v[i];
				v[i] = aux;
			}
		}
		n--;
	}
}

int main() {
	int **m1 = NULL, **m2 = NULL, l1 ,c1, l2, c2;
	cout << "Dati dimensiunile M1:\nNr. lini: ";
	cin >> l1;
	cout << "Nr. coloane: ";
	cin >> c1;
	m1 = aloc(l1, c1);
	cout << "Dati elementele lui M1\n";
	citire(m1, l1, c1);
	
	cout << "Dati dimensiunile M2:\nNr. lini: ";
	cin >> l2;
	cout << "Nr. coloane: ";
	cin >> c2;
	m2 = aloc(l2, c2);
	cout << "Dati elementele lui M1\n";
	citire (m2, l2, c2);
	//testez functiile implementate
	cout << "\nM1:\n";
	afisare(m1, l1, c1);
	cout << "\nM2:\n";
	afisare(m2, l2, c2);
	
	int** rez = NULL;
	rez = adunare(m1, l1, c1, m2, l2, c2);
	if(rez != NULL) {
		cout << "\nAdunare:\n";
		afisare(rez, l1, c1);
	}
	rez = inmultire(m1, l1, c1, m2, l2, c2);
	if(rez != NULL){
		cout << "\nInmultire:\n";
		afisare(rez, l1, c2);
	}
	//eliberez memoria
	free(m1);
	m1 = NULL;
	free(m2);
	m2 = NULL;
	free(rez);
	rez = NULL;
	//citesc o matrice patratica
	cout << "\nDati dimesniunea: ";
	int n;
	cin >> n;
	m1 = aloc(n, n); //aloc dinamic spatiu in memorie pentru matrice
	cout << "Elementele: ";
	citire(m1, n, n);
	int* v = NULL;
	v = (int*) calloc(n, sizeof(int)); //aloc dinamic spatiu in memorie pentru vector
	for(int i = 0; i < n; i++) {
		v[i] = m1[i][i];
	}
	sortare(v, n);
	cout << endl;
	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
