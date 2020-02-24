//
// Created by Jae Liu on 2020/2/24.
//

#ifndef DEMOFORLINUX_SELECTIONSORT_H
#define DEMOFORLINUX_SELECTIONSORT_H

template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        //寻找[i,n）中最小元素的索引
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }

}

#endif //DEMOFORLINUX_SELECTIONSORT_H
