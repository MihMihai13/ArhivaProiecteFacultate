#include <iostream>

using namespace std;

int* fib(int n) {
	static int f[100];
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i <= n; i++) {
		f[i] = f[i-1]+f[i-2];
	}
	return f;
}

int cmmdc(int a,int b) {
	while(b != 0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int *f;
	int n, m, x;
	cout << "Dati pozitia 1: ";
	cin >> n;
	cout << "Dati pozitia 2: ";
	cin >> m;
	if(n > m) {
		x = n;
	} else {
		x = m;
	}
	f = fib(x);

	for(int i = 0; i <= x; i++) {
		cout << f[i] << " ";
	}
	cout << endl << endl;

	cout << "cmmdc(" << n << ", " << m << ")=" << cmmdc(n, m) << endl;
	cout << "cmmdc(" << f[n] << ", " << f[m] <<")=" << cmmdc(f[n], f[m]) << endl;
	cout << endl;

	if(f[cmmdc(n, m)] == cmmdc(f[n], f[m])) {
		cout << "cmmdc(" << n << ", " << m << ") = cmmdc(" << f[n] << ", " << f[m] <<")";
	} else {
		cout << "f[cmmdc(" << n << ", " << m << ")] != cmmdc(" << f[n] << ", " << f[m] <<")";
	}
	cout << endl;
	return 0;
}
