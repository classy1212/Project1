#include <algorithm>
#include <cassert>
#include <iostream>
#include "insert.h"

using namespace std;

void test(void (*fn)(vector<int>&), vector<int>& xs) {
	fn(xs);
	assert(is_sorted(xs.begin(), xs.end()));
}

void run_tests_on(void (*fn)(vector<int>&)) {
	{
		vector<int> xs = {1, 7, 8, 3, 4, 2, 5, 6};
		test(fn, xs);
	}

	{
		vector<int> xs = {1, 2, 3, 4, 5, 6};
		test(fn, xs);
	}
}
void quickSortWrapper(vector<int>& arr) {
    quickSort(arr, 0, arr.size() - 1);
}

int main() {
	run_tests_on(insertionSort);
	run_tests_on(quickSortWrapper);

	run_tests_on(heapSort);
	run_tests_on(radixSort);
	run_tests_on(hybridSort);
}

