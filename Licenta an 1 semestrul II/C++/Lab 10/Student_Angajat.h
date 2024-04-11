#include "Student.h"
#include "Angajat.h"

class Student_Angajat : public Student, public Angajat{
public:
	Student_Angajat(int, string, int, int*, int, string, int);
	void afisare();
	int venit();
}; 
