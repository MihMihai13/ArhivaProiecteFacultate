#include<string>
#include<iostream>
using namespace std;

class Produs{
protected: 
   string cod;
   int pret;
public:
	Produs();
	Produs(string, int);
	void afisare();
}; 

