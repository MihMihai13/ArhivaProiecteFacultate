#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

char* copie(char* v) {
	char* c = NULL;
	c = (char*) malloc(strlen(v)*sizeof(char));
	strcpy(c, v);
	return c;
}

int main() {
	cout << "Dati sirul de caractere: ";
	char v[100];
	cin.getline(v, 100);
	char* x = copie(v);
	cout << x;
	return 0;
}
