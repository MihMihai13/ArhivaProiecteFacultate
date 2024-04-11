#include<iostream>
#include<string.h>
using namespace std;

int main () {
	//citesc dimensiunea sirului
	int n;
	cout << "Dati n: ";
	cin >> n;
	//citesc sirul
	char sir[n];
	cout << "Dati sirul: ";
	cin.ignore();
	cin.getline (sir, n);
	char multime[n]={0};
	int j = 0;
	//verific fiecare element din "s" daca exista in "multime" si in caz contrar il salvez pe o pozitie noua din "multime"
	for(int i = 0; i < strlen(sir); i++){
		if(strchr(multime, sir[i]) == NULL) {
			multime[j] = sir[i];
			j++;
		}
	}
	//afisez rezultatul
	cout << multime;
	return 0;
}
