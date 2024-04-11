#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(){
	note = NULL;
}

Student::Student(int id, string fac, int nr, int *nt){
	id_student = id;
	facultate = fac;
	n = nr;
	note = new int[n];
	for(int i = 0; i < n; i++){
		note[i] = nt[i];
	}
}

Student::Student(Student &s){
	id_student = s.id_student;
	facultate = s.facultate;
	n = s.n;
	note = new int[n];
	for(int i = 0; i < n; i++){
		note[i] = s.note[i];
	}
}

Student::~Student(){
	if(note != NULL)
		delete []note;
}

Student & Student::operator=(const Student &s){
	id_student = s.id_student;
	facultate = s.facultate;
	n = s.n;
	note = new int[n];
	for(int i = 0; i < n; i++){
		note[i] = s.note[i];
	}
	return *this;
}

float Student::medie(){
	float med = 0;
	for(int i = 0; i < n; i++){
		med += note[i];
	}
	med /= n;
	return med;
}

int Student::venit(){
	if(medie() < 8.5)
		return 0;
	for(int i = 0; i < n; i++)
		if(note[i] < 5)
			return 0;
	return 500;
}

void Student::afisare(){
	cout << "id student: " << id_student << "\nfacultate: " << facultate << "\nnote: ";
	for(int i = 0; i < n; i++){
		cout << note[i] << " ";
	}
}
