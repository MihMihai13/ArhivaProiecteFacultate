#include<iostream>
#include<stdlib.h>
using namespace std;

//functia citeste un vector
void citire(char* v, int nr) {
	cout << "\nDati elementele vectorului " << nr << ": ";
	cin >> v;
}
//functia afiseaza un vector
void afisare(char* v) {
	cout << v;
}
//functia concateneaza 2 vectori
void concat(char* v1, char* v2, int n, int m, char* c) {
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
	char *v1=NULL, *v2=NULL;
	v1 = (char*)malloc((n+1)*sizeof(char));
	v2 = (char*)malloc((m+1)*sizeof(char));
	//verific daca s-a putut aloca memorie
	if(v1 != NULL) {
		citire(v1, 1);
		cout << "v1 = ";
		afisare(v1);
	}
	else
		cout << "Nu s-a putut aloca memorie pentru v1";
	//verific daca s-a putut aloca memorie
	if(v2 != NULL){
		citire(v2, 2);
		cout << "v2 = ";
		afisare(v2);
	}
	else
		cout << "Nu s-a putut aloca memorie pentru v2";
	char* c = NULL;
	c = (char*)malloc((n+m+1)*sizeof(char)); //aloc dinamic memorie pentru concatenare
	if(c != NULL) {
		concat(v1, v2, n , m, c);
		cout << "\nRezultat concatenare: ";
		afisare(c);
	}
	else
		cout << "Nu s-a putut aloca memorie pentru concatenare";	
	return 0;
}
