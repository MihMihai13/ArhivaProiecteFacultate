#include <iostream>
#include <cmath>

using namespace std;

// Functie pentru interschimbarea a doua valori
void interschimba(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// Functie pentru generarea permutarilor
void genereazaPermutari(int num[], bool folosit[], int curent[], int dimensiune, int index) {
	// Verificam daca am generat o permutare completa
	if (index == dimensiune) {
		// Afisam permutarea curenta
		for (int i = 0; i < dimensiune; ++i) {
			cout << curent[i] << " ";
		}
		cout << endl;
		return;
	}

	// Iteram prin toate elementele
	for (int i = 0; i < dimensiune; ++i) {
		// Verificam daca elementul este deja folosit
		if (!folosit[i]) {
			// Marcam elementul ca fiind folosit
			folosit[i] = true;
			// Adaugam elementul în permutarea curenta
			curent[index] = num[i];
			// Generam permutarile pentru restul elementelor
			genereazaPermutari(num, folosit, curent, dimensiune, index + 1);
			// Resetam marcarea pentru a putea folosi elementul în alte permutari
			folosit[i] = false;
		}
	}
}

// Functie pentru generarea combinatiilor
void genereazaCombinari(int num[], int n, int k, int start, int curent[], int index) {
	// Verificam daca am completat combinatia curenta
	if (index == k) {
		// Afisam combinatia curenta
		for (int i = 0; i < k; ++i) {
			cout << curent[i] << " ";
		}
		cout << endl;
		return;
	}

	// Iteram prin elementele ramase
	for (int i = start; i < n; ++i) {
		// Adaugam elementul curent în combinatie
		curent[index] = num[i];
		// Generam combinatiile pentru restul elementelor
		genereazaCombinari(num, n, k, i + 1, curent, index + 1);
	}
}

// Functie pentru generarea aranjamentelor
void genereazaAranjamente(int num[], int n, int k, int curent[], bool folosit[], int index) {
	// Verificam daca am completat aranjamentul curent
	if (index == k) {
		// Afisam aranjamentul curent
		for (int i = 0; i < k; ++i) {
			cout << curent[i] << " ";
		}
		cout << endl;
		return;
	}

	// Iteram prin toate elementele
	for (int i = 0; i < n; ++i) {
		// Verificam daca elementul este disponibil
		if (!folosit[i]) {
			// Adaugam elementul curent în aranjament
			curent[index] = num[i];
			// Marcam elementul ca fiind folosit
			folosit[i] = true;
			// Generam aranjamentele pentru restul elementelor
			genereazaAranjamente(num, n, k, curent, folosit, index + 1);
			// Resetam marcarea pentru a putea folosi elementul în alte aranjamente
			folosit[i] = false;
		}
	}
}

// Functie pentru afisarea tablei de sah
void afiseazaTabla(int tablou[], int dimensiune) {
	for (int i = 0; i < dimensiune; ++i) {
		for (int j = 0; j < dimensiune; ++j) {
			if (tablou[i] == j) {
				cout << "# "; // Afisam "#" pentru piesa plasata la pozitia (i, j)
			} else {
				cout << ". "; // Afisam "." pentru spatii libere
			}
		}
		cout << endl;
	}
	cout << endl;
}

// Functie pentru verificarea daca o regina poate fi plasata la o anumita pozitie pe tabla de sah
bool verifica(int tablou[], int linie, int coloana) {
	for (int i = 0; i < linie; ++i) {
		if (tablou[i] == coloana || abs(i - linie) == abs(tablou[i] - coloana)) {
			return false; // Nu putem plasa regina aici daca exista o alta regina pe aceeasi coloana sau diagonala
		}
	}
	return true; // Putem plasa regina aici
}

// Functie pentru generarea aranjamentelor reginelor pe tabla de sah
void genereazaAranjamenteRegine(int dimensiune, int linie, int tablou[], int nr_regine, int regine_plasate, bool& solutie_gasita) {
	// Verificam daca am completat toate liniile tablei de sah
	if (linie == dimensiune) {
		// Verificam daca am plasat numarul corect de regine
		if (regine_plasate == nr_regine) {
			afiseazaTabla(tablou, dimensiune); // Afisam tabla de sah cu reginele plasate
			solutie_gasita = true; // Marcam ca s-a gasit cel putin o solutie
		}
		return;
	}

	// Iteram prin coloanele posibile ale liniei curente
	for (int coloana = 0; coloana < dimensiune; ++coloana) {
		// Verificam daca putem plasa regina la pozitia (linie, coloana)
		if (verifica(tablou, linie, coloana)) {
			tablou[linie] = coloana; // Plasam regina la pozitia (linie, coloana) pe tabla de sah
			// Continuam cu plasarea reginelor pe linia urmatoare
			genereazaAranjamenteRegine(dimensiune, linie + 1, tablou, nr_regine, regine_plasate + 1, solutie_gasita);
			tablou[linie] = -1; // Resetam pozitia reginei pentru a explora alte aranjamente
		}
	}

	// Daca nu s-a gasit nicio solutie pentru linia curenta si nu s-a gasit deja o solutie, marcam ca nu s-a gasit nicio solutie
	if (!solutie_gasita) {
		solutie_gasita = false; // Marcam ca nu s-a gasit nicio solutie
	}

	// Continuam cu plasarea reginelor pe linia urmatoare, fara a plasa regina la pozitia curenta
	genereazaAranjamenteRegine(dimensiune, linie + 1, tablou, nr_regine, regine_plasate, solutie_gasita);
}

// Functie pentru verificarea daca o tura poate fi plasata la o anumita pozitie pe tabla de sah
bool verificaTura(int tablou[], int linie, int coloana) {
	for (int i = 0; i < linie; ++i) {
		if (tablou[i] == coloana) {
			return false; // Nu putem plasa tura aici daca exista o alta tura pe aceeasi coloana
		}
	}
	return true; // Putem plasa tura aici
}

// Functie pentru generarea aranjamentelor turilor pe tabla de sah
void genereazaAranjamenteTure(int dimensiune, int linie, int tablou[], int nr_ture, int ture_plasate, bool& solutie_gasita) {
	// Verificam daca am completat toate liniile tablei de sah
	if (linie == dimensiune) {
		// Verificam daca am plasat numarul corect de ture
		if (ture_plasate == nr_ture) {
			afiseazaTabla(tablou, dimensiune); // Afisam tabla de sah cu turile plasate
			solutie_gasita = true; // Marcam ca s-a gasit cel putin o solutie
		}
		return;
	}

	// Iteram prin coloanele posibile ale liniei curente
	for (int coloana = 0; coloana < dimensiune; ++coloana) {
		// Verificam daca putem plasa tura la pozitia (linie, coloana)
		if (verificaTura(tablou, linie, coloana)) {
			tablou[linie] = coloana; // Plasam tura la pozitia (linie, coloana) pe tabla de sah
			// Continuam cu plasarea turilor pe linia urmatoare
			genereazaAranjamenteTure(dimensiune, linie + 1, tablou, nr_ture, ture_plasate + 1, solutie_gasita);
			tablou[linie] = -1; // Resetam pozitia turei pentru a explora alte aranjamente
		}
	}

	// Daca nu s-a gasit nicio solutie pentru linia curenta si nu s-a gasit deja o solutie, marcam ca nu s-a gasit nicio solutie
	if (!solutie_gasita) {
		solutie_gasita = false; // Marcam ca nu s-a gasit nicio solutie
	}

	// Continuam cu plasarea turilor pe linia urmatoare, fara a plasa tura la pozitia curenta
	genereazaAranjamenteTure(dimensiune, linie + 1, tablou, nr_ture, ture_plasate, solutie_gasita);
}

// Functia pentru a verifica daca un cal poate fi plasat intr-o pozitie data
bool poatePlasaCal(int tabla[][8], int n, int rand, int coloana) {
	static int mutareRand[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
	static int mutareColoana[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

	for (int i = 0; i < 8; i++) {
		int nouRand = rand + mutareRand[i];
		int nouColoana = coloana + mutareColoana[i];
		if (nouRand >= 0 && nouRand < n && nouColoana >= 0 && nouColoana < n && tabla[nouRand][nouColoana] == 1)
			return false;
	}
	return true;
}

void afiseazaTabla(int tabla[][8], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << tabla[i][j] << " ";
		}
		cout << endl;
	}
}

bool rezolvaPlasareaCalului(int tabla[][8], int n, int rand) {
	// Cazul de baza: Tabla este completa
	if (rand == n) {
		afiseazaTabla(tabla, n);
		cout << endl; // Adauga o linie noua dupa fiecare solutie
		return true;
	}

	// Incearca sa plaseze calul in toate pozitiile posibile in randul curent
	for (int coloana = 0; coloana < n; coloana++) {
		if (poatePlasaCal(tabla, n, rand, coloana)) {
			tabla[rand][coloana] = 1;

			// Recursiv pentru urmatorul rand
			rezolvaPlasareaCalului(tabla, n, rand + 1);

			// Backtrack daca plasarea nu duce la o solutie
			tabla[rand][coloana] = 0;
		}
	}

	// Daca nicio pozitie nu functioneaza pentru randul curent, returneaza false
	return false;
}

int main() {
	int optiune, k, n;
	cout << "Alegeti o optiune:\n";
	cout << "1. Genereaza permutari\n";
	cout << "2. Genereaza combinari\n";
	cout << "3. Genereaza aranjamente\n";
	cout << "4. Rezolva problema reginelor\n";
	cout << "6. Rezolva problema calutilor\n";
	cin >> optiune;

	switch (optiune) {
		case 1: {
			cout << "Introduceti valoarea lui n: ";
			cin >> n;

			int num[n];
			bool folosit[n] = {false};
			int curent[n];

			for (int i = 0; i < n; ++i) {
				num[i] = i + 1;
			}

			// Apelam functia pentru generarea permutarilor
			genereazaPermutari(num, folosit, curent, n, 0);

			break;
		}
		case 2: {
			cout << "Introduceti valoarea lui n: ";
			cin >> n;
			cout << "Introduceti valoarea lui k: ";
			cin >> k;
			int num[n];
			for (int i = 0; i < n; ++i) {
				num[i] = i + 1;
			}
			int curent[k];
			// Apelam functia pentru generarea combinatiilor
			genereazaCombinari(num, n, k, 0, curent, 0);
			break;
		}
		case 3: {
			cout << "Introduceti valoarea lui n: ";
			cin >> n;
			cout << "Introduceti valoarea lui k: ";
			cin >> k;
			int num[n];
			for (int i = 0; i < n; ++i) {
				num[i] = i + 1;
			}
			int curent[k];
			bool folosit[n] = {false};
			// Apelam functia pentru generarea aranjamentelor
			genereazaAranjamente(num, n, k, curent, folosit, 0);
			break;
		}
		case 4: {
			int dimensiune, nr_regine;
			cout << "Introduceti dimensiunea tablei de sah: ";
			cin >> dimensiune;
			cout << "Introduceti numarul de regine: ";
			cin >> nr_regine;
			int tablou[dimensiune];
			bool solutie_gasita = false; // Initializam variabila pentru a marca daca s-a gasit cel putin o solutie
			genereazaAranjamenteRegine(dimensiune, 0, tablou, nr_regine, 0, solutie_gasita); // Rezolvam problema reginelor
			if (!solutie_gasita) {
				cout << "Nu exista solutii pentru aceasta configuratie a tablei de sah si numarul de regine specificat.\n";
			}
			break;
		}
		case 5: {
			int dimensiune_ture, nr_ture;
			cout << "Introduceti dimensiunea tablei de sah pentru problemele cu turele: ";
			cin >> dimensiune_ture;
			cout << "Introduceti numarul de ture: ";
			cin >> nr_ture;
			int tablou_ture[dimensiune_ture];
			bool solutie_gasita_ture = false; // Initializam variabila pentru a marca daca s-a gasit cel putin o solutie pentru problemele cu turele
			genereazaAranjamenteTure(dimensiune_ture, 0, tablou_ture, nr_ture, 0, solutie_gasita_ture); // Rezolvam problema turelor
			if (!solutie_gasita_ture) {
				cout << "Nu exista solutii pentru aceasta configuratie a tablei de sah si numarul de ture specificat.\n";
			}
			break;
		}
		case 6: {
			int n;
			cout << "Introduceti dimensiunea tablei de sah (n x n): ";
			cin >> n;

			int tabla[8][8] = {0};
			int solutiiGasite = 0;
			bool toateSolutiileGasite = false;

			rezolvaPlasareaCalului(tabla, n, 0);
			break;
		}
		default:
			cout << "Optiune invalida\n";
	}

	return 0;
}

