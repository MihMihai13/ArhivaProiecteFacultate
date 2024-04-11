#include <iostream>
#include <math.h>

using namespace std;

// tipuri de varaibile
// variabila pentru lista simplu inlantuita
struct numar {
	int v; // valoarea din lista
	numar *urm; // legatura catre urmatorul element din lista
}; // structura elemente lista simplu inlantuita


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

struct monom {
	int grad;
	float coef;
	monom *urm;
};

// functii pentru liste simplu inlantuite

numar *creare_lista() {
	numar *cap, *u, *c;
	int x, n;
	cout<<"creare lista!"<<endl;
	// creare capat lista
	cout<<"Valoare cap lista x = ";
	cin>>x;
	cap=new numar;
	cap->v=x;
	cap->urm=NULL;
	u=cap; // ultimul element din lista
	cout<<"Numarul de elemente care se adauga in lista la cearea listei n = ";
	cin>>n;
	for(int i=1; i<=n; i++) {
		cout<<"Valoare de adaugat in lista x = ";
		cin>>x;
		c=new numar;
		c->v=x;
		c->urm=NULL;
		u->urm=c; // stabileste legatura intre ultimul elemnt si noul element adaugat
		u=c; // c devine ultimul element
	}
	return cap;
}

void parcurgere_lista(numar *cap) {
	numar *c;
	if (cap == NULL)
		cout<<"Lista este vida!"<<endl;
	else {
		c=cap;
		while (c != NULL) {
			cout<<c->v<<" ";
			c=c->urm;
		}
	}
}

numar *stergere_din_lista(numar *cap) {
	int cont=0;
	int s;

	numar *c, *p;

	do {
		if (cap == NULL)
			cout<<"Lista este vida! Nu sunt valori de sters!"<<endl;
		else {
			//sterge elementul cu valoarea s de cate ori apare in lista
			cout<<"Valoare de sters s = ";
			cin>>s;
			int nrs=0; // numara de cate ori am sters s din lista
			// stergem valoarea s daca se afla la inceput la lista
			while (cap->v == s) {
				cap=cap->urm;
				nrs++;
				if (cap == NULL)
					break;
			}
			if (cap !=NULL) {
				c=cap->urm;
				p=cap; // precedentul elementului curent c
				while (c!=NULL) {
					if (c->v == s) {
						// sterge din lista pe c
						p->urm=c->urm;
						nrs++;
						c=c->urm;
					} else {
						p=c;
						c=c->urm;
					}
				}
			}
			cout<<"Elementul de sters "<<s<<" a fost sters de "<<nrs<<" ori"<<endl;
			cout<<"Lista ramasa este: ";
			parcurgere_lista(cap);
			cout<<endl;
		}
		cout<<"Continua stergerea [0/1]? ";
		cin>>cont;
	} while (cont);
	return cap;
}

numar *adaugare_in_lista(numar *cap,int a) {
	int opa;
	numar *p;
	do {
		cout<<endl<<"Tip adaugare:"<<endl;
		cout<<"1. Adaugare la inceput de lista:"<<endl;
		cout<<"2. Adaugare dupa element din interiorul listei:"<<endl;
		cout<<"3. Adaugare la sfarsitul listei:"<<endl;
		cout<<"0. Incheiere adaugare!"<<endl;
		cout<<"Optiune adaugare: ";
		cin>>opa;
		switch (opa) {
			case 1: // adauga la inceput
				p=new numar;
				p->v=a;
				p->urm=cap;
				cap=p;
				parcurgere_lista(cap);
				cout<<endl;
				break;
			case 2: // adauga dupa elemnet cu valoare dat din lista
				// citim valoarea dupa care se adauga
				int y;
				numar *c; // c - elementul curent din lista
				cout<<"Valoare dupa care se face adaugarea y = ";
				cin>>y;
				c=cap;
				while (c!= NULL) {
					if (c->v == y) {
						// adauga valoare a dupa y
						if (c->urm == NULL) { // c este ultimul element din lista
							p=new numar;
							p->v=a;
							p->urm=NULL;
							c->urm=p;
							c=c->urm;
						} else { // c se afla in interiorul listei
							p=new numar;
							p->v=a;
							p->urm=c->urm;
							c->urm=p;
							c=c->urm;
						}
					}
					c=c->urm;
				}// end while *c
				parcurgere_lista(cap);
				cout<<endl;
				break;
			case 3: // adauga la sfarsitul la listei
				numar *u;
				u=cap;
				//parcurgem lista pentru a ajunge la ultimul element
				while (u->urm != NULL)
					u=u->urm;
				p=new numar;
				p->v=a;
				p->urm=NULL;
				u->urm=p;
				parcurgere_lista(cap);
				cout<<endl;
				break;
			case 0:
				cout<<"incheiat adaugare!"<<endl;
				break;
			default:
				cout<<"Optiune invalida!"<<endl;
				break;
		}// end switch
	} while(opa);
	return cap;
}

numar *modificare_in_lista(numar *cap, int y, int w) {
	numar *c;
	for(c=cap; c!=NULL; c=c->urm) {
		if (c->v == y)
			c->v=w;
	}
	return cap;
}

// functii pentru liste dublui inlatuite

lista2 *creare_lista_2() {
	numar2 *c, *pr, *ul;
	lista2 *L2;
	int x, n;
	cout<<"creare lista!"<<endl;
	// creare capat lista
	cout<<"Valoare cap lista x = ";
	cin>>x;

	pr=new numar2;
	pr->v=x;
	pr->prec=NULL;
	pr->urm=NULL;
	ul=pr;
	L2=new lista2;
	L2->prim=pr;
	L2->ultim=ul; // ultimul element din lista
	cout<<"prim element = "<<L2->prim->v<<endl;
	cout<<"Numarul de elemente care se adauga in lista la cearea listei n = ";
	cin>>n;
	for(int i=1; i<=n; i++) {
		cout<<"Valoare de adaugat in lista x = ";
		cin>>x;
		// elemntul c se aduag dupa ultumul element din lista
		c=new numar2;
		c->v=x;
		c->prec=L2->ultim;
		c->urm=NULL;
		(L2->ultim)->urm=c; // stabileste legatura intre ultimul elemnt si noul element adaugat
		L2->ultim=c; // c devine ultimul element
	}
	return L2;
}

void parcurgere_lista2_direct(lista2 *L2) {
	numar2 *c;
	if (L2->prim == NULL)
		cout<<"Lista este vida!"<<endl;
	else {
		c=L2->prim;
		while (c != NULL) {
			cout<<c->v<<" ";
			c=c->urm;
		}
	}
}

void parcurgere_lista2_invers(lista2 *L2) {
	numar2 *c;
	if (L2->ultim == NULL)
		cout<<"Lista este vida!"<<endl;
	else {
		c=L2->ultim;
		while (c != NULL) {
			cout<<c->v<<" ";
			c=c->prec;
		}
	}
}

lista2 *stergere_din_lista2(lista2 *l2) {
	int cont=0;
	int s;

	numar2 *c, *p;

	do {
		if (l2->prim == NULL)
			cout<<"Lista este vida! Nu sunt valori de sters!"<<endl;
		else {
			//sterge elementul cu valoarea s de cate ori apare in lista
			cout<<"Valoare de sters s = ";
			cin>>s;
			int nrs=0; // numara de cate ori am sters s din lista
			// stergem valoarea s daca se afla la inceput la lista
			numar2 *cap = l2->prim;
			while (cap->v == s) {
				cap=cap->urm;
				cap->prec = NULL;
				nrs++;
				if (cap == NULL)
					break;
			}
			if (cap !=NULL) {
				c=cap->urm;
				p=cap; // precedentul elementului curent c
				while (c!=NULL) {
					if (c->v == s) {
						// sterge din lista pe c
						p->urm = c->urm;
						nrs++;
						c = c->urm;
						if(c != NULL)
							c->prec = p;
					} else {
						p = c;
						c = c->urm;
					}
				}
			}
			l2->prim = cap;
			l2->ultim = p;
			cout<<"Elementul de sters "<<s<<" a fost sters de "<<nrs<<" ori"<<endl;
			cout<<"Lista ramasa este: ";
			parcurgere_lista2_direct(l2);
			cout << "Lista parcursa invers: ";
			parcurgere_lista2_invers(l2);
			cout<<endl;
		}
		cout<<"Continua stergerea [0/1]? ";
		cin>>cont;
	} while (cont);
	return l2;
}

lista2 *adaugare_in_lista2(lista2 *l2, int a) {
	int opa;
	numar2 *p;
	do {
		cout<<endl<<"Tip adaugare:"<<endl;
		cout<<"1. Adaugare la inceput de lista:"<<endl;
		cout<<"2. Adaugare dupa element din interiorul listei:"<<endl;
		cout<<"3. Adaugare la sfarsitul listei:"<<endl;
		cout<<"0. Incheiere adaugare!"<<endl;
		cout<<"Optiune adaugare: ";
		cin>>opa;
		switch (opa) {
			case 1: // adauga la inceput
				p=new numar2;
				p->v=a;
				p->urm = l2->prim;
				p->prec = NULL;
				l2->prim->prec = p;
				l2->prim = p;
				parcurgere_lista2_direct(l2);
				cout << endl;
				parcurgere_lista2_invers(l2);
				cout<<endl;
				break;
			case 2: // adauga dupa elemnet cu valoare dat din lista
				// citim valoarea dupa care se adauga
				int y;
				numar2 *c; // c - elementul curent din lista
				cout<<"Valoare dupa care se face adaugarea y = ";
				cin>>y;
				c = l2->prim;
				while (c != NULL) {
					if (c->v == y) {
						// adauga valoare a dupa y
						if (c->urm == NULL) { // c este ultimul element din lista
							p = new numar2;
							p->v = a;
							p->urm = NULL;
							p->prec = c;
							c->urm = p;
							c=c->urm;
							l2->ultim = p;
						} else { // c se afla in interiorul listei
							p = new numar2;
							p->v = a;
							p->urm = c->urm;
							p->prec = c;
							c->urm->prec = p;
							c->urm=p;
							c=c->urm;
						}
					}
					c=c->urm;
				}// end while *c
				parcurgere_lista2_direct(l2);
				parcurgere_lista2_invers(l2);
				cout<<endl;
				break;
			case 3: // adauga la sfarsitul la listei
				p = new numar2;
				p->v = a;
				p->urm = NULL;
				p->prec = l2->ultim;
				l2->ultim->urm = p;
				l2->ultim = p;
				parcurgere_lista2_direct(l2);
				parcurgere_lista2_invers(l2);
				cout<<endl;
				break;
			case 0:
				cout<<"incheiat adaugare!"<<endl;
				break;
			default:
				cout<<"Optiune invalida!"<<endl;
				break;
		}// end switch
	} while(opa);
	return l2;
}

lista2 *modificare_in_lista2(lista2 *l2, int y, int w) {
	numar2 *c;
	for(c = l2->prim; c != NULL; c = c->urm) {
		if (c->v == y)
			c->v = w;
	}
	return l2;
}

lista2 *adaugare_in_lista2_ordonat(lista2 *l2, int a) {
	numar2 *c, *p;
	if (l2 == NULL) {
		l2 = new lista2;
		p=new numar2;
		p->v=a;
		p->urm = NULL;
		p->prec = NULL;
		l2->prim = p;
		l2->ultim = p;
	} else {
		c=l2->prim;
		bool ok = 0;
		while (c != NULL) {
			if(c->v <= a) {
				c=c->urm;
			} else {
				p = new numar2;
				p->v = a;
				if(l2->prim == c) {
					p->urm = l2->prim;
					l2->prim = p;
					ok = 1;
					break;
				} else {
					p->urm = c;
					p->prec = c->prec;
					c->prec = p;
					ok = 1;
					break;
				}
			}
		}
		if(ok == 0) {
			p = new numar2;
			p->v = a;
			l2->ultim->urm = p;
			p->prec = l2->ultim;
			l2->ultim = p;
		}
	}
	return l2;
}

// functii pentru stiva

numar *creare_stiva() {
	numar *c, *d;
	c = new numar;
	cout << "Dati capat stiva: ";
	cin >> c->v;
	c->urm = NULL;
	cout << "Dati numar elemente: ";
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		d = new numar;
		cout << "x = ";
		cin >> d->v;
		d->urm=c;
		c = d;
	}
	return c;
}

void parcurgere_stiva(numar *cap) {
	numar *c;
	cout << endl;
	if (cap == NULL)
		cout<<"Stiva este vida!"<<endl;
	else {
		c=cap;
		while (c != NULL) {
			cout<<c->v<< endl;
			c=c->urm;
		}
	}
}

numar *adaugare_stiva(numar* cap, int a) {
	numar *d = new numar;
	d->v = a;
	d->urm = cap;
	return d;
}

numar *stergere_stiva(numar *cap) {
	cap = cap->urm;
	return cap;
}

// functii pentru coada

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
	return L2;
}

void parcurgere_coada_direct(lista2 *coada) {
	numar2 *c;
	if (coada->prim == NULL)
		cout<<"Lista este vida!"<<endl;
	else {
		c=coada->prim;
		while (c != NULL) {
			cout<<c->v<<" ";
			c=c->urm;
		}
	}
}

void parcurgere_coada_invers(lista2 *coada) {
	numar2 *c;
	if (coada->ultim == NULL)
		cout<<"Lista este vida!"<<endl;
	else {
		c=coada->ultim;
		while (c != NULL) {
			cout<<c->v<<" ";
			c=c->prec;
		}
	}
}

lista2 *adaugare_coada(lista2 *coada, int a) {
	numar2 *p;
	p = new numar2;
	p->v = a;
	p->urm = NULL;
	p->prec = coada->ultim;
	coada->ultim->urm = p;
	coada->ultim = p;
	return coada;
}

lista2 *stergere_coada(lista2 *coada) {
	coada->prim->urm->prec = NULL;
	coada->prim = coada->prim->urm;
	return coada;
}

numar *creare_ordonata() {
	numar *l, *c, *p, *prec;
	int n, x, ok;
	cout << "Capat lista x= ";
	cin >> x;
	l = new numar;
	l->v = x;
	l->urm =  NULL;
	n = 1;
	ok = 1;
	while(ok != 0) {
		cout << "x= ";
		cin >> x;
		c = new numar;
		c->v = x;
		if(x <= l->v) {
			c->urm = l;
			l = c;
		} else {
			prec = l;
			p = l->urm;
			while(p != NULL) {
				if(p->v <= x) {
					prec = p;
					p = p->urm;
				} else {
					c->urm = p;
					prec->urm = c;
					break;
				}
			}
		}
		if(p == NULL) {
			c->urm = NULL;
			prec->urm = c;
		}
		cout << "Continuam cu adugarea in lista ordonata [1/0]? ";
		cin >> ok;
	}
	return l;
}

numar *interclasare(numar *l1, numar *l2) {
	numar *l, *p1, *p2;
	l = new numar;
	if(l1->v < l2->v) {
		l->v = l1->v;
		l->urm = NULL;
		p1 = l1->urm;
		p2 = l2;
	} else {
		l->v = l2->v;
		l->urm = NULL;
		p1 = l1;
		p2 = l2->urm;
	}
	numar *u, *c;
	u = l;
	while(p1 != NULL and p2 != NULL) {
		if(p1->v < p2->v) {
			c = new numar;
			c->v = p1->v;
			c->urm = NULL;
			u->urm = c;
			u = c;
			p1 = p1->urm;
		} else {
			c = new numar;
			c->v = p2->v;
			c->urm = NULL;
			u->urm = c;
			u = c;
			p2 = p2->urm;
		}
	}
	if(p1 != NULL) {
		while(p1 != NULL) {
			c = new numar;
			c->v = p1->v;
			c->urm = NULL;
			u->urm = c;
			u = c;
			p1 = p1->urm;
		}
	}
	if(p2 != NULL) {
		while(p1 != NULL) {
			c = new numar;
			c->v = p2->v;
			c->urm = NULL;
			u->urm = c;
			u = c;
			p2 = p2->urm;
		}
	}
	return l;
}

monom *creare_polinom() {
	//Initializare variabile
	int n,g;
	float co;
	monom *cap,*u,*c;

	//Citire numar de monoame din polinom
	cout<<endl<<"Introduceti numarul de monoame din polionom: n=";
	cin>>n;

	//Introducere date pentru primul monom
	cout<<endl<<"Introduceti gradul monomului: gr=";
	cin>>g;
	cout<<endl<<"Introduceti coeficientul monomului: c=";
	cin>>co;

	cap=new monom;
	cap->grad=g;
	cap->coef=co;
	cap->urm=NULL;

	//Adaugare n-1 monoame
	u=cap;      //ultimul element din lista
	int i;      //contor monoame
	for(i=2; i<=n; i++) {
		//Citim noul element de adaugat
		cout<<endl<<"Introduceti gradul monomului: gr=";
		cin>>g;
		cout<<endl<<"Introduceti coeficientul monomului: c=";
		cin>>co;
		//Il adaugam in lista
		c=new monom;
		c->grad=g;
		c->coef=co;
		c->urm=NULL;
		u->urm=c;
		u=c;
	}
	return cap;
}

void afisare_polinom(monom *polinom) {
	monom *c;
	if(polinom==NULL)
		cout<<endl<<"Polinomul este nul!";
	else {
		c=polinom;
		while(c!=NULL) {
			cout<<"("<<c->coef<<")x^"<<c->grad;
			if(c->urm!=NULL)
				cout<<"+";
			c=c->urm;
		}
		cout<<endl;
	}
}

monom *reducere_termeni(monom *S) {
	monom *c,*c1,*r1;
	if(S==NULL)
		return S;
	c=S;
	int k=0;
	while(c!=NULL && c->urm != NULL) {
		if(c->urm!=NULL) {
			c1=c->urm;
			r1=c;       //memoreaza precedentul lui c1
			while(c1!=NULL) {
				if((c1->grad)==(c->grad)) {
					c->coef=(c->coef)+(c1->coef);
					if(c1->urm!=NULL) {
						//stergem lista c1 din lista S
						r1->urm=c1->urm;
					} else { //c1->urm este NULL
						r1->urm=NULL;
						if(c->urm==c1)
							c->urm=NULL;
					}
					c1=c1->urm;
				} else {
					r1=c1;
					c1=c1->urm;
				}
			}
			k++;
			c=c->urm;
		}
	}
	return S;
}

monom *adunare_polinoame(monom *p1,monom *p2) {
	//Initializare variabile
	monom *S,*c,*u,*r;

	//Initializare polinom in care adugam cele 2 polinoame
	S=new monom;
	S->grad=p1->grad;
	S->coef=p1->coef;
	S->urm=NULL;

	//Parcurgere p1
	c=p1->urm;
	u=S;        //ultimul element din S
	while(c!=NULL) {
		r=new monom;
		r->grad=c->grad;
		r->coef=c->coef;
		r->urm=NULL;
		u->urm=r;
		u=r;

		c=c->urm;
	}
	//Parcurgere p2
	c=p2;
	while(c!=NULL) {
		r=new monom;
		r->grad=c->grad;
		r->coef=c->coef;
		r->urm=NULL;
		u->urm=r;
		u=r;

		c=c->urm;
	}
	return S;
}

monom *inmultire_polinoame(monom *p1,monom *p2) {
	//Initializare variabila in care stocam produsul polinoamelor
	monom *P,*c1,*c2,*u,*r;
	P=new monom;
	P->grad=0;
	P->coef=0;
	P->urm=NULL;

	u=P;    //ultimul element
	c1=p1;  //monomul curent in p1

	while(c1!=NULL) {
		c2=p2;  //monomul curent in p2
		while(c2!=NULL) {
			r=new monom;
			r->grad=(c1->grad)+(c2->grad);
			r->coef=(c1->coef)*(c2->coef);
			r->urm=NULL;
			u->urm=r;
			u=r;
			c2=c2->urm;
		}
		c1=c1->urm;
	}
	//Stergem monomul nul pus la inceput in P
	P=P->urm;
	P=reducere_termeni(P);
	return P;
}

int main() {
	int op3;
	do {
		cout<<"LISTE DINAMICE"<<endl;
		cout<<"   3.1. Liste simplu inlantuite"<<endl;
		cout<<"   3.2. Liste dublu inlantuite"<<endl;
		cout<<"   3.3. Stive"<<endl;
		cout<<"   3.4. Cozi"<<endl;
		cout<<"   3.5. Creare unei liste de numere intregi ordonate (din citire)"<<endl;
		cout<<"   3.6. Interclasarea a doua 2 liste de numere intregi ordonate"<<endl;
		cout<<"   3.7. Adunarea polinoamelor cu liste dinamice"<<endl;
		//cout<<"   3.8. Verificarea corectitudinii parantezelor intr-o expresie aritmetica, cu stive"<<endl;
		// se mai adauga alte aplicatii
		cout<<"   3.0. Exit capitol 3!"<<endl;
		// mai adaugam  aplicatii

		cout<<"Optiune capitol 3: ";
		cin>>op3;
		switch (op3) {
			case 1: {
				//liste simplu inlantuite
				numar *lista;
				// creare lista
				lista=creare_lista();
				cout<<"Lista dupa creare este: ";
				parcurgere_lista(lista);
				cout<<endl;
				// stergere din lista
				lista=stergere_din_lista(lista);
				cout<<"Lista dupa stergere este: ";
				parcurgere_lista(lista);
				cout<<endl;
				// adaugare in lista
				int ad;
				cout<<"Valoare de adaugat: ";
				cin>>ad;
				lista=adaugare_in_lista(lista,ad);
				cout<<"Lista dupa adaugare este: ";
				parcurgere_lista(lista);
				cout<<endl;
				// modificare element in lista
				int y,w;
				cout<<"Modificare a elementului y = ";
				cin>>y;
				cout<<"cu valoarea w = ";
				cin>>w;
				lista=modificare_in_lista(lista,y,w);
				cout<<"Lista dupa modificare este: ";
				parcurgere_lista(lista);
				cout<<endl;
				break;
			}

			case 2: { // liste dublu inlantuite
				cout<<"Liste dublu inlantuite"<<endl;
				lista2 *l2;
				l2=creare_lista_2();
				cout<<"Lista dupa creare este: ";
				parcurgere_lista2_direct(l2);
				cout << "Lista parcursa invers este: ";
				parcurgere_lista2_invers(l2);
				cout<<endl;
				// stergere din lista
				l2=stergere_din_lista2(l2);
				cout<<"Lista dupa stergere este: ";
				parcurgere_lista2_direct(l2);
				cout<<endl;
				// adaugare in lista
				int ad;
				cout<<"Valoare de adaugat: ";
				cin>>ad;
				l2=adaugare_in_lista2(l2,ad);
				cout<<"Lista dupa adaugare este: ";
				parcurgere_lista2_direct(l2);
				cout<<endl;
				// modificare element in lista
				int y,w;
				cout<<"Modificare a elementului y = ";
				cin>>y;
				cout<<"cu valoarea w = ";
				cin>>w;
				l2 = modificare_in_lista2(l2, y, w);
				cout<<"Lista dupa modificare este: ";
				parcurgere_lista2_direct(l2);
				cout << endl;
				parcurgere_lista2_invers(l2);
				cout<<endl << endl;
				break;
			}

			case 3: { //stive
				cout<<"Stive"<<endl;
				cout << "Creare stiva: "<< endl;
				numar *s = creare_stiva();
				cout << "Stiva dupa creare: ";
				parcurgere_stiva(s);
				cout << endl;
				cout << "Adaugare element in stiva: " << endl;
				cout << "Valoare de adaugat: ";
				int x;
				cin >> x;
				s = adaugare_stiva(s, x);
				cout << "Stiva dupa adaugare: ";
				parcurgere_stiva(s);
				cout << endl;
				cout << "Stergere un element din stiva: " << endl;
				s = stergere_stiva(s);
				cout << "Stiva dupa stergere: ";
				parcurgere_stiva(s);
				cout << endl << endl;
				break;
			}
			case 4: { // cozi
				cout<<"Cozi"<<endl;
				cout << "Creare coada: "<< endl;
				lista2 *c = creare_coada();
				cout << "Coada dupa creare:" << endl;
				cout << "Parcurgere directa: ";
				parcurgere_coada_direct(c);
				cout << endl;
				cout << "Parcurgere inversa: ";
				parcurgere_coada_invers(c);
				cout << endl;
				cout << "Adaugare element in coada: " << endl;
				cout << "Valoare de adaugat: ";
				int x;
				cin >> x;
				c = adaugare_coada(c, x);
				cout << "Coada dupa adaugare:" << endl;
				parcurgere_coada_direct(c);
				cout  << endl;
				parcurgere_coada_invers(c);
				cout << endl;
				cout << "Stergere un element din coada:" << endl;
				c = stergere_coada(c);
				cout << "Coada dupa stergere:" << endl;
				parcurgere_coada_direct(c);
				cout  << endl;
				parcurgere_coada_invers(c);
				cout << endl;
				break;
			}

			case 5: { // creare unei liste ordonata din citire
				numar *lo;
				lo = creare_ordonata();
				parcurgere_lista(lo);
				cout << endl << endl;
				break;
			}
			case 6: // interclasarea a doua liste ordonate
				numar *li, *l1, *l2;
				cout << "Lista 1: " << endl;
				l1 = creare_ordonata();
				parcurgere_lista(l1);
				cout << endl;
				cout << "Lista 2: " << endl;
				l2 = creare_ordonata();
				parcurgere_lista(l2);
				cout << endl;
				li = interclasare(l1, l2);
				cout << "Listele interclasate: ";
				parcurgere_lista(li);
				cout << endl << endl;
				break;

			case 7: // adunarea a doua polinoame
				monom *p1,*p2, *s, *p;
				// citeste primul polinom
				p1=creare_polinom();
				cout<<"p1 = ";
				afisare_polinom(p1);
				cout << endl;
				p2=creare_polinom();
				cout<<"p2 = ";
				afisare_polinom(p2);
				cout << endl;
				s=adunare_polinoame(p1,p2);
				cout<<"Suma polinoamelor este s = ";
				afisare_polinom(s);
				p=inmultire_polinoame(p1,p2);
				cout<<"Produsul polinoamelor este p = ";
				afisare_polinom(p);
				cout << endl;
				break;

			case 0: {
				cout<<"Terminat capitol 3!"<<endl;
				break;
			}
			default: {
				cout<<"Optiune invalida capitol 3!"<<endl;
				break;
			}
		}// end swicth op3
	} while(op3); // end do - while cap3
	return 0;
}
