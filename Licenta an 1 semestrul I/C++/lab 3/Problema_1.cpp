#include <iostream>
using namespace std;

int main() {
	float v1[100], v2[100], p=0;
	int d1, d2;
	//citesc dimensiunile vectorilor
	cout << "Dati dimensiunea vectorului 1: ";
	cin >> d1;
	cout << "Dati dimensiunea vectorului 2: ";
	cin >> d2;
	//citesc elementele vectorului v1
	for(int i = 0; i < d1; i++){
		cout << "Dati v1[" << i << "]: ";
		cin >> v1[i];
	}
	//citesc elementele vectorului v2
	for(int i = 0; i < d1; i++){
		cout << "Dati v2[" << i << "]: ";
		cin >> v2[i];
	}
	//verific daca se poate calcula produsul scalar iar daca se poate il calculez
	if(d1 != d2)
		cout << "Nu se poate calcula";
	else {
		for(int i = 0; i < d1; i++)
		p += v1[i]*v2[i];
	}
	//afisez produsul
	cout << "Produs = " << p;
	return 0;
}
