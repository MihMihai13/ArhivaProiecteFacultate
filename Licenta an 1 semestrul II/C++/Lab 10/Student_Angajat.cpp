#include "Student_Angajat.h"
#include <iostream>

using namespace std;

Student_Angajat::Student_Angajat(int id_stud, string fac, int nr, int* n, int id_ang, string f, int sal): Student(id_stud, fac, nr, n), Angajat(id_ang, f, sal){
}

void Student_Angajat::afisare(){
	Student::afisare();
	cout << endl;
	Angajat::afisare();
}

int Student_Angajat::venit(){
	return Student::venit() + Angajat::venit();
}
