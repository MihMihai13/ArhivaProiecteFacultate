#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

int nr_linii(istream &f) {
	f.seekg(ios::beg);
	char aux[13];
	int linii = 0;
	while(!f.eof()) {
		f.getline(aux, 14);
		linii++;
	}
	return linii;
}

string* citire(ifstream &f) {
	f.seekg(ios::beg);
	string *cnp = new string[10];
	char aux[13];
	int i = 0;
	while(!f.eof()) {
		f.getline(aux, 14);
		cnp[i] = aux;
		i++;
	}
	return cnp;
}

void sort_sex(string *cnp, int n) {
	ofstream b("barbati.out"), f("femei.out");
	if(!b && !f)
		cout << "Eroare la deschiderea fisierelor";
	for(int i = 0; i < n; i++) {
		if(cnp[i][0] == '1' || cnp[i][0] == '3' || cnp[i][0] == '5' || cnp[i][0] == '7')
			b << cnp[i] << endl;
		else
			f << cnp[i] << endl;
	}	
}

void sort_data_nastere(string *cnp, int n) {
	int aux[n];
	int data[n];
	ofstream f("date_nastere.out");
	if(!f)
		cout << "Eroare la deschidere date_nastere.out";
	for(int i = 0; i < n; i++) {
		aux[i] = stoi(cnp[i].substr(1, 6));
	}
	int x;
	for(int i = 0; i < n-1; i++) {
		for(int j = i; j < n; j++) {
			if(aux[i] > aux[j]) {
				x = aux[i];
				aux[i] = aux[j];
				aux[j] = x;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		f << aux[i] << endl;
	}
}

void inlocuire(int n) {
	char aux[10];
	string data[n];
	int loc;
	ifstream f("date_nastere.out");
	if(!f)
		cout << "Eroare la deschidere date_nastere.out";
	for(int i = 0; i < n; i++) {
		f.getline(aux, 14);
		data[i] = aux;
		while ((loc = data[i].find("010"))!=string::npos) {
			data[i].replace(loc, 3, "XY");
		}
	}
	f.close();
	ofstream g("date_nastere.out");
	for(int i = 0; i < n; i++) {
		g << data[i] << endl;
	}
}

int pers_buc(string *cnp, int n) {
	int nr = 0;
	for(int i = 0; i < n; i++) {
		if(cnp[i][7] == '4')
			nr++;
	}
	return nr;
}

int main() {
	ifstream date("date.in");
	if(!date)
		cout << "Eroare la deschidere date.in";
	int n = nr_linii(date);
	cout << "Fisierul date.in are: " << n << " linii.\n";
	string *list;
	list = citire(date);
	cout << "Vectorul CNP-urilor:\n";
	for(int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}
	sort_sex(list, n);
	char aux[13];
	ifstream b("barbati.out");
	cout << "\n\nbarbati.out\n";
	while(!b.eof()) {
		b.getline(aux, 14);
		cout << aux << endl;
	}
	ifstream f("femei.out");
	cout << "\nfemei.out\n";
	while(!f.eof()) {
		f.getline(aux, 14);
		cout << aux << endl;
	}
	f.close();
	sort_data_nastere(list, n);
	cout << "\ndate_nastere.out\n";
	ifstream d("date_nastere.out");
	while(!d.eof()) {
		d.getline(aux, 14);
		cout << aux << endl;
	}
	d.close();
	inlocuire(n);
	ifstream x("date_nastere.out");
	cout << "\ndate_nastere.out dupa inlocuire\n";
	while(!x.eof()) {
		x.getline(aux, 14);
		cout << aux << endl;
	}
	cout << "Nr. persoane nascute in Bucuresti: " << pers_buc(list, n);
	return 0;
}
