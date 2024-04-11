#include<iostream>
#include<stdlib.h>
using namespace std;

//functia citeste un vector
void citire(int* v, int x, int nr) {
	cout << "\nDati elementele vectorului " << nr << ": ";
	for(int i = 0; i < x; i++) {
		cin >> v[i];
	}
}
//functia afiseaza un vector
void afisare(int* v, int x) {
	for(int i = 0; i < x; i++)
		cout << v[i] << " ";
}
//functia concateneaza 2 vectori
void concat(int* v1, int* v2, int n, int m, int* c) {
	for(int i = 0; i < n; i++)
		c[i] = v1[i];
	for(int i = 0; i < m; i++)
		c[n+i] = v2[i];
	}

int main() {
	int n, m;
	cout << "Dati n: ";
	cin >> n;
	cout << "Dati m: ";
	cin >> m;
	//aloc dinamic memorie pentru cei 2 vectori
	int *v1=NULL, *v2=NULL;
	v1 = (int*)malloc(n*sizeof(int));
	v2 = (int*)malloc(m*sizeof(int));
	//verific daca s-a putut aloca memorie
	if(v1 != NULL) {
		citire(v1, n, 1);
		cout << "v1 = ";
		afisare(v1, n);
	}
	else
		cout << "Nu s-a putut aloca memorie pentru v1";
	//verific daca s-a putut aloca memorie
	if(v2 != NULL){
		citire(v2, m, 2);
		cout << "v2 = ";
		afisare(v2, m);
	}
	else
		cout << "Nu s-a putut aloca memorie pentru v2";
	int* c = NULL;
	c = (int*)malloc((n+m)*sizeof(int)); //aloc dinamic memorie pentru concatenare
	if(v2 != NULL) {
		concat(v1, v2, n , m, c);
		cout << "\nRezultat concatenare: ";
		afisare(c, n+m);
	}
	else
		cout << "Nu s-a putut aloca memorie pentru concatenare";	
	return 0;
}
