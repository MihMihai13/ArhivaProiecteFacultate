#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Dati n: ";
	cin >> n;
	char v[n+1];
	cout << "Dati elementele lui v: ";
	cin.ignore();
	cin.getline(v, n+1);
	int f[255] = {0};
	for(int i = 0; i < n-1; i++){
		f[(int)v[i]]++;
	}
	cout << "Vector de frecventa: ";
	for(int i = 0; i <= 255; i++)
		cout << f[i] << " ";
}
