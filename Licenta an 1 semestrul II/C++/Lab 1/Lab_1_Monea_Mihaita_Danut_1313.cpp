#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Student {
	private:
		int id;
		char *nume;
		char gr[5];
		int note_sem_I[6];
	public:
		void init ();
		void afisare();
		void modifica(const char []);
		void modifica(const Student &);
		void modifica(int, int);
		float medie;
		void med();
		void restante(Student &);
		bool restant;
};

void Student::init() {
	cout << "id: ";
	cin >> id;
	cout << "nume: ";
	char num[100];
	cin >> num;
	nume = new char[strlen(num)];
	strcpy(nume, num);
	cout << "grupa: ";
	cin >> gr;
	cout << "note sem I: ";
	for (int i = 0; i < 6; i++) {
		cin >> note_sem_I[i];
	}
}

void Student::afisare() {
	cout << "id: " << id << endl;
	cout << "nume: " << nume << endl;
	cout << "grupa: " << gr << endl;
	cout << "note sem I: ";
	for (int i = 0; i < 6; i++) {
		cout << note_sem_I[i] << " ";
	}
	cout << endl;
}

void Student::modifica(const char g[5]) {
	strcpy(gr, g);
}

void Student::modifica(const Student &s) {
	id = s.id;
	strcpy(nume, s.nume);
	strcpy(gr, s.gr);
	for (int i = 0; i < 6; i++) {
		note_sem_I[i] = s.note_sem_I[i];
	}
}

void Student::modifica(int p, int n) {
	note_sem_I[p] = n;
}

void Student::med() {
	medie = 0;
	for(int i = 0; i < 6; i++)
		medie += note_sem_I[i];
	medie /= 6;
}

void sortare(int n, Student *s) {
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if (s[i].medie > s[j].medie) {
				Student aux;
				aux.modifica(s[i]);
				s[i].modifica(s[j]);
				s[j].modifica(aux);
			}
}

void Student::restante(Student &s) {
	restant = false;
	for(int i = 0; i < 6; i++) {
		if(note_sem_I[i] < 5) {
			restant = true;
			break;
		}
	}
}

int main() {
	cout << "Nr. studenti: ";
	int n;
	cin >> n;
	Student *s;
	s = new Student[n];
	s[0].init();
	s[0].med();
	
	int nr_restante;
	for(int i = 0; i < n; i++) {
		if(s[i].restant == true)
		nr_restante++;
	}
	cout << "numarul de student cu cel putin o restanta: " << nr_restante;
}
