//
// Created by Jae Liu on 2020/2/25.
//

#ifndef DEMOFORLINUX_MAXHEAP_H
#define DEMOFORLINUX_MAXHEAP_H

#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;
template<typename Item>
class MaxHeap {
private:
    Item *data;
    int count;
    int capacity;
    void shiftUp(int k) {
        while (k > 1 && data[k / 2] < data[k]) {
            swap(data[k], data[k / 2]);
            k /= 2;
        }
    }
    void shiftDown(int k) {
        while(2*k<=count){
            int j=2*k;
            if (j+1<=count&&data[j+1]>data[j]){
                j++;
            }
            if(data[k]>=data[j])break;
            swap(data[k],data[j]);
            k=j;
        }
    }
public:
    MaxHeap(Item arr[],int n){
        data=new Item[n+1];
        count=n;
        capacity=n;
        for (int j = 0; j <n; ++j) {
            data[j+1]=arr[j];
        }
        for (int i =count/2; i>0; i--) {
            shiftDown(i);
        }

    }
    MaxHeap(int capacity) {
        data = new Item[capacity + 1];
        count = 0;
        this->capacity = capacity;
    }

    ~MaxHeap() {
        delete[] data;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    void insert(Item item) {
        assert(count + 1 <= capacity);
        data[count + 1] = item;
        count++;
        shiftUp(count);
    }

    Item pop() {
        assert(!isEmpty());
        Item ret = data[1];
        data[1] = data[count];
        count--;
        shiftDown(1);
        return ret;
    }
};

#endif //DEMOFORLINUX_MAXHEAP_H
