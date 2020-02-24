//
// Created by Jae Liu on 2020/2/24.
//

#ifndef DEMOFORLINUX_INSERTIONSORT_H
#define DEMOFORLINUX_INSERTIONSORT_H

template<typename T>
void insertionSort(T arr[], int n) {
    //从一号元素开始排
    for (int i = 1; i < n; i++) {
        int j = i;
        int tmp = arr[j];
        while (j > 0 && tmp < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = tmp;
    }
}

#endif //DEMOFORLINUX_INSERTIONSORT_H
