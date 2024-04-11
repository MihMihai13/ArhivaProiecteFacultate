#include <iostream>
#include <string>
using namespace std;

template <typename T>
class vector {
	int dim;
	T* buf;
public:
	vector();
	vector(int , T*);
	vector(const vector&);
	vector & operator=(const vector &);
	~vector();
	T& operator[](int i);
	int getDim();
	
	friend ostream & operator << (ostream & dev, vector & v) {
	    dev << "Vector:" <<endl;
	    dev << "Nr Elem:" << v.dim << endl;
	    for(int i = 0; i < v.dim; i++) {
			dev << v.buf[i];//am nevoie de op<< pt T
			if(i < v.dim-1)
				dev << ",   ";
			else
				dev << "." << endl;
		}
		dev<<endl;
		return dev;
	}

	void addElem(int, T&  ); //adauga element T pe pozitia i - cu realocare   
	void removeElem(int  ); //sterge elementul de pe pozitia i cu realocare     
	void sortare(); //ordoneaza elementele din buf; in T avem nevoie de op<
};



template <typename T>
vector<T>::vector( ){
	dim=0;
	buf=NULL;
}

template <typename T>
vector<T>::vector(int d, T *b){
		dim=d;
		if (b==NULL) buf = NULL;
		else{
			buf=new T[dim]; //constr fara param in T
			for (int i=0;i<dim;i++)
			buf[i]=b[i]; //op= in T
        }
     }
     
     
template <typename T>
vector<T>::vector(const vector<T>& v){
       dim=v.dim;
       if (v.buf==NULL) buf=NULL;
       else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
             buf[i]=v.buf[i]; //op= in T
        }
	 }
     
     
template <typename T>
vector<T>::~vector(){
        if (buf!=NULL) delete [] buf; //destr in T
}
               
template <typename T>
vector<T>&  vector<T>::operator=(const vector &v){
       dim=v.dim;
       if (!buf) delete [] buf; //destr in T
       if (v.buf==NULL) buf=NULL;
       else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
			buf[i]=v.buf[i]; //op= in T  
		}
        return *this;            
}

template <typename T>
T& vector<T>::operator[](int i){
      if (i>-1 && i<dim) return buf[i];  //constr de copiere in T
      else {
    	cout<<" nu exista element pe aceasta pozitie";
    	T x;
		return x;
	  }
}   

template <typename T>
int vector<T>::getDim(){
   return dim;
}

template <typename T>
void vector<T>::addElem(int n, T& x){
	T *aux;
	dim++;
	aux = new T[dim];
	for(int i = 0; i < n; i++){
		aux[i]=buf[i];
	}
	aux[n] = x;
	for(int i = n+1; i < dim; i++){
		aux[i]=buf[i-1];
	}
	delete [] buf;
	buf = aux;
}

template <typename T>
void vector<T>::removeElem(int n){
	T *aux;
	dim--;
	aux = new T[dim];
	for(int i = 0; i < n; i++){
		aux[i]=buf[i];
	}
	for(int i = n; i < dim; i++){
		aux[i]=buf[i+1];
	}
	delete [] buf;
	buf = aux;
}

template <typename T>
void vector<T>::sortare(){
	T aux;
	for(int i = 0; i < dim-1; i++){
		for(int j = i+1; j < dim; j++){
			if(buf[i] > buf[j]){
				aux = buf[i];
				buf[i] = buf[j];
				buf[j] = aux;
			}
		}
	}
}
 
class complex{
	double re,im;
public:
	complex(double r=0,double i=0){re=r;im=i;}
	friend ostream& operator<<(ostream &d,complex x){
        d<<x.re<<" j"<<x.im;
        return d;
    }
    
    bool operator>(const complex &);
    
        //ordonarea se va face in fctie de partea reala
};

bool complex::operator>(const complex &x){
	if(re > x.re)
		return true;
	else
		return false;
}

template <typename X, typename Y>
class pereche{
	X elem1;
	Y elem2;
public:
	pereche(){
	}
	pereche(const X &e1, const Y &e2){
		elem1=e1;
		elem2=e2;
	}
	friend ostream& operator<<(ostream &d,const pereche &x){
		d<<x.elem1<<" : " << x.elem2;
		return d;
	}
	bool operator>(const pereche &);
};

template <typename X, typename Y>
bool pereche<X, Y>::operator>(const pereche<X, Y> &x){
	if(elem1 > x.elem1)
		return true;
	else
		return false;
}

int main(){
	complex *b=new complex[2];
	b[0]=complex(1,2);
    b[1]=complex(2,2);
	vector<complex> v(2,b);
    cout<<v;
    
	cout<<v[0] << endl;
    
	v[1]=complex(5,5);
    cout<<v;
    
    vector<complex> v1(v);
    cout<<v1;
    
    v=v1;
    cout<<v;
    
    int x[3] = {1, 2, 3};
    vector<int> v2(3, x);
    cout << v2;
    
    string y[3] = {"unu", "trei", "patru"};
    vector<string> v3(3, y);
    cout << v3;
    
    string s("doi");
    v3.addElem(1, s);
    cout << "addElem\n" << v3;
    
    v3.removeElem(1);
    cout << "removeElem\n" << v3;
    
    complex *c=new complex[5];
	c[0]=complex(1,2);
	c[1]=complex(4,1);
	c[2]=complex(2,2);
	c[3]=complex(9,7);
	c[4]=complex(3,2);
	vector<complex> v4(5,c);
	cout << "Inaite de sortare:\n" << v4;
	v4.sortare();
    cout<< "Dupa sortare:\n" << v4;
    
    
    cout << "=================================================================\n";
    pereche<string, string> *d = new pereche<string, string>[3];
	d[0]=pereche<string, string>("perechea 1","sdhgs");
	d[1]=pereche<string, string>("alta pereche","hdsshd");
	d[2]=pereche<string, string>("ultima pereche","csdhds");
	vector<pereche<string, string>> v5(3, d);
	cout << "Inainte de sortare:\n" << v5;
    v5.sortare();
    cout << "Dupa sortare:\n" << v5;
    
	return 0;
}
