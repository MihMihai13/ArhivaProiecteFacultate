#include"Produs.h"

Produs::Produs(){
	cod = "invalid";
	pret = 0;
}

Produs::Produs(string c, int p):cod(c), pret(p){
}

void Produs::afisare(){
	cout << "\nCod: " << cod <<"\nPret: " << pret;
}
