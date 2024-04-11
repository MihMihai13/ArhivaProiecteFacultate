#include<string.h>
#include"TV.h"

TV::TV():Electrocasnic(){
	diagonala = 0;
	proprietati = NULL;
	nr_proprietati = 0;
}

TV::TV(string c, int p, char *m, double d, string *prop, int nr_prop):Electrocasnic(c, p, m) {
	diagonala = d;
	nr_proprietati = nr_prop;
	proprietati = new string[nr_prop];
	for(int i = 0; i < nr_proprietati; i++){
		proprietati[i] = prop[i];
	}
}

TV::TV(const TV &t):Electrocasnic(t){
	diagonala = t.diagonala;
	nr_proprietati = t.nr_proprietati;
	proprietati = new string[nr_proprietati];
	for(int i = 0; i < nr_proprietati; i++){
		proprietati[i] = t.proprietati[i];
	}
}

TV & TV::operator=(const TV &t){
	cod = t.cod;
	pret = t.pret;
	if(marca != NULL)
		delete [] marca;
	marca = new char[strlen(t.marca)];
	strcpy(marca, t.marca);
	diagonala = t.diagonala;
	nr_proprietati = t.nr_proprietati;
	proprietati = new string[nr_proprietati];
	for(int i = 0; i < nr_proprietati; i++){
		proprietati[i] = t.proprietati[i];
	}
	return *this;
}

TV::~TV(){
	if(proprietati != NULL)
		delete [] proprietati;
}

void TV::afisare(){
	Electrocasnic::afisare();
	cout << "\ndiagonala: " << diagonala;
	cout << "\nProprietati: ";
	for(int i = 0; i < nr_proprietati; i++){
		cout << proprietati[i] << " ";
	}
}

int TV::get_pret(){
	return pret;
}

string TV::get_marca(){
	string m;
	m = marca;
	return m;
}

double TV::get_diagonala(){
	return diagonala;
}
