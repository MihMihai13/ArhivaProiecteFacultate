#include <string>
#pragma once
using namespace std;

class Persoana{
protected:
	string nume;
	int varsta;
public:
	Persoana();
	Persoana(string, int);
	void afisare();
};
