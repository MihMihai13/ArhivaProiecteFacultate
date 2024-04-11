#include <iostream>

using namespace std;

int normaInf(int A[100][100], int n, int m) {
	int norma, x = 0;
	for(int j = 0; j < m; j++) {
		x += A[0][j];
	}
	norma = x;
	x = 0;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < m; j++) {
			x += A[i][j];
		}
		if(norma < x) {
			norma = x;
		}
		x = 0;
	}
	return norma;
}

int norma1(int A[100][100], int n, int m) {
	int norma, x = 0;
	for(int i = 0; i < n; i++) {
		x += A[i][0];
	}
	norma = x;
	x = 0;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < m; j++) {
			x += A[j][i];
		}
		if(norma < x) {
			norma = x;
		}
		x = 0;
	}
	return norma;
}


int main() {
	int n, m, A[100][100];
	cout << "Dati n: ";
	cin >> n;
	cout << "Dati m: ";
	cin >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout <<  A[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Norma infinit este: " << normaInf(A, n, m) << endl;
	cout << "Norma 1 este: " << norma1(A, n, m);
	return 0;
}
