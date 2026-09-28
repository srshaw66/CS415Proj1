#include "Exponentiation.h"

using namespace std;

// Textbook definition: Decrease-by-one exponentiation
//
//              { f(n-1) * a       if n > 0,
//   f(n) =     {
//              { 1                if n = 0.
int Exponentiations::decByOne(int con, int num) {
    dboCount = 0;
    return dboHelp(con,num);
}
int Exponentiations::dboHelp(int con, int num) {
	// base case
	if (num == 0) {
        return 1;
    }
    int subProbValue = dboHelp(con, num - 1);
	
	dboCount++;
    return con * subProbValue;
}

// Textbook definition: Decrease-by-constant-factor exponentiation
//
//              { (a^(n/2))^2             if n is even and positive,
//   a^n =      { (a^((n-1)/2))^2 * a     if n is odd,
//              { 1                       if n = 0.
int Exponentiations::decByConst(int con, int num) {
	dbcCount = 0;
	return dbcHelp(con, num);
}

int Exponentiations::dbcHelp(int con, int num) {
	//base case
	if (num == 0) {
		return 1;
	}
	
	int x = dbcHelp(con, num / 2);
	dbcCount++; 
	int prod = x * x; 
	
	if (num % 2 != 0 ) {
		dbcCount++;
		prod = prod * con;
	}
	
	return prod; 
	
}


//
//              { (a^(n/2))^2             if n is even and positive,
//   a^n =      { (a^((n-1)/2))^2 * a     if n is odd,
//              { 1                       if n = 0.
int Exponentiations::divConquer(int con, int num) {
	dcCount = 0;
	return dcHelp(con, num);
}
 
int Exponentiations::dcHelp(int con, int num) {
	if (num == 0) { return 1; }
 
	if (num % 2 == 0) {
		int x = dcHelp(con, num / 2);
		int y = dcHelp(con, num / 2); 
		dcCount++;                   
		return x * y;
	} else {
		int x = dcHelp(con, (num - 1) / 2);
		int y = dcHelp(con, (num - 1) / 2); 
		return con * x * y;
	}
}
