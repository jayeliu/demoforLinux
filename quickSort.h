//
// Created by Jae Liu on 2020/2/24.
//

#ifndef DEMOFORLINUX_QUICKSORT_H
#define DEMOFORLINUX_QUICKSORT_H

int __partition(int arr[], int l, int r) {
    swap(arr[l], arr[rand() % (r - l + 1) + l]);
    int v = arr[l];
    int j = l;
    for (int i = l + 1; i <= r; ++i) {
        if (arr[i] < v) {
            swap(arr[i], arr[j + 1]);
            j++;
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

int __partitionDW(int arr[], int l, int r) {
    swap(arr[l], arr[rand() % (r - l + 1) + l]);
    int v = arr[l], i = l + 1, j = r;
    while (true) {
        while (i <= r && arr[i] < v)i++;
        while (j >= l + 1 && arr[j] > v)j--;
        if (i > j)break;
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    swap(arr[l], arr[j]);
    return j;
}
void __quickSort(int arr[], int l, int r) {
    if (l >= r)
        return;
    int p = __partition(arr, l, r);
    __quickSort(arr, l, p - 1);
    __quickSort(arr, p + 1, r);
}

void __quickSortDW(int arr[], int l, int r) {
    if (l >= r)
        return;
    int p=__partitionDW(arr,l,r);
    __quickSortDW(arr, l, p - 1);
    __quickSortDW(arr, p + 1, r);
}
void __quickSort3(int arr[],int l,int r){
    if(l>=r)
        return;
    //
    swap(arr[l],arr[rand()%(r-l+1)+l]);
    int v=arr[l],lt=l,i=l+1,gt=r+1;
    while(i<gt){
        if(arr[i]<v){
            swap(arr[i],arr[lt+1]);
            i++;
            lt++;
        }else if(arr[i]>v){
            swap(arr[i],arr[gt-1]);
            gt--;
        }else{
            i++;
        }
    }
    swap(arr[l],arr[lt]);
    __quickSort3(arr,l,lt-1);
    __quickSort3(arr,gt,r);
}
void quickSort(int arr[], int n) {
    srand(time(NULL));
    __quickSort(arr, 0, n - 1);
}

void quickSortDW(int arr[], int n) {
    srand(time(NULL));
    __quickSortDW(arr, 0, n - 1);
}
void quickSort3(int arr[],int n){
    srand(time(NULL));
    __quickSort3(arr,0,n-1);
}

#endif //DEMOFORLINUX_QUICKSORT_H