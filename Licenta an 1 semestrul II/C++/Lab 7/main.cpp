#include<iostream>
#include<string>
#include"TV.h"

using namespace std;

int main() {
//================================================================================
//Testare metode
	cout << "testare metode\n=================================================";
	Produs p1("Produs", 10), p2(p1);
	p2.afisare();
	cout << endl;
	
	char x[10] = "samsung";
	Electrocasnic e1("Electrocasnic", 50, x), e2(e1), e3;
	e3 = e2;
	e3.afisare();
	cout << endl;
	
	string pr[2];
	pr[0] = "negru";
	pr[1] = "smart";
	TV t1("TV", 6542, x, 120, pr, 2), t2(t1), t3;
	t3 = t2;
	t3.afisare();
	cout << "\n\n";
	cout << t3.get_pret() << " " << t3.get_marca() << " " << t3.get_diagonala();
	cout << "\n=================================================\n";
//================================================================================
	
	cout << "\nNr. TV-uri: ";
	int n;
	cin >> n;
	TV v[n];
	for(int i = 0; i < n; i++){
		cout << "\nTV " << i << ":\n";
		string c, prop[100];
		int p, nr_prop;
		char m[100];
		double d;
		cout << "Cod: ";
		cin >> c;
		cout << "Pret: ";
		cin >> p;
		cout << "Marca: ";
		cin >> m;
		cout << "Diagonala: ";
		cin >> d;
		cout << "Nr. proprietati: ";
		cin >> nr_prop;
		for(int j = 0; j < nr_prop; j++){
			cout << "Proprietatea " << j << ": ";
			cin >> prop[j];
		}
		TV t(c, p, m, d, prop, nr_prop);
		v[i] = t;
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = 1; j < n; j++){
			if(v[i].get_diagonala() > v[j].get_diagonala()){
				TV aux(v[i]);
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	cout << "\n=================================================";
	cout << "\nSortare dupa diagonala:";
	for(int i = 0; i < n; i++){
		cout << "\n";
		v[i].afisare();
	}
	
	cout << "\n=================================================";
	cout << "\nTV-urile cu pret > 10 si marca LG";
	for(int i = 0; i < n; i++){
		if(v[i].get_pret() > 10 and v[i].get_marca() == "LG"){
			cout << endl;
			v[i].afisare();
		}
	}
	return 0;
}
