#include<iostream>
#include<math.h>
using namespace std;

//calculez delta
double delta(int a, int b, int c) {
	return pow(b, 2) - (4*a*c);
}

//calculez solutiile
void sol_ec_II(int a, int b, int c, float& x1, float& x2) {
	x1 = (-b + sqrt(delta(a, b, c)))/2*a;
	x2 = (-b - sqrt(delta(a, b, c)))/2*a;
}

int main() {
	int a, b, c;
	float x1, x2;
	//citesc a, b, c;
	cout << "Dati a: ";
	cin >> a;
	cout << "Dati b: ";
	cin >> b;
	cout << "Dati c: ";
	cin >> c;
	//apelez funtia sol_ec_II
	sol_ec_II(a, b ,c, x1, x2);
	//afisez rezultatele
	cout << "x1=" << x1 << " x2=" << x2;
	return 0;
}
