#include "Persoana.h"
#include <string>
#pragma once
using namespace std;

class Student : virtual public Persoana {
	int id_student; //unic pentru fiecare persoana de acest tip
	string facultate; // facultatea unde invata 
	int n; //nr. note pe baza carora se calculeaza media
	int *note; //vectorul in care se stocheaza cele n note 
public:
	Student();
	Student(int, string, int, int*);
	Student(Student &);
	~Student();
	Student & operator=(const Student &);
	float medie();
	int venit();
	void afisare();
};

