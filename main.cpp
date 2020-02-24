#include <iostream>
#include <algorithm>
#include "selectionSort.h"
#include "insertionSort.h"
#include "SortTestHelper.h"
#include "shellSort.h"
#include "mergeSort.h"
using namespace std;

int main(int, char **) {
    int n = 50000;
    int *arr = SortTestHelper::generateRandomArray(n,0,n);
    int *arr2=SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("insertionSort", insertionSort, arr, n);
    SortTestHelper::testSort("mergeSort",mergeSort,arr2,n);
    delete[] arr;
    delete[] arr2;
    return 0;
}
