#include <iostream>

// program pentru algoritmii de sortare

using namespace std;

void Bubble_Sort(int n, float y[100]){
    cout<<"Algoritmul buble Sort:"<<endl;
    bool sort;
    do{
       sort=1;
        for(int i=1; i < n-1; i++){
            for(int j = 0; j < n-i; j++){
                if(y[j] > y[j+1]){
                    int aux = y[j];
                    y[j] = y[j+1];
                    y[j+1] = aux;
                    sort = 0;
                }
            }
        }
    }while(sort == 0);

	cout << endl;
    cout << "Vectorul ordonat: ";
    for(int i=0 ; i < n ; i++)
        cout<<y[i]<<" ";
    cout << endl << endl;
}

void Selection_Sort(int n, float y[100]){
    int minim, poz;
    for(int j = 0; j <= n-2; j++){
        minim = y[j];
        poz = j;
        for(int k = j+1; k <= n-1; k++){
            if(minim > y[k]){
                minim = y[k];
                poz = k;
            }
        }
        if(poz != j){
            int aux = y[j];
            y[j] = y[poz];
            y[poz] = aux;
        }
    }

    cout << endl;
	cout << "Vectorul ordonat: ";
    for(int i=0 ; i< n ; i++){
        cout<<y[i]<<" ";
    }
    cout << endl << endl;
}

void Counting_Sort1(int n, float y[100]){
    int m = y[0];
    for(int i = 1; i < n; i++){
    	if(y[i] > m){
    		m = y[i];
		}
	}
	int c[m];
	for(int i = 0; i < m; i++){
		c[i] = 0;
	}
	for(int i = 0; i < n; i++){
		c[(int)y[i]]++;
	}	
	int z[n], i=0;
	for (int j = 0; j <= m; j++){
		if(c[j] != 0){
			for(int k = 1; k <= c[j]; k++){
				z[i] = j;
				i++;
			}
		}
	}

    cout << endl;
	cout << "Vectorul ordonat: ";
    for(int i=0 ; i< n ; i++){
        cout<<z[i]<<" ";
    }
    cout << endl << endl;
}

void Counting_Sort2(int n, float y[100]){
    int b[n];
    for(int i = 0; i < n; i++){
		b[i] = 0;
	}
    for(int i = 0; i <= n-2; i++){
    	for(int j = i+1; j <= n-1; j++){
    		if(y[i] <= y[j]){
    			b[j]++;
			} else{
				b[i]++;
			}
		}
	}

	float z[n];
    for(int i = 0; i < n; i++){
    	z[b[i]] = y[i];
	}

    cout << endl;
	cout << "Vectorul ordonat: ";
    for(int i=0 ; i< n ; i++){
        cout<<z[i]<<" ";
    }
    cout << endl << endl;
}

void Interclasare(int s, int m, int d, float x[100]){
	int k = 0, i = s, j = m+1;
	float y[100];
	while(i <= m and j <= d){
		if(x[i] <= x[j]){
			y[k] = x[i];
			k++;
			i++;
		} else{
			y[k] = x[j];
			k++;
			j++;
		}
	}
	if(i <= m){
		for(int r = i; r <= m; r++){
			y[k] = x[r];
			k++;
		}
	}
	if(j <= d){
		for(int r = j; r <= d; r++){
			y[k] = x[r];
			k++;
		}
	}
	for(int r = 0; r <= k-1; r++){
			x[s+r] = y[r];
		}
}
void Merge_Sort(int s, int d, float x[100]){
	if(s < d){
		int m = (s+d)/2;
		Merge_Sort(s, m, x);
		Merge_Sort(m+1, d, x);
		Interclasare(s, m, d, x);
	}
}

void Quick_Sort(int s, int d, float x[100]){
    if(s < d){
        float pivot = x[s];
        int i = s, j = d;
        while(i < j){
            while(x[i] < pivot and i <= d)
                i++;
            while(x[j] >= pivot and j >= s)
                j--;
            if(i < j){
                float aux = x[i];
                x[i] = x[j];
                x[j] = aux;
                i++;
                j--;
            }
        }
        Quick_Sort(s, j, x);
        Quick_Sort(i+1, d, x);
    }
}

void Insertion_Sort(int n, float y[100]){
    for(int i = 1; i <= n-1; i++){
        float aux = y[i];
        int j = i-1;
        while(y[j] > aux and j >= 0){
            y[j+1] = y[j];
            j--;
        }
        y[j+1] = aux;
    }
    
	cout << endl;
	cout << "Vectorul ordonat: ";
    for(int i=0 ; i< n ; i++){
        cout<<y[i]<<" ";
    }
    cout << endl << endl;
}

void Shell_Sort(int n, float y[100]){
	int m = 0, p = 1;
	while(p <= n){
		p=p*2;
	}
	int pas = p/2;
	while(pas >= 1){
		int i = 0;
		while(i+pas < n){
			int j = i;
			float aux = y[i+pas];
			while(y[j] > aux and j >= 0){
				y[j+pas] = y[j];
				j = j-pas;
			}
			y[j+pas] = aux;
			i++;
		}
		pas = pas/2;
	}
	
	cout << endl;
	cout << "Vectorul ordonat: ";
    for(int i=0 ; i< n ; i++){
        cout<<y[i]<<" ";
    }
    cout << endl << endl;
}

int Nr_Cifre(int x){
	int n = 0;
	if(x == 0)
		return 1;
	else{
		while(x > 0){
			n++;
			x = x/10;
		}
	}
	return n;
}

void Radix_Sort(int n, float x[100]){
	int max = 0;
	for(int i = 0; i < n; i++){
		if(max < x[i])
			max = x[i];
	}
	int m = Nr_Cifre(max);
	int c[n][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			c[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		if(x[i] != 0){
			int aux = x[i];
			int k = 0;
			while(aux > 0){
				c[i][m-1-k] = aux%10;
				k++;
				aux = aux/10;
			}
		}
	}
	int y[m];
	for(int j = m-1; j >= 0; j--){
		int i = 0;
		for(int k = 0; k <= 9; k++){
			for(int s = i; s <= n-1; s++){
				if(c[s][j] == k){
					for(int r = 0; r <= m-1; r++){
						y[r] = c[s][r];
					}
					for(int p = s-1; p >= i; p--){
						for(int r = 0; r <= m-1; r++){
							c[p+1][r] = c[p][r];
						}
					}
					for(int r = 0; r <= m-1; r++){
						c[i][r] = y[r];
					}
					i++;
				}
			}
		}
	}
	
	cout << endl;
	cout << "Vectorul ordonat: ";
    for(int i=0 ; i < n ; i++){
    	int j = 0;
    	while(c[i][j] == 0){
    		j++;
		}
		for(j; j < m ; j++){
			cout << c[i][j];
		}
		cout << " ";
    }
    cout << endl << endl;
}

int Cautare_Secventiala(int n, float x[100], float a){
	int c = 0;
	for(int i = 0; i < n; i++){
		if(x[i] == a){
			c++;
		}
	}
	return c;
}

void Cautare_Binara(float x[100], int s, int d, int a){
	if(s == d){
		if(x[s] == a){
			cout << a << " a fost gasit pe pozitia " << s << endl;
		} else{
			cout << a << " nu se afla in sir" << endl;
		}
	} else if(s < d){
		int m = (s+d)/2;
		if(x[m] == a){
			cout << a << " a fost gasit pe pozitia " << m << endl;
		} else{
			if(a < x[m]){
				Cautare_Binara(x, s, m-1, a);
			} else{
				Cautare_Binara(x, m+1, d, a);
			}
		}
	}
}

int main()
{   int optiune;
    int n;
    float x[100], a;
    optiune = 1;

    do {

    cout<<"Program 2 ASD - 2023 - grupa 1332B: \n"; cout<<endl;
    cout<<"1. Bubble Sort."<<endl;
    cout<<"2. Selection Sort."<<endl;
    cout<<"3. Counting sort pentru numere naturale."<<endl;
    cout<<"4. Counting sort pentru numere reale."<<endl;
    cout<<"5. Merge Sort."<<endl;
    cout<<"6. Quick Sort."<<endl;
    cout<<"7. Insertion Sort."<<endl;
    cout<<"8. Shell Sort."<<endl;
    cout<<"9. Radix Sort."<<endl;
    cout<<"10.Cautare secventiala."<<endl;
    cout<<"11.Cautare binara."<<endl;
    cout<<"0. Incheiere program algoritmi de sortare."<<endl<<endl;
    cout<<"Optiune: ";
	cin>>optiune;
        switch (optiune){
	        case 1:
	            cout<<"Bubble Sort"<<endl<<endl;
	            cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
	                cin>>x[i];
	            Bubble_Sort(n, x);
	            system("pause");
	            break;

	        case 2:
	            cout<<"Selection Sort"<<endl<<endl;
	            cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
	            Selection_Sort(n, x);
	            system("pause");
	            break;

	        case 3:
	            cout<<"Counting Sort pentru numere naturale:"<<endl<<endl;
	            cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
	            Counting_Sort1(n, x);
	            system("pause");
	            break;

	        case 4:
	            cout<<"Counting Sort pentru numere reale"<<endl<<endl;
	            cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
	            Counting_Sort2(n, x);
	            system("pause");
	            break;

            case 5:
                cout << "Merge Sort" << endl << endl;
                cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
                Merge_Sort(0, n-1, x);
                cout << endl;
				cout << "Vectorul ordonat: ";
	            for(int i=0 ; i < n ; i++){
    			    cout<<x[i]<<" ";
				}
				cout << endl << endl;
				system("pause");
				break;

            case 6:
                cout << "Quick Sort" << endl << endl;
                cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
                Quick_Sort(0, n-1, x);
                cout << endl;
				cout << "Vectorul ordonat: ";
	            for(int i=0 ; i < n ; i++){
    			    cout<<x[i]<<" ";
				}
				cout << endl << endl;
				system("pause");
				break;

            case 7:
                cout << "Insertion Sort" << endl << endl;
                cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
                Insertion_Sort(n, x);
                system("pause");
                break;

			case 8:
                cout << "Shell Sort" << endl << endl;
                cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
                Shell_Sort(n, x);
                system("pause");
                break;
                
            case 9:
                cout << "Radix Sort" << endl << endl;
                cout<<"Dimensiune vector de ordonat n = ";
	            cin>>n;
	            cout<<"Vectorul de ordonat este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
                Radix_Sort(n, x);
                system("pause");
                break;
                
            case 10:
                cout << "Cautare secventiala" << endl << endl;
                cout<<"Dimensiune vector n = ";
	            cin>>n;
	            cout<<"Vectorul introdus este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
				cout << "Elementul de cautat: ";
				cin >> a;
				cout << a << " se afla de " << Cautare_Secventiala(n, x, a) << " ori in sirul x." << endl;
                system("pause");
                break;
                
            case 11:
                cout << "Cautare binara" << endl << endl;
                cout<<"Dimensiune vector n = ";
	            cin>>n;
	            cout<<"Vectorul introdus este: ";
	            for(int i=0; i<n; i++)
					cin>>x[i];
				Merge_Sort(0, n-1, x);
                cout << endl;
				cout << "Vectorul ordonat: ";
	            for(int i=0 ; i < n ; i++){
    			    cout<<x[i]<<" ";
				}
				cout << endl;
				cout << "Elementul de cautat: ";
				cin >> a;
				if(a < x[0] or a > x[n-1]){
					cout << a << " nu se afla in sir." << endl;
				} else{
					Cautare_Binara(x, 0, n-1, a);
				}
                system("pause");
                break;

	        case 0:  // inchidere program
	            break;

	        default :
	            cout<<endl<<"Optiune incorecta! Realegeti optiune!"<<endl<<endl;
	            break;
        } // end switch
    } while(optiune !=0);

    return 0;
}
