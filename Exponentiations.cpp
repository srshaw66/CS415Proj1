#include "Exponentiation.h"

using namespace std;

// Textbook definition: Decrease-by-one exponentiation
//
//              { f(n-1) * a       if n > 0,
//   f(n) =     {
//              { 1                if n = 0.
int Exponentiations::decByOne(int con, int num) {
    // base case
    if (num == 0) {
        return 1;
    }
    int subProbValue = decByOne(con, num - 1);

    return con * subProbValue;
}

// Textbook definition: Decrease-by-constant-factor exponentiation
//
//              { (a^(n/2))^2             if n is even and positive,
//   a^n =      { (a^((n-1)/2))^2 * a     if n is odd,
//              { 1                       if n = 0.
int Exponentiations::decByConst(int con, int num) {}

// Textbook relationship: Divide-and-conquer exponentiation
//
// The textbook does not provide a separate named pseudocode listing for this
// task's divide-and-conquer version. Its displayed halving relationship is:
//
//              { (a^(n/2))^2             if n is even and positive,
//   a^n =      { (a^((n-1)/2))^2 * a     if n is odd,
//              { 1                       if n = 0.
int Exponentiations::divConquer(int con, int num) {
  // base cases
    if (num == 0) { return 1;}
    else if (num == 2) {return con;}

    // if even
    if (num % 2 == 0) {
        int evenResult = divConquer(con, num / 2);
        return evenResult * evenResult;
    }

    // if odd
    else {
        int oddResult = divConquer(con, (num - 1) / 2);

        return oddResult * oddResult * con;
    }
}


