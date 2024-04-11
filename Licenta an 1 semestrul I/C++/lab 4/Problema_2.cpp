#include<iostream>
using namespace std;

int main () {
	char cnp[14];
	cout << "Dati CNP: ";
	cin >> cnp;
	int s = (int)cnp[0] - 48;
	char aaaa[5];
	if (s<3) {
		aaaa[0]='1';
		aaaa[1]='9';
	} else if (s >= 3 && s < 5) {
		aaaa[0]='1';
		aaaa[1]='8';
	} else if (s >= 5 && s < 7) {
		aaaa[0]='2';
		aaaa[1]='0';
	aaaa[2]= cnp[1];
	aaaa[3]= cnp[2];
	char ll[3]={cnp[3],cnp[4]};	
	char zz[3]={cnp[5],cnp[6]};
	cout<<zz << "." << ll << "." << aaaa;
	return 0;
	}
}
