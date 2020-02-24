//
// Created by Jae Liu on 2020/2/24.
//

#ifndef DEMOFORLINUX_SHELLSORT_H
#define DEMOFORLINUX_SHELLSORT_H
void shellSort(int arr[],int n){
    for (int gap =n/2; gap>0;gap/=2) {
        for (int i =gap; i <n; ++i) {
            int j=i;
            int tmp=arr[j];
            while(j>=gap&&tmp<arr[j-gap]){
                arr[j]=arr[j-gap];
                j-=gap;
            }
            arr[j]=tmp;
        }
    }
}
#endif //DEMOFORLINUX_SHELLSORT_H
