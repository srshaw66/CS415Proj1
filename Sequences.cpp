
#include <iostream>
#include <cmath>

#include "Sequences.h"

using namespace std;


//   if n <= 1 return n
//   else return F(n-1) + F(n-2)
int Sequences::Fibonacci(int n) {
    fibCounter = 0;
    return fibHelp(n);
}

int Sequences::fibHelp(int n) {
    // This allows us to have a more accurate counter position.
    if (n <= 1) {
        return n;
    }

    int x = fibHelp(n - 1);
    int y = fibHelp(n - 2);

    fibCounter++; // Increments and retains the additions count.
    return x + y;
}


// ALGORITHM Euclid(m,n)
//   while n != 0 do
//     r <- m mod n
//     m <- n
//     n <- r
//   return m
int Sequences::GCD(int m, int n) {
    gcdCounter = 0;

    while (n != 0) {
        int r = m % n;
        gcdCounter++;

        m = n;
        n = r;
    }

    return m;
}
