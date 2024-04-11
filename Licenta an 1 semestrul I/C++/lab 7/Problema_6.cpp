#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//functia elimina un caracter din sir
void elim(char* s, char c, int n) {
	for(int i = 0; i < n; i++) {
		if(s[i] == c) {
			for(int j = i; j < n; j++) {
				s[j] = s[j+1];
			}
			i--;
		}
	}
	//realoc memoria pentru sir
	char* aux = NULL;
	aux = (char*)realloc(s, strlen(s)*sizeof(char));
	//verifica daca s-a putut realoca memoria
	if (aux != NULL)
		s = aux;
	else
		cout << "Eroare";
}

int main() {
	char* s = NULL, c;
	int n;
	cout << "Dati lungime sir: ";
	cin >> n;
	s = (char*)malloc((n+1)*sizeof(char)); //aloc dinamic memorie pentru sir
	//verific daca s-a putut aloca memorie
	if(s != NULL) {
		cout << "Dati sirul: ";
		cin.ignore();
		cin.getline(s, n+1);
	}
	else
		cout << "Nu s-a putut aloca memorie";
	cout << "Dati carcaterul de eliminat: ";
	cin >> c;
	elim(s, c, n);
	cout << s;
	return 0;
}
