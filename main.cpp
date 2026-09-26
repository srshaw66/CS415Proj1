#include <iostream>
#include <string>
#include <cstdlib> // For random number generation
#include <ctime> // For random number generation
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

const string clearS = "\033[2J\033[H";



void runTask1() {
  int m, n;
  int k;

  cout << "Task 1: Fibonacci Sequence and GCD"  << endl
        << "Enter k: ";
  cin >> k;

  n = FibonacciSeq.Fibonacci(k);
  int fibCount = FibonacciSeq.getFibCount();

  m = FibonacciSeq.Fibonacci(k + 1);

  int gcdResult = GCDSeq.GCD(m, n);
  int gcdDivisions = GCDSeq.getGCDCount();

  cout << "Selected Task 1 with k = " << k << "." << endl << endl;

  cout << "First, the program computes Fibonacci(" << k << ")." << endl
       << "Fibonacci(" << k << ") = " << n << endl << "Fibonacci additions = "
       << fibCount << endl << endl;

  cout << "Next, the program computes Fibonacci(" << k + 1 << ")." << endl
       << "Fibonacci(" << k + 1 << ") = " << m << endl << endl;

  cout << "These consecutive Fibonacci values are used as the inputs for GCD."
       << endl << "m = Fibonacci(" << k + 1 << ") = " << m << endl
       << "n = Fibonacci(" << k << ") = " << n << endl << endl;

  cout << "The program now computes GCD(m, n)." << endl
       << "GCD(" << m << ", " << n << ") = " << gcdResult << endl
       << "Modulo divisions = " << gcdDivisions << endl << endl;
}

void runTask2() {
    int a;
    int n;

    cout << "Task 2: Exponentiation" << endl << "Enter a: ";
    cin >> a;
    cout << endl << "Enter n: ";
    cin >> n;

    

    cout << "Selected Task 2 with a = " << a
         << " and n = " << n << "." << endl << endl;

    cout << "Task 2 execution will be implemented here." << endl << endl;
}

void runTask3() {
    int n;

    cout << "Task 3: Sorting" << endl
         << "Enter the list size n: ";
    cin >> n;

    cout << "Selected Task 3 with list size n = " << n << "." << endl
         << endl;
    // Generate a random array of size n
    int* arr = new int[n];
    srand(static_cast<unsigned int>(time(nullptr))); // Seed for random number generation
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 1000; // Random numbers between 0 and 999
    }

    // Separate copies of the array for each sorting algorithm
    int* selArr = new int[n];
    int* insArr = new int[n];
    for (int i = 0; i < n; ++i) {
        selArr[i] = arr[i];
        insArr[i] = arr[i];
    }

    cout << "First, the program sorts the array using Selection Sort." << endl;
    selSortAlg.selectionSort(selArr, n);
    int selComparisons = selSortAlg.getComparisonCount();

    cout << "Selection Sort comparisons: " << selComparisons << endl;

    cout << "Next, the program sorts the array using Insertion Sort." << endl;
    inSortAlg.insertionSort(insArr, n);
    int insComparisons = inSortAlg.getComparisonCount();
    cout << "Insertion Sort comparisons: " << insComparisons << endl;

    // Comparison summary
    cout << endl << "Comparison Summary for n = " << n << ":" << endl
         << "Selection Sort comparisons: " << selComparisons << endl
         << "Insertion Sort comparisons: " << insComparisons << endl;

    // Clean up dynamically allocated memory
    delete[] arr;
    delete[] selArr;
    delete[] insArr;
}

void runUserTestingMode() {
    int taskSelection;

    cout << "User Testing Mode" << endl
         << "Choose a task:" << endl
         << "1. Fibonacci Sequence and GCD" << endl
         << "2. Exponentiation" << endl
         << "3. Sorting" << endl
         << "Enter your selection: ";
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
            cout << "Invalid task selection." << endl << endl;
            break;
    }
}

void runScatterPlotMode() {
    cout << "Selected Scatter Plot Mode." << endl
         << "Scatter plot execution will be implemented here." << endl
         << endl;
}

int main() {
    int modeSelection;

    cout << "Algorithm Growth Rate Analysis" << endl
         << "Choose a mode:" << endl
         << "1. User Testing Mode" << endl
         << "2. Scatter Plot Mode" << endl
         << "Enter your selection: ";
    cin >> modeSelection;

    switch (modeSelection) {
        case 1:
            runUserTestingMode();
            break;
        case 2:
            runScatterPlotMode();
            break;
        default:
            cout << "Invalid mode selection." << endl << endl;
            break;
    }

    cout << "Selection complete." << endl << endl;
    return 0;
}
