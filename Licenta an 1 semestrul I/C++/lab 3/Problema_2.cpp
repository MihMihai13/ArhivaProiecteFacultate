#include <iostream>
using namespace std;

int main() {
	//citesc dimesniunea vectorilor
	cout << "Dati dimensiunea vectorilor: ";
	int dim;
	cin >> dim;
	int v[dim];
	//citesc elementele vectorului v
	for(int i = 0; i < dim; i++){
		cout << "Dati v[" << i << "]: ";
		cin >> v[i];
	}
	cout << endl;
	//citesc elementele vectorului x
	float x[dim];
	for(int i = 0; i < dim; i++){
		cout << "Dati x[" << i << "]: ";
		cin >> x[i];
	}
	//interclasez vectorii intr-un nou vector
	float a[dim*2];
	for(int i = 0; i < dim*2; i+=2) {
		a[i] = v[i/2];
		a[i+1] = x[i/2];
	}
	//afisez rezultatul interclasarii
	cout << "Rezultatul interclasarii: ";
	for(int i = 0; i < dim*2; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	//sortez vectorul
	for(int j = dim*2-1; j >= 0; j--)
		for(int i = 0; i < j; i++){
			if(a[i] > a[i+1]){
				int t = a[i];
				a[i] =a[i+1];
				a[i+1]=t;
			}
		}
	//afisez vectorul sortat
	cout << "Vectorul sortat: ";
	for(int i = 0; i < dim*2; i++)
		cout << a[i] << " ";
	//caut valoarea 23.0
	int i = 0;
	while(a[i] < 23.0)
		i++;
	if(a[i] == 23.0)
		cout << "\n23.0 se gaseste in vector";
	else
		cout << "\n23.0 nu se gaseste in vector";
	return 0;
}
