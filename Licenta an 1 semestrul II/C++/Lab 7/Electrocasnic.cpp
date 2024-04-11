#include<string.h>
#include"Electrocasnic.h"

Electrocasnic::Electrocasnic(){
	marca = NULL;
}

Electrocasnic::Electrocasnic(string c, int p, char *m):Produs(c, p){
	marca = new char[strlen(m)];
	strcpy(marca, m);
}

Electrocasnic::Electrocasnic(const Electrocasnic &e):Produs(e){
	marca = new char[strlen(e.marca)];
	strcpy(marca, e.marca);
}

Electrocasnic & Electrocasnic::operator=(const Electrocasnic &e){
	cod = e.cod;
	pret = e.pret;
	if(marca != NULL)
		delete [] marca;
	marca = new char[strlen(e.marca)];
	strcpy(marca, e.marca);
	return *this;
}

void Electrocasnic::afisare(){
	Produs::afisare();
	cout << "\nMarca: " << marca;
}

Electrocasnic::~Electrocasnic() {
	if(marca != NULL)
		delete [] marca;
}
