#include <iostream>
using namespace std;

// variabila pentru liste dublu inlantuite
struct numar2 {
	int v; // valoarea din lista
	numar2 *prec; // legatura catre elementul precedent din lista
	numar2 *urm; // legatura catre urmatorul element din lista
}; // structura elemente lista dublu inlantuita

struct lista2 {
	numar2 *prim; // adresa primului element din lista dublu inlantuita
	numar2 *ultim; // adresa ultimului element din lista
}; // structura pentru lista dublu inlantuita

lista2 *creare_coada() {
	numar2 *c, *pr, *ul;
	lista2 *L2;
	int x, n;
	cout<<"Valoare cap coada x = ";
	cin>>x;
	pr=new numar2;
	pr->v=x;
	pr->prec=NULL;
	pr->urm=NULL;
	ul=pr;
	L2=new lista2;
	L2->prim=pr;
	L2->ultim=ul; // ultimul element din lista
	cout<<"Numarul de elemente care se adauga in coada la creare n = ";
	cin>>n;
	for(int i=1; i<=n; i++) {
		cout<<"Valoare de adaugat in coada x = ";
		cin>>x;
		// elemntul c se aduag dupa ultumul element din lista
		c=new numar2;
		c->v=x;
		c->prec=L2->ultim;
		c->urm=NULL;
		(L2->ultim)->urm=c; // stabileste legatura intre ultimul elemnt si noul element adaugat
		L2->ultim=c; // c devine ultimul element
	}
	L2->ultim->urm = L2->prim;
	return L2;
}

void parcurgere_coada_direct(lista2 *coada) {
	numar2 *c;
	if (coada->prim == NULL)
		cout<<"Lista este vida!"<<endl;
	else {
		c=coada->prim;
		do {
			cout<<c->v<<" ";
			c=c->urm;
		} while (c != coada->prim);
	}
}

void parcurgere_coada_invers(lista2 *coada) {
	numar2 *c;
	if (coada->ultim == NULL)
		cout<<"Lista este vida!"<<endl;
	else {
		c=coada->ultim;
		do {
			cout<<c->v<<" ";
			c=c->prec;
		} while (c != NULL &&c != coada->ultim);
	}
}

lista2 *adaugare_coada(lista2 *coada, int a) {
	numar2 *p;
	p = new numar2;
	p->v = a;
	p->urm = coada->prim;
	p->prec = coada->ultim;
	coada->ultim->urm = p;
	coada->ultim = p;
	coada->prim->prec = coada->ultim;
	return coada;
}

lista2 *stergere_coada(lista2 *coada) {
	if (coada->prim == NULL) {
		cout << "Coada este vida!" << endl;
		return coada;
	}
	numar2 *primulNod = coada->prim;
	coada->prim = primulNod->urm;

	if (coada->prim != NULL) {
		coada->prim->prec = coada->ultim;
		coada->ultim->urm = coada->prim;
	} else {
		// Coada a devenit vida
		coada->ultim = NULL;
	}
	return coada;
}

int main() {

	cout << "Creare coada circulara: "<< endl;
	lista2 *c = creare_coada();
	cout << "Coada dupa creare:" << endl;
	cout << "Parcurgere directa: ";
	parcurgere_coada_direct(c);
	cout << endl;
	cout << "Parcurgere inversa: ";
	parcurgere_coada_invers(c);
	cout << endl << endl;
	cout << "Adaugare element in coada: " << endl;
	cout << "Valoare de adaugat: ";
	int x;
	cin >> x;
	c = adaugare_coada(c, x);
	cout << endl;
	cout << "Coada dupa adaugare:" << endl;
	parcurgere_coada_direct(c);
	cout << endl;
	parcurgere_coada_invers(c);
	cout << endl;
	cout << "Verificare leagtura directa dintre ultimul si primul element: " << c->ultim->v << " " << c->ultim->urm->v << endl;
	cout << "Verificare leagtura inversa dintre primul si ultimul element: " << c->prim->v << " " << c->prim->prec->v << endl;
	cout  << endl;
	cout << "Stergere un element din coada:" << endl;
	c = stergere_coada(c);
	cout << "Coada dupa stergere:" << endl;
	parcurgere_coada_direct(c);
	cout  << endl;
	parcurgere_coada_invers(c);
	cout << endl;
	cout << "Verificare leagtura directa dintre ultimul si primul element: " << c->ultim->v << " " << c->ultim->urm->v << endl;
	cout << "Verificare leagtura inversa dintre primul si ultimul element: " << c->prim->v << " " << c->prim->prec->v << endl;
	cout  << endl;

	return 0;
}
