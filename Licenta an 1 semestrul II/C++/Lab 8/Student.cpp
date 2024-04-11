#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(){
	note = NULL;
}

Student::Student(string num, int v, int *n, int nr):Persoana(num, v){
	note = new int[nr];
	for(int i = 0; i < nr; i++){
		note[i] = n[i];
	}
	nr_note = nr;
}

Student::Student(Student &s):Persoana(s){
	note = new int(s.nr_note);
	for(int i = 0; i < s.nr_note; i++){
		note[i] = s.note[i];
	}
	nr_note = s.nr_note;
}

Student::~Student(){
	if(note != NULL)
		delete [] note;
}

Student & Student::operator=(const Student &s){
	nume = s.nume;
	varsta = s.varsta;
	note = new int[s.nr_note];
	for(int i = 0; i < s.nr_note; i++){
		note[i] = s.note[i];
	}
	nr_note = s.nr_note;
	return *this;
}

void Student::afisare(){
	Persoana::afisare();
	cout << "Note: ";
	for(int i = 0; i < nr_note; i++){
		cout << note[i] << " ";
	}
	cout << endl;
}

float Student::medie(){
	float medie;
	for(int i = 0; i < nr_note; i++){
		medie += note[i];
	}
	medie /= nr_note;
	return medie;
}

bool Student::restanta(){
	for(int i = 0; i < nr_note; i++){
		if(note[i] < 5)
			return true;
	}
	return false;
}
