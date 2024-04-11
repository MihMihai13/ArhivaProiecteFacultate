#pragma once

class Proprietate {
protected: 
   char *tip;
   double valoare;
public:
	Proprietate();
	Proprietate(char*, double);
	Proprietate(const Proprietate&);
	virtual Proprietate & operator=(const Proprietate&);
	virtual ~Proprietate();
	virtual afisare();
	virtual double venit_luna();
	double get_valoare();
};
