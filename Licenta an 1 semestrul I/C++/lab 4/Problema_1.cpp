#include<iostream>
using namespace std;

int main () {
	int l;
	cout << "Dati lungimea sirului: ";
	cin >> l; //citesc lungimea sirului
	char s[l+1];
	//citesc componenta sirului
	cout << "Dati sirul: ";
	cin.ignore();
	cin.getline (s, l+1);
	//secventa transforma litere mari/mici in litere mici/mari
	for (int i = 0; i < l; i++){
		if(s[i] >= 65 && s[i] <= 90)
			s[i]+=32;
		else if(s[i] >= 97 && s[i] <= 122)
			s[i]-=32;
	}
	//afisez sirul transformat
	cout << "Sirul transformat: " << s << endl;
	//secventa numara literele mari, mici si cifrele
	int litMare=0, litMica=0, cif=0;
	for (int i = 0; i < l; i++){
		if(s[i] >= 65 && s[i] <= 90)
			litMare++;
		else if(s[i] >= 97 && s[i] <= 122)
			litMica++;
		else if(s[i] >= 48 && s[i] <= 57)
			cif++;
	}
	//afisez rezultatul secventei anterioare
	cout << "Nr. litere mari: " << litMare << "\nNr. litere mici: " << litMica << "\nNr. cifre: " << cif;
	return 0;
}
