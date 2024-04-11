#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a, b, c, delta, x1, x2;
	cout << "ax^2+bx+c" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout << "Ecuatia are o infinitate de solutii";
			} else{
				cout << "Ecuatia nu are solutii";
			}
		} else{
			cout << "x=" << -c/b;
		}
	} else{
		delta = pow(b, 2) - 4*a*c;
		if(delta == 0){
			cout << "x1=x2=" << -b/(2*a);
		} else if(delta < 0){
			cout <<"d<0";
			cout << "x1= " << -b/(2*a) << " + " << sqrt(-delta)/(2*a) << "i" << endl;
			cout << "x1= " << -b/(2*a) << " - " << sqrt(-delta)/(2*a) << "i";
		} else{
			cout <<"d>0";
			cout << "x1= " << (-b+sqrt(delta))/(2*a) << endl;
			cout << "x1= " << (-b-sqrt(delta))/(2*a);
		}
	}
}
