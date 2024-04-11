#include <iostream>
#include "Student.h"
#include "Angajat.h"

using namespace std;

int main() {
	//================================================================================
	//Testare metode
	cout << "testare metode\n=================================================\n";
	cout << "Persoana\n";
	Persoana p1("Ana", 69), p2(p1), p3 = p2;
	p3.afisare();
	
	cout << "\nStudent\n";
	int note[2] = {6, 9};
	Student s1("Ion", 25, note, 2), s2(s1), s3 = s2;
	s3.afisare();
	cout << "Media: " << s3.medie() << endl;
	cout << "Restanta: ";
	if(s3.restanta())
		cout << "Are restante" << endl;
	else
		cout << "Nu are restante" << endl;
	
	cout << "\nAngajat\n";
	Angajat a1("Alup", 42, 6090, "SPPSRL"), a2(a1), a3 = a2;
	a2.afisare();
	cout <<"\n=================================================\n";
	
	cout << "Nr. studenti: ";
	int nr;
	cin >> nr;
	Student s[nr];
	for(int i = 0; i < nr; i++){
		cout << "Studentul " << i << endl;
		string nume;
		int varsta, *note, nr_note;
		cout << "\tNume: ";
		cin >> nume;
		cout << "\tVarsta: ";
		cin >> varsta;
		cout << "\tNr. note: ";
		cin >> nr_note;
		note = new int[nr_note];
		cout << "\tNote:\n";
		for(int j = 0; j < nr_note; j++){
			cout << "\t\tNota " << j << ": ";
			cin >> note[j];
		}
		Student aux(nume, varsta, note, nr_note);
		s[i] = aux;
	}
	
	int nr_stud;
	float medie_max = 0;
	for(int i = 0; i < nr; i++){
		int med = s[i].medie();
		if((med > medie_max) and (s[i].restanta() == false)){
			medie_max = med;
			nr_stud = i;
		}
	}
	cout << "\nStudentul cu cea mai mare medie:\n";
	s[nr_stud].afisare();
	
	
	cout << "\n\nNr. Angajati: ";
	cin >> nr;
	Angajat a[nr];
	for(int i = 0; i < nr; i++){
		cout << "Angajatul " << i << endl;
		string nume, firma;
		int varsta, salariu;
		cout << "\tNume: ";
		cin >> nume;
		cout << "\tVarsta: ";
		cin >> varsta;
		cout << "\tSalariu: ";
		cin >> salariu;
		cout << "\tNume firma: ";
		cin >> firma;
		Angajat aux(nume, varsta, salariu, firma);
		a[i] = aux;
	}
	int sal_max = 0, nr_ang = 0;
	for(int i = 0; i < nr; i++){
		if(a[i].get_salariu() > sal_max){
			sal_max = a[i].get_salariu();
			nr_ang = i;
		}
	}
	cout << "\nAngajatul cu cel mai mare salariu:\n";
	a[nr_ang].afisare();
	return 0;
}
