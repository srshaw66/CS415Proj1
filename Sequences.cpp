
#include <iostream>
#include <cmath>

#include "Sequences.h"

using namespace std;

// F(n) = F[n-1] + F[n-2]
int Sequences::Fibonacci(int n) {
    int basicOps = 0; // Initialize basic operations counter

    // base case: n is less than or equal to 1.
    if (n <= 1) {
        return n;
    }

    // recursive case: F(n) = F(n-1) + F(n-2)
    return Fibonacci(n - 1) + Fibonacci(n - 2);
    basicOps++; // Increment basic operations counter for each addition operation
}

int Sequences::GCD(int m, int n) {
    // base case: if n is 0, return m
    if (n == 0) {
        return m;
    }

    // recursive case: GCD(m, n) = GCD(n, m % n)
    return GCD(n, m % n);
}
