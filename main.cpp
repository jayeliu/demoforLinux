#include <iostream>
#include <algorithm>
#include "selectionSort.h"
#include "insertionSort.h"
#include "SortTestHelper.h"
#include "shellSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "MaxHeap.h"
#include "heapSort.h"
#include "BinarySearch.h"
using namespace std;

int main(int, char **) {
    int n = 100;
    int *arr = SortTestHelper::generateRandomArray(n,0,n);
    SortTestHelper::testSort("insertionSort",insertionSort, arr, n);
    cout<<binarySearch(arr,n,3)<<endl;
    cout<<binarySearchDG(arr,n,3)<<endl;
    delete[]arr;
    return 0;
}
