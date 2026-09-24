
#include <iostream>
#include <cmath>

#include "Sequences.h"

using namespace std;

// Textbook pseudocode: Recursive Fibonacci
// ALGORITHM F(n)
//   //Computes the nth Fibonacci number recursively by using its definition
//   //Input: A nonnegative integer n
//   //Output: The nth Fibonacci number
//   if n <= 1 return n
//   else return F(n-1) + F(n-2)
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

// Textbook pseudocode: Euclid's Algorithm
// ALGORITHM Euclid(m,n)
//   //Computes gcd(m,n) by Euclid's algorithm
//   //Input: Two nonnegative, not-both-zero integers m and n
//   //Output: Greatest common divisor of m and n
//   while n != 0 do
//     r <- m mod n
//     m <- n
//     n <- r
//   return m
int Sequences::GCD(int m, int n) {
    // base case: if n is 0, return m
    if (n == 0) {
        return m;
    }

    // recursive case: GCD(m, n) = GCD(n, m % n)
    return GCD(n, m % n);
}
