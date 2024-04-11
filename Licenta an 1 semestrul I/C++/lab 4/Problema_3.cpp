#include<iostream>
using namespace std;

int main () {
	int l;
	cout << "Dati lungimea sirului: ";
	cin >> l; //citim lungimea sirului
	char s[l+1];
	//citesc componenta sirului
	cout << "Dati sirul: ";
	cin.ignore();
	cin.getline (s, l+1);
	int k;
	cout << "Dati lungimea secventei: ";
	cin >> k; //citesc lungimea secventei
	char x[k+1];
	//citesc componenta secventei
	cout << "Dati secventa: ";
	cin.ignore();
	cin.getline (x, k+1);
	//verific aparitia sirului
	bool test=false;
	int ap=0;
	for(int i = 0; i <= l-k; i++) {
		if(s[i] == x[0])
			for(int j = 0; j < k; j++)
				s[i+j]==x[j]?test=true:test=false;
		if(test==true)
			ap++;
		test=false;
	}
	//afisez rezultatul
	cout << "Nr. aparitii: " << ap;
	return 0;
}
