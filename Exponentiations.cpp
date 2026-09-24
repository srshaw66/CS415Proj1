#include "Exponentiation.h"

using namespace std;

// Textbook definition: Decrease-by-one exponentiation
//
//              { f(n-1) * a       if n > 0,
//   f(n) =     {
//              { 1                if n = 0.
int Exponentiations::decByOne(int con, int num) {}

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
int Exponentiations::divConquer(int con, int num) {}


