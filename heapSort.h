//
// Created by Jae Liu on 2020/2/26.
//

#ifndef DEMOFORLINUX_HEAPSORT_H
#define DEMOFORLINUX_HEAPSORT_H

#include <iostream>

using namespace std;
void __shiftDown(int arr[], int n, int k) {
    while (2 * k + 1 <= n) {
        int j = 2 * k + 1;
        if (j + 1 <= n && arr[j + 1] > arr[j]) {
            j++;
        }
        if (arr[k] > arr[j])break;
        swap(arr[k], arr[j]);
        k = j;
    }
}
void heapSort(int arr[], int n) {
    //heapifty
    for (int i =(n-2)/2; i >=0 ; --i) {
        __shiftDown(arr,n-1,i);
    }
    for (int j =n-1; j >0; --j) {
        swap(arr[0],arr[j]);
        __shiftDown(arr,j-1,0);
    }
}


#endif //DEMOFORLINUX_HEAPSORT_H
