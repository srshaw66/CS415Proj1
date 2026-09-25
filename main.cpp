#include <iostream>
#include "Sequences.h"
#include "Exponentiation.h"
#include "Sorting.h"

using namespace std;

Sequences FibonacciSeq;
Sequences GCDSeq;

// Exponentiations decByOneExp;
// Exponentiations decByConstExp;
// Exponentiations divConquerExp;

Sorting selSortAlg;
Sorting inSortAlg;



void runTask1() {
  int m, n;
  int k;

  cout << "Task 1: Fibonacci Sequence and GCD" << endl << endl;
  cout << "Enter k: ";
  cin >> k;

  n = FibonacciSeq.Fibonacci(k);
  int fibCount = FibonacciSeq.getFibCount();

  m = FibonacciSeq.Fibonacci(k + 1);

  int gcdResult = GCDSeq.GCD(m, n);
  int gcdDivisions = GCDSeq.getGCDCount();

  cout << "Selected Task 1 with k = " << k << "." << endl << endl;

  cout << "First, the program computes Fibonacci(" << k << ")." << endl;
  cout << "Fibonacci(" << k << ") = " << n << endl;
  cout << "Fibonacci additions = " << fibCount << endl << endl;

  cout << "Next, the program computes Fibonacci(" << k + 1 << ")." << endl;
  cout << "Fibonacci(" << k + 1 << ") = " << m << endl << endl;

  cout << "These consecutive Fibonacci values are used as the inputs for GCD." << endl;
  cout << "m = Fibonacci(" << k + 1 << ") = " << m << endl;
  cout << "n = Fibonacci(" << k << ") = " << n << endl << endl;

  cout << "The program now computes GCD(m, n)." << endl;
  cout << "GCD(" << m << ", " << n << ") = " << gcdResult << endl;
  cout << "Modulo divisions = " << gcdDivisions << endl << endl;
}

void runTask2() {
    int a;
    int n;

    cout << "\nTask 2: Exponentiation\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter n: ";
    cin >> n;

    cout << "\nSelected Task 2 with a = " << a << " and n = " << n << ".\n";
    cout << "Task 2 execution will be implemented here.\n";
}

void runTask3() {
    int n;

    cout << "\nTask 3: Sorting\n";
    cout << "Enter the list size n: ";
    cin >> n;

    cout << "\nSelected Task 3 with list size n = " << n << ".\n";
    cout << "Task 3 execution will be implemented here.\n";
}

void runUserTestingMode() {
    int taskSelection;

    cout << "\nUser Testing Mode\n";
    cout << "Choose a task:\n";
    cout << "1. Fibonacci Sequence and GCD\n";
    cout << "2. Exponentiation\n";
    cout << "3. Sorting\n";
    cout << "Enter your selection: ";
    cin >> taskSelection;

    switch (taskSelection) {
        case 1:
            runTask1();
            break;
        case 2:
            runTask2();
            break;
        case 3:
            runTask3();
            break;
        default:
            cout << "\nInvalid task selection.\n";
            break;
    }
}

void runScatterPlotMode() {
    cout << "\nSelected Scatter Plot Mode.\n";
    cout << "Scatter plot execution will be implemented here.\n";
}

int main() {
    int modeSelection;

    cout << "Algorithm Growth Rate Analysis\n";
    cout << "Choose a mode:\n";
    cout << "1. User Testing Mode\n";
    cout << "2. Scatter Plot Mode\n";
    cout << "Enter your selection: ";
    cin >> modeSelection;

    switch (modeSelection) {
        case 1:
            runUserTestingMode();
            break;
        case 2:
            runScatterPlotMode();
            break;
        default:
            cout << "\nInvalid mode selection.\n";
            break;
    }

    cout << "\nSelection complete.\n";
    return 0;
}
