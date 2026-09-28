#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> 
#include <ctime> 
#include "Sequences.h"
#include "Exponentiation.h"
#include "Sorting.h"

using namespace std;

Sequences FibonacciSeq;
Sequences GCDSeq;

Exponentiations decByOneExp;
Exponentiations decByConstExp;
Exponentiations divConquerExp;

Sorting selSortAlg;
Sorting inSortAlg;

const string clearS = "\033[2J\033[H";



void runTask1() {
  int m, n;
  int k;

  cout << "Task 1: Fibonacci Sequence and GCD"  << endl
        << "Enter # for k: ";
  cin >> k;
  
  //n = fib(k)
  //m = fib(k + 1)
  //gdcResult = GDC(m, n)
  n = FibonacciSeq.Fibonacci(k);
  int fibCount = FibonacciSeq.getFibCount(); // snapshot BEFORE Fib(k+1) resets the counter

  m = FibonacciSeq.Fibonacci(k + 1);
  int gcdResult = GCDSeq.GCD(m, n);

  int gcdDivisions = GCDSeq.getGCDCount();
  
  
  cout << "Selected Task 1 with k = " << k << "." << endl << endl;

  cout << "k: (" << k << ")." << endl
       << "Fibonacci(" << k << ") = " << n << endl << "Fibonacci additions = "
       << fibCount << endl << endl << "Next, Fibonacci(" << k + 1 << ")." 
       << endl << "Fibonacci(" << k + 1 << ") = " << m << endl << endl;
  cout << "These Fibonacci values are the inputs for GCD."
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

    int dboResult = decByOneExp.decByOne(a, n);
    int dboGro = decByOneExp.dboGetter();
    int dbcResult = decByConstExp.decByConst(a,n);
    int dbcGro = decByConstExp.dbcGetter();
    int dcResult = divConquerExp.divConquer(a, n);
    int dcGro = divConquerExp.dcGetter();
    
    cout << "Dec by one: " << dboResult << endl << "Basic Op Count: " 
    << dboGro << endl;
    cout << "Dec by con: " << dbcResult << endl << "Basic Op Count: " 
    << dbcGro << endl;
    cout << "Div conq: " << dcResult << endl << "Basic Op Count: " 
    << dcGro << endl;
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << (i + 1 < n ? " " : "");
    }
    cout << endl;
}

void runTask3() {
    int n;

    cout << "Task 3: Sorting" << endl
         << "Enter the list size n (10-100, multiple of 10): ";
    cin >> n;

    if (n < 10 || n > 100 || n % 10 != 0) {
        cout << "Invalid n. Please enter a value between 10 and 100 "
             << "that is a multiple of 10." << endl << endl;
        return;
    }

    string filePath = "data/smallSet/data" + to_string(n) + ".txt";
    ifstream inFile(filePath);
    if (!inFile) {
        cout << "Could not open " << filePath
             << ". Make sure you run the program from the project root "
             << "(the folder containing the 'data' directory)." << endl << endl;
        return;
    }

    cout << "Selected Task 3 with list size n = " << n << "." << endl
         << "Loaded data from " << filePath << "." << endl << endl;

    // Load the array from file
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        inFile >> arr[i];
    }
    inFile.close();

    cout << "Input array: ";
    printArray(arr, n);
    cout << endl;

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
    cout << "Selection Sort output: ";
    printArray(selArr, n);
    cout << "Selection Sort comparisons: " << selComparisons << endl << endl;

    cout << "Next, the program sorts the array using Insertion Sort." << endl;
    inSortAlg.insertionSort(insArr, n);
    int insComparisons = inSortAlg.getComparisonCount();
    cout << "Insertion Sort output: ";
    printArray(insArr, n);
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
