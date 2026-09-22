#include <iostream>

using namespace std;

void runTask1() {
    int k;

    cout << "\nTask 1: Fibonacci Sequence and GCD\n";
    cout << "Enter k: ";
    cin >> k;

    cout << "\nSelected Task 1 with k = " << k << ".\n";
    cout << "Task 1 execution will be implemented here.\n";
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
