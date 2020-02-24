//
// Created by Jae Liu on 2020/2/24.
//

#ifndef DEMOFORLINUX_SORTTESTHELPER_H
#define DEMOFORLINUX_SORTTESTHELPER_H

#include <iostream>
#include <ctime>
#include <string>
#include <cassert>

using namespace std;
namespace SortTestHelper {
    int *generateRandomArray(int n, int rangeL, int rangeR) {
        int *arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }

    int *generateNearlyOrderedArray(int n, int swapTime) {
        int *arr = new int[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = i;
        }
        srand(time(NULL));
        while (swapTime--) {
            int i = rand() % n;
            int j = rand() % n;
            swap(arr[i], arr[j]);
        }
        return arr;
    }

    void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }

    template<typename T>
    void testSort(string sortName, void (*sort)(T[], int), T arr[], int n) {
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        assert(isSorted(arr, n));
        std::cout << sortName << ":" << double(endTime - startTime) / CLOCKS_PER_SEC << "s\n";
    }

    int *copyIntArray(int arr[], int n) {
        int *copy_arr = new int[n];
        copy(arr, arr + n, copy_arr);
        return copy_arr;
    }
} // namespace SortTestHelper
#endif //DEMOFORLINUX_SORTTESTHELPER_H
