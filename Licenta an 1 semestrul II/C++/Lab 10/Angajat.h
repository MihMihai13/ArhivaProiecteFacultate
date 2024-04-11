#include "Persoana.h"
#include <string>
#pragma once
using namespace std;

class Angajat : virtual public Persoana{
	int id_angajat; //unic pentru fiecare persoana de acest tip
	string firma; //firma unde lucreaza 
	int salariu;
public:
	Angajat(int, string, int);
	int venit();
	void afisare();
}; 

