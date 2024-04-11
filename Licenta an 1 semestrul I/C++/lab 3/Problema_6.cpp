#include <iostream>
using namespace std;

int main() {
	int l1, c1, l2, c2;
	//salvez dimensiunile matricelor
	cout <<"Dati l1: ";
	cin >> l1;
	cout << "Dati c1: ";
	cin >> c1;
	cout << "Dati l2: ";
	cin >> l2;
	cout << "Dati c2: ";
	cin >> c2;
	int A[l1][c1], B[l2][c2];
	//citesc matricea A
	for(int i = 0; i <l1; i++)
		for(int j = 0; j < c1; j++){
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	cout << endl;
	//citesc matricea B		
	for(int i = 0; i <l2; i++)
		for(int j = 0; j < c2; j++){
			cout << "B[" << i << "][" << j << "]=";
			cin >> B[i][j];
		}
	//verific daca se popate calcula suma iar in caz afirmativ o calculez
	int s[l1][c1];
	if(l1 == l2 && c1 == c2){
		for(int i = 0; i <l1; i++)
			for(int j = 0; j < c1; j++)
				s[i][j] = A[i][j] + B[i][j];
		//afisez rezultatul sumei
		for(int i = 0; i <l1; i++) {
			for(int j = 0; j < c1; j++)
				cout << s[i][j] << " ";
			cout << endl;
		}
		cout << endl;
	} else
		cout << "Suma nu poate fi calculata" << endl;
	//verific daca se poate calcula produsul iar in caz afirmativ il calculez
	int l, c, z;
	if(l2 == c1){
		int p[l1][c2];
		for(int i = 0; i < l1; i++)
			for(int j = 0; j < c2; j++)
				p[i][j] = 0;
		for(int i = 0; i < l1; i++)
			for(int j = 0; j < c2; j++)
				for(int x = 0; x < c1; x++)
					p[i][j]+=A[i][x]*B[x][j];
		//afisez rezultatul produsului
		for(int i = 0; i <l1; i++) {
			for(int j = 0; j < c2; j++)
				cout << p[i][j] << " ";
			cout << endl;
		}
	} else
		cout << "Nu se poate calcula produsul";
	return 0;
}
