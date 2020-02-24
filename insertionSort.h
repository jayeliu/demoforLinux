//
// Created by Jae Liu on 2020/2/24.
//

#ifndef DEMOFORLINUX_INSERTIONSORT_H
#define DEMOFORLINUX_INSERTIONSORT_H

template<typename T>
void insertionSort(T arr[], int n) {
    //从一号元素开始排
    for (int i = 1; i < n; i++) {
        int tmp = arr[i];
        int j;//j是选定元素应该插入的位置
        for (j = i; j > 0 && tmp < arr[j - 1]; j--) {
            arr[j] = arr[j - 1];
        }
        //交换元素位置
        arr[j] = tmp;
    }
}
//对[l,r]进行排序
template <typename T>
void insertionSort(T arr[],int l,int r){
    for (int i =l+1; i <=r; ++i) {
        int tmp=arr[i];
        int j;
        for (j = i;j>l&&tmp<arr[j-1]; --j) {
            arr[j]=arr[j-1];
        }
        arr[j]=tmp;
    }
}
#endif //DEMOFORLINUX_INSERTIONSORT_H
