#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

long int factorial(int n) {
	if(n == 0 or n == 1) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}

long int ackermann(int m, int n) {
	if(m == 0) return n+1;
	if(n == 0) return ackermann(m-1, 1);
	return ackermann(m-1, ackermann(m, n-1));
}

int part(int n, int k) {
	if(k == 1 or k == n) {
		return 1;
	}
	if(k == 2) {
		return pow(2, n-1)-1;
	}
	if(k > n) {
		return 0;
	}
	return part(n-1, k-1) + k * part(n-1, k);
}

void afisare(int n, int x, int y) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j == x and i == y) {
				cout << "# ";
			} else {
				cout << ". ";
			}
		}
		cout << endl;
	}
}

void stanga(int n, int x, int y);

void coboara(int n, int x, int y) {
	y++;
	afisare(n, x, y);
	cout << endl;
	if(x < n-1) {
		stanga(n, x, y);
	}
}

void stanga(int n, int x, int y) {
	x++;
	afisare(n, x, y);
	cout << endl;
	if(y < n-1) {
		coboara(n, x, y);
	}
}

void hanoi(int m, int i, int j) {
	if(m == 1) {
		cout << "(" << i << "," << j << ") ";
	} else {
		int k = 6-i-j;
		hanoi(m-1, i, k);
		cout << "(" << i << "," << j << ") ";
		hanoi(m-1, k, j);
	}
}

// Functie care gaseste minimul si maximul dintr-un sub-sir dat
void gasesteMinMax(const vector<int>& arr, int stanga, int dreapta, int& minVal, int& maxVal) {
	if (stanga == dreapta) {
		// Daca avem doar un element, acel element este atat minimul cât si maximul
		minVal = maxVal = arr[stanga];
		return;
	}

	if (dreapta - stanga == 1) {
		// Daca avem doua elemente, comparam si setam minimul si maximul
		if (arr[stanga] < arr[dreapta]) {
			minVal = arr[stanga];
			maxVal = arr[dreapta];
		} else {
			minVal = arr[dreapta];
			maxVal = arr[stanga];
		}
		return;
	}

	// Împartim sub-sirul în doua jumatati
	int mijloc = (stanga + dreapta) / 2;
	int minStanga, maxStanga, minDreapta, maxDreapta;
	gasesteMinMax(arr, stanga, mijloc, minStanga, maxStanga);
	gasesteMinMax(arr, mijloc + 1, dreapta, minDreapta, maxDreapta);

	// Combinam minimul si maximul din cele doua jumatati
	minVal = min(minStanga, minDreapta);
	maxVal = max(maxStanga, maxDreapta);
}


// Functie care calculeaza c.m.m.d.c. a doua numere
int cmmdc(int a, int b) {
	if (b == 0) {
		return a;
	}
	return cmmdc(b, a % b);
}

// Functie care calculeaza c.m.m.d.c. a unui subsir de numere folosind divide et impera
int cmmdcDivideEtImpera(const vector<int>& arr, int stanga, int dreapta) {
	if (stanga == dreapta) {
		return arr[stanga];
	} else if (dreapta - stanga == 1) {
		return cmmdc(arr[stanga], arr[dreapta]);
	} else {
		int mijloc = (stanga + dreapta) / 2;
		int cmmdcStanga = cmmdcDivideEtImpera(arr, stanga, mijloc);
		int cmmdcDreapta = cmmdcDivideEtImpera(arr, mijloc + 1, dreapta);
		return cmmdc(cmmdcStanga, cmmdcDreapta);
	}
}

int main() {

	int optiune;
	cout << "Alegeti o optiune:\n";
	cout << "1. Factorial\n";
	cout << "2. Functia Ackermann\n";
	cout << "3. Numarul de partitii ale unei multimi\n";
	cout << "4. Recursivitate indirecta\n";
	cout << "5. Problema turnurilor din Hanoi\n";
	cout << "6. Gasire minim si maxim folosind \"divide et impera\"\n";
	cout << "7. Determinarea c.m.m.d.c pentru un sir de numere folosind \"divide et impera\"\n";
	cin >> optiune;

	switch (optiune) {
		case 1: {
			int n;
			cout << "Dati n: ";
			cin >> n;
			cout << n << "! = " << factorial(n);
			break;
		}
		case 2: {
			int m, n;
			cout << "Dati m: ";
			cin >> m;
			cout << "Dati n: ";
			cin >> n;
			cout << ackermann(m, n);
			break;
		}
		case 3: {
			int n, k;
			cout << "Dati n: ";
			cin >> n;
			cout << "Dati k: ";
			cin >> k;
			cout << "Nr. de partitii = " << part(n, k);
			break;
		}
		case 4: {
			int n = 5;
			afisare(n, 0, 0);
			cout << endl;
			coboara(n, 0, 0);
			break;
		}
		case 5: {
			hanoi(3, 1, 3);
			break;
		}
		case 6: {
			vector<int> arr = {5, 7, 2, 8, 1, 9, 4};
			int minVal, maxVal;

			// Determinam minimul si maximul din sir
			gasesteMinMax(arr, 0, arr.size() - 1, minVal, maxVal);

			// Afisam minimul si maximul
			cout << "Minimul este: " << minVal << endl;
			cout << "Maximul este: " << maxVal << endl;
			break;
		}
		case 7: {
			vector<int> arr = {12, 18, 24, 30};

			// Determinam c.m.m.d.c. pentru sirul de numere
			int rezultat = cmmdcDivideEtImpera(arr, 0, arr.size() - 1);

			cout << "Cel mai mare divizor comun pentru sirul dat este: " << rezultat << endl;

			break;
		}
		default:
			cout << "Optiune invalida\n";
	}


	return 0;
}
