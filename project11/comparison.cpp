#include "insert.h"
#include <bits/stdc++.h>
#include "comparison.h"

using namespace std;

void printRow(int size, double insertionTime, double quickTime, double heapTime, double hybridTime) {
    cout << size << "    " << insertionTime << "   " << quickTime << "   " << heapTime << "   " << hybridTime << "\n";
}

vector<int> generateRandomArray(int size) {
    std::vector<int> arr;
    for (int i = 0; i < size; ++i) {
        arr.push_back(rand() % 10000 - 5000);
    }
    return arr;
}

void compareAlgorithms() {
    vector<int> inputSizes = {10, 20, 50, 100, 500, 900};
    double insertionTime, quickTime, heapTime, hybridTime;

    for (size_t size : inputSizes) {
        vector<int> data = generateRandomArray(size);

        auto start = chrono::steady_clock::now();
        insertionSort(data);
        auto end = chrono::steady_clock::now();
        insertionTime = chrono::duration<double, milli>(end - start).count();

        data = generateRandomArray(size);
        start = chrono::steady_clock::now();
        quickSort(data, 0, data.size() - 1);
        end = chrono::steady_clock::now();
        quickTime = chrono::duration<double, milli>(end - start).count();

        data = generateRandomArray(size);
        start = chrono::steady_clock::now();
        heapSort(data);
        end = chrono::steady_clock::now();
        heapTime = chrono::duration<double, milli>(end - start).count();

        data = generateRandomArray(size);
        start = chrono::steady_clock::now();
        hybridSort(data);
        end = chrono::steady_clock::now();
        hybridTime = chrono::duration<double, milli>(end - start).count();

        printRow(size, insertionTime, quickTime, heapTime, hybridTime);
    }
}
