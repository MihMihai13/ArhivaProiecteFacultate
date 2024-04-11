#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

enum Categorie{
           aliment, imbracaminte, jucarie
};
struct Produs{
    unsigned int pret : 10; 
    char* marca;
    Categorie categ;  
}p;
//functia seteaza marca unui produs
void marc(Produs &p, char m[100]) {
	int l = strlen(m);
	p.marca = (char*)malloc(sizeof(char) * (l+1));
	strcpy(p.marca, m);
}
//functia seteaza pretul unui produs
void pret(Produs &p, int x) {
	p.pret = x;
}
//functia seteaza catgotia unui produs
void categorie(Produs &p, int c) {
	p.categ = (Categorie)c;
}
//functia citeste un produs
void citire (Produs &p) {
	cout << "Dati pret produs: ";
	int x;
	cin >> x;
	pret (p, x);
	cout << "Dati marca: ";
	char m[100];
	cin>>m;
	marc (p, m);
	cout << "Dati categoria (0-2): ";
	int c;
	cin >> c;
	categorie (p, c);
}
//functia afiseaza un produs
void afisare (Produs &p) {
	cout << "\n\nPret: " << p.pret << "\nMarca: " << p.marca << "\nCtegoria: ";
	switch(p.categ) {
		case aliment: cout << "alimente"; break;
		case imbracaminte: cout << "imbracaminte"; break;
		case jucarie: cout << "jucarie"; break;
	}
}
//functia copiaza un produs
void copiere (Produs &x, Produs &y) {
	x.pret = y.pret;
	x.marca = y.marca;
	x.categ = y.categ;
}

int main () {
	cout << "Nr. produse: ";
	int n;
	cin >> n;
	Produs* p = (Produs*)malloc(sizeof(Produs)*n);
	for (int i = 0; i < n; i++) {
		cout << "Produsul " << i+1 << "\n";
		citire (p[i]);
	}
	//sortez produsele in functie de marca
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if(p[i].marca[0]>p[j].marca[0]){
				Produs aux={NULL,NULL};
				copiere(aux,p[i]);
				copiere(p[i],p[j]);
				copiere(p[j],aux);
			}
	for (int i = 0; i < n; i++) {
		afisare (p[i]);
	}
	//afisez toate prod din categ alimente ce au pret > 10
	for (int i = 0; i < n; i++) {
		if (p[i].categ == aliment && p[i].pret > 10)
			afisare (p[i]);
	}
	//modific toate preturile din categoria jucarie
	for (int i = 0; i < n; i++) {
		if (p[i].categ == jucarie)
			p[i].pret *= 0.9;	
	}
	//creez vectorul ce contine doar produse din categoria imbracaminte
	Produs* vector_imbracaminte = (Produs*)malloc(sizeof(Produs)*n);
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (p[i].categ == imbracaminte) {
			copiere(vector_imbracaminte[j], p[i]);
			j++;
		}
	}
}
