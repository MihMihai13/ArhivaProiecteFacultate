#include"Electrocasnic.h"

class TV: public Electrocasnic{
    double diagonala;
    string *proprietati;
    int nr_proprietati;
public:
	TV();
	TV(string, int, char*, double, string*, int);
	TV(const TV&);
	TV & operator=(const TV&);
	~TV();
	void afisare();
	int get_pret();
	string get_marca();
	double get_diagonala();
};  

