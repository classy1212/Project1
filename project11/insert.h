#ifndef INSERT_H
#define INSERT_H

#include <vector>

using namespace std;

int partition(std::vector<int>& arr, int low, int high);
void bubbleSort(std::vector<int>& arr);
void insertionSort(vector<int>& arr);
void quickSort(vector<int>& arr, int low, int high);
void heapSort(vector<int>& arr);
void radixSort(vector<int>& arr);
void hybridSort(vector<int>& arr);

#endif
