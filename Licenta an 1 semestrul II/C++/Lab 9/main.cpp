#include <iostream>
#include "Imobil.h"
#include "Teren.h"
using namespace std;

int main(){
	//testare metode ===========================================================
	cout << "Testare metode\n==================================================================";
	Proprietate p1("proprietate", 6900), p2(p1), p3 = p2;
	p3.afisare();
	Imobil i1("imobil", 10001, 42000, "intretinere"), i2(i1), i3 = i2;	
	i3.afisare();
	Teren t1("teren", 64532, 56, 42), t2(t1), t3 = t2;
	t3.afisare();
	cout << "==================================================================";
	
	Proprietate **v = new Proprietate*[5];
	v[0] = new Proprietate(p1);
	v[1] = new Imobil(i1);
	v[2] = new Teren(t1);
	
	for(int i = 0; i < 2; i++){
		for(int j = i+1; j < 3; j++){
			if(v[i]->venit_luna() < v[j]->venit_luna()){
				Proprietate *aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	cout << "\n\nSortare:\n";
	for(int i = 0; i < 3; i++){
		v[i]->afisare();
		cout << "Venit pe luna: " << v[i]->venit_luna() << endl;
	}
	
	cout << "==================================================================\n\n";
	cout << "Proprietati cu valoare > 10 000:\n";
	for(int i = 0; i < 3; i++){
		if(v[i]->get_valoare() > 10000)
			v[i]->afisare();
	}
	return 0;
}
