cmake_minimum_required(VERSION 3.10)
project(demoforLinux)

set(CMAKE_CXX_STANDARD 14)

add_executable(demoforLinux main.cpp SortTestHelper.h selectionSort.h insertionSort.h shellSort.h mergeSort.h quickSort.h MaxHeap.h heapSort.h indexMaxHeap.h BinarySearch.h)