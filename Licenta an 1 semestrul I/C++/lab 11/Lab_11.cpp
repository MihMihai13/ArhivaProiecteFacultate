#include <iostream>
#include <stdlib.h>
using namespace std;

struct Produs {
	char cod[6];
	int pret;
};
//functia sorteaza produsele dupa pret
void sortare(Produs *p, int n) {
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (p[i].pret > p[j].pret) {
				Produs aux= p[i];
				p[i]=p[j];
				p[j]=aux;
			} else if (p[i].pret == p[j].pret && p[i].cod > p[j].cod) {
				Produs aux= p[i]; 
				p[i]=p[j];
				p[j]=aux;
			}

}

int caut(Produs *p, int pr, int n) {
	int ap = 0;
	for (int i = 0; i < n; i++) {
		if (p[i].pret == pr)
			ap++;
	}
	return ap;
}

int main () {
	int n;
	cout << "Dati n: ";
	cin >> n;
	Produs* p = (Produs*)malloc(sizeof(Produs)*n);
	//citesc datele depre produse
	for (int i = 0; i < n; i++) {
		cout << "Produs " << i << "\nCod: ";
		cin >> p[i].cod;
		cout << "Pret: ";
		cin >> p[i].pret;
	}
	//sriu datele in fisierul produse.dat
	FILE *g;
	g=fopen("produse.dat","wb");
	if (g==NULL) {
		cout<<"Eroare la deschiderea fisierelor";
		return 1;
	}
	fwrite(p, sizeof(Produs), n, g);
	if (fclose(g)!=0)
		cout<<"eroare la inchidere";
	free(p);
	p = NULL;
	//citesc datele din produse.dat
	FILE *f;
	f=fopen("produse.dat", "rb");
	fseek(f, 0, SEEK_END);
	n = ftell(f)/sizeof(Produs); //calculez numarul de elemente din fisier
	p = (Produs*)malloc(sizeof(Produs)*n);
	fseek(f, 0, SEEK_SET);
	fread(p, sizeof(Produs), n, f);
	sortare(p, n);
	//scriu in pretmare.txt produsele cu pret > 100
	g=fopen("pretmare.txt","w");
	if(g==NULL) {
		cout<<"Eroare la deschidere"; 
		return 1;
	}
	for (int i = 0; i < n; i++) {
		if (p[i].pret > 100) {
			fprintf(g, "%s ", p[i].cod);
			fprintf(g,"%d\n",p[i].pret);
		}
	}
	if (fclose(g)!=0 || fclose(f)!=0)
		cout<<"eroare la inchidere";
	free(p);
	p = NULL;
	//citesc datele din pretmare.txt
	f=fopen("pretmare.txt", "r");
	Produs *aux;
	int i=1;
	while (!feof(f)) {
		aux=(Produs*)realloc(p, i);
		if(aux!=NULL)
			p=aux;
		else
			cout << "eroare";
		fscanf(f, "%s", p[i].cod);
		fscanf(f, "%d", p[i].pret);
		i++;
	}
	p = (Produs*)malloc(sizeof(Produs)*n);
	fread(p, sizeof(Produs), n, f);
	//caut produsele cu pretul pr
	cout << "Dati pretul: ";
	int pr;
	cin >> pr;
	cout << caut(p, pr, n) << " produse au pretul " << pr;
	return 0;
}
