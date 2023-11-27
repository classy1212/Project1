#include "insert.h"
#include <bits/stdc++.h>
#include "comparison.h"

using namespace std;

int main() {
    vector<int> arr1 = {10, 77, 8, 91, 1, 53};
    vector<int> arr2 = {3, 6, 0, 1, 4, 9, 8, 8, 5};
    vector<int> arr3 = {15, 11, 13, 12, 14, 10};
    vector<int> arr4 = {37, 18, 45, 1787, 6};
    vector<int> arr5 = {100, 224, 3, 422, 2231, 0};

    insertionSort(arr1);
    cout << "Insertion Sort: ";
    for (size_t i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    quickSort(arr2, 0, arr2.size() - 1);
    cout << "Quick Sort: ";
    for (size_t i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    heapSort(arr3);
    cout << "Heap Sort: ";
    for (size_t i = 0; i < arr3.size(); i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    radixSort(arr4);
    cout << "Radix Sort: ";
    for (size_t i = 0; i < arr4.size(); i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;

    hybridSort(arr5);
    cout << "Hybrid Sort: ";
    for (size_t i = 0; i < arr5.size(); i++) {
        cout << arr5[i] << " ";
    }
    cout << endl<<endl;

    compareAlgorithms();

    return 0;
}


