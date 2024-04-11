#include <iostream>

using namespace std;

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
	int n;
	cout << "Introduceti dimensiunea tablei de sah (n x n): ";
	cin >> n;

	int tabla[8][8] = {0};

	rezolvaPlasareaCalului(tabla, n, 0);

	return 0;
}

