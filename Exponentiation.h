#ifndef EXPONENTIATION
#define EXPONENTIATION  

class Exponentiations {
	private:
	int dbcHelp(int a, int m);
	int dboHelp(int a, int n);
    int dcHelp(int a, int n);
	
	int dboCount = 0;
	int dbcCount = 0;
	int dcCount = 0;
	
	
    public: 

    // Decrease by one 
    int decByOne(int a, int m);
    int dboGetter() {return dboCount;}
    
    // Decrease by a constant factor
    int decByConst(int a, int n);
    int dbcGetter() {return dbcCount;}
    
    // Divide and Conquer
    int divConquer(int a, int n);
    int dcGetter() {return dcCount;}

};

#endif
