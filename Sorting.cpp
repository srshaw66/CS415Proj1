#include "Sorting.h"
#include <iostream>
#include <algorithm> // For std::swap


using namespace std;


void Sorting::selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        std::swap(arr[minIndex], arr[i]);
    }
}

// Insertin Sort using swap
void Sorting::insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
            std::swap(arr[j], arr[j - 1]);
        }
    }
}
