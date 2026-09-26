#include "Sorting.h"
#include <iostream>
#include <algorithm> // For std::swap

using namespace std;

// Textbook pseudocode: Selection Sort
// ALGORITHM SelectionSort(A[0..n-1])
  //Sorts a given array by selection sort
  //Input: An array A[0..n-1] of orderable elements
  //Output: Array A[0..n-1] sorted in nondecreasing order
//   for i <- 0 to n-2 do
//     min <- i
//     for j <- i+1 to n-1 do
//       if A[j] < A[min] min <- j
//     swap A[i] and A[min]
void Sorting::selectionSort(int arr[], int n) {
    comparisonCount = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisonCount++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        std::swap(arr[minIndex], arr[i]);
    }
}

// Insertion Sort using swap
// Textbook pseudocode: Insertion Sort
// ALGORITHM InsertionSort(A[0..n-1])
  //Sorts a given array by insertion sort
  //Input: An array A[0..n-1] of n orderable elements
  //Output: Array A[0..n-1] sorted in nondecreasing order
//   for i <- 1 to n-1 do
//     v <- A[i]
//     j <- i-1
//     while j >= 0 and A[j] > v do
//       A[j+1] <- A[j]
//       j <- j-1
//     A[j+1] <- v
void Sorting::insertionSort(int arr[], int n) {
    comparisonCount = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            comparisonCount++;
            if (!(arr[j] < arr[j - 1])) {
                break;
            }
            std::swap(arr[j], arr[j - 1]);
        }
    }
}

int Sorting::getComparisonCount() {
    return comparisonCount;
}
