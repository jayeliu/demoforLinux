#include <iostream>
#include <algorithm>
#include "selectionsort.h"
#include "insertionsort.h"
#include "SortTestHelper.h"

using namespace std;

int main(int, char **) {
    int n = 100000;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    SortTestHelper::testSort("insertionSort", insertionSort, arr, n);
    delete[] arr;
    return 0;
}
