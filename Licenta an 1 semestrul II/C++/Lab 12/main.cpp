#include <iostream>
#include <vector>
#include <string>
#include "modul_hardware.h"
#include "produs_software.h"
#include "produs_mixt.h"
#include "produs.h"

using namespace std;

int main() {
	vector<Produs*> v;
	v.push_back(new produs_software(50));
	vector<Piesa> p;
	p.push_back(Piesa("64", 59));
	p.push_back(Piesa("3135", 6942));
	v.push_back(new modul_hardware(p, 2, 100, 15));
	vector<string> func;
//	func.push_back(string("functionalitate"));
//	v.push_back(new produs_mixt(modul_hardware(p, 2, 100, 15), produs_software(50), func, 1));

	vector<Produs*>::iterator it = v.begin();
//	cout << (*it)->getpret();
	(*it)->afis_fisier();
	it++;
	(*it)->afis_fisier();
	return 0;
}
