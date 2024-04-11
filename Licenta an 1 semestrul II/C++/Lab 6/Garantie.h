#include<iostream>
#include<string>
using namespace std;

class Garantie {
  int nr_luni;
  string service;
public:
	Garantie();
	Garantie(Garantie &);
	Garantie(int, string);
	Garantie & operator=(const Garantie &);
	friend ostream& operator<<(ostream &,const Garantie &);
};

