#include "insert.h"
#include <bits/stdc++.h>
#include "comparison.h"

using namespace std;

void insertionSort(vector<int>& arr) {
  for (int i = 0; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int  j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
           swap(arr[i], arr[j]);
        }
    }
   swap(arr[i + 1], arr[high]);
    return (i + 1);
}


void quickSort(vector<int>& arr, int low, int high) {
   if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void heapSort(vector<int>& arr) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < arr.size(); i++) {
        minHeap.push(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = minHeap.top();
        minHeap.pop();
    }
}


void radixSort(vector<int>& arr) {
     int maxVal = *max_element(arr.begin(), arr.end());
    for (int exp = 1; maxVal/exp > 0; exp *= 10) {
       vector<int> output(arr.size());
        vector<int> count(10, 0);

        for (int i= 0; i < arr.size(); i++) {
            count[(arr[i]/exp)%10]++;
        }

        for (int  i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int  i = arr.size() - 1; i >= 0; i--) {
            output[count[(arr[i]/exp)%10] - 1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }

        for (int  i = 0; i < arr.size(); i++) {
            arr[i] = output[i];
        }
    }
}

void hybridSort(vector<int>& arr) {
    int n = arr.size();
    if (n <= 10) {
        insertionSort(arr);
    } else if (n <= 1000) {
        heapSort(arr);
    } else {
        quickSort(arr, 0, n - 1);
    }
}




