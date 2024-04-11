#include "Persoana.h"

class Student : public Persoana{
protected:
    int *note;
    int nr_note;
public:
	Student();
	Student(string, int, int*, int);
	Student(Student &);
	~Student();
	Student & operator=(const Student &);
	void afisare();
	float medie();
	bool restanta();
};
