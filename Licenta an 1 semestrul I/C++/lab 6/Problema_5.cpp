#include<iostream>
using namespace std;

//sortez vectorul prin metoda selectiei
void sortare(int* v, int l) {
	for (int i = 0; i < l-1; i++) {
		int vmin = i;
		for (int j = i+1; j < l; j++)
			if (v[j] < v[vmin])
				vmin = j;
	int temp =v[vmin];
	v[vmin] =v[i];
	v[i]=temp;
	}
}
//citesc componentele vectorului
void citire(int* v, int l) {
	for(int i = 0; i < l; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

//afisez componentele vectorului
void afisare(int* v, int l) {
	for(int i = 0; i < l; i++) {
		cout << v[i] << " ";
	}
}

int main() {
	int l;
	cout << "Dati lungime vectorului: ";
	cin >> l;
	int v[l];
	citire(v, l);
	sortare(v, l);
	afisare(v, l);
	return 0;
}
