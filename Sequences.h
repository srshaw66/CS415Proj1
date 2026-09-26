#ifndef SEQUENCES
#define SEQUENCES

class Sequences {
    private:
    int fibCounter = 0;
    int gcdCounter = 0;

    public:
    // Recursive Fibonacci 
    int Fibonacci(int k);
    int fibHelp(int k);
    int getFibCount() {return fibCounter;}
    
    int GCD(int m, int n);
    int getGCDCount() {return gcdCounter;}
};

#endif
