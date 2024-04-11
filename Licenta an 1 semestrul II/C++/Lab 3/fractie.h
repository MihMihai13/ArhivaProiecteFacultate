class fractie{  
    int a; //numarator                     
    int b; //numitor          
public:
//	fractie();
    fractie(int =0,int =0);     
    fractie(const fractie&);      
    fractie & operator=(const fractie &);
    ~fractie();
    
    double getValoare();
    fractie getInv();
    void setData(int,int);
    float getA();
    float getB();
    void afisare() const;
    
    friend const fractie operator +(const fractie &, const fractie&);       
	friend  const fractie operator -(const fractie&, const fractie& );
	friend  const fractie operator -(const fractie&);
	friend  const fractie operator *(const fractie&, const fractie&);          
	friend  const fractie operator /(const fractie&, const fractie&);                    
    
    fractie& operator +=(const fractie&); 
    fractie& operator -=(const fractie&);          
    fractie& operator *=(const fractie&);          
    fractie& operator /=(const fractie&);                  
     
	friend bool operator ==(const fractie&, const fractie&);
	friend bool operator !=(const fractie&, const fractie&);
	friend bool operator >(const fractie&, const fractie&);
	friend bool operator <(const fractie&, const fractie&);
	friend bool operator >=(const fractie&, const fractie&);
	friend bool operator <=(const fractie&, const fractie&);
};
