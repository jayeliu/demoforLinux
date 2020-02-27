//
// Created by Jae Liu on 2020/2/24.
//

#ifndef DEMOFORLINUX_MERGESORT_H
#define DEMOFORLINUX_MERGESORT_H

void __merge(int arr[], int l, int mid, int r) {
    //开辟新空间
    int *aux=new int[r - l + 1];
    for (int i = 0; i < r - l + 1; ++i) {
        aux[i] = arr[l + i];
    }
    //归并过程开始
    int i = l, j = mid + 1;
    for (int k = l; k <= r; ++k) {
        if (i > mid) {
            arr[k] = aux[j - l];
            j++;
        } else if (j > r) {
            arr[k] = aux[i - l];
            i++;
        } else if (aux[i - l] > aux[j - l]) {
            arr[k] = aux[j - l];
            j++;
        } else {
            arr[k] = aux[i - l];
            i++;
        }
    }
    delete[] aux;
}

void __mergeSort(int arr[], int l, int r) {
    if (r-l<=16) {
        insertionSort(arr,l,r);
        return;
    }
    int mid = (l + r) / 2;
    __mergeSort(arr, l, mid);
    __mergeSort(arr, mid + 1, r);
    if (arr[mid] > arr[mid + 1])
        __merge(arr, l, mid, r);
}

void mergeSort(int arr[], int n) {
    __mergeSort(arr, 0, n - 1);
}
void mergeSortBU(int arr[],int n){
    for (int sz = 1; sz<=n;sz*=2) {
        for (int i = 0; i+sz<n;i+=2*sz) {
            __merge(arr,i,i+sz-1,min(i+2*sz-1,n-1));
        }
    }
}
#endif //DEMOFORLINUX_MERGESORT_H
