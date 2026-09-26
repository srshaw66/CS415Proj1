#ifndef SORTING
#define SORTING

class Sorting {
    public:

    // Selection Sort
    void selectionSort(int arr[], int n);
    
    // Insertion Sort
    void insertionSort(int arr[], int n);
    
    // Returns the number of key comparisons made during the most recent sort
    int getComparisonCount();

    private:
    int comparisonCount = 0;
};

#endif
