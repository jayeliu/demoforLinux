//
// Created by Jae Liu on 2020/2/26.
//

#ifndef DEMOFORLINUX_INDEXMAXHEAP_H
#define DEMOFORLINUX_INDEXMAXHEAP_H

#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

template<typename Item>
class IndexMaxHeap {
private:
    Item *data;
    int *indexes;
    int *reverse;
    int count;
    int capacity;

    void shiftUp(int k) {
        while (k > 1 && data[indexes[k / 2]] < data[indexes[k]]) {
            swap(indexes[k], indexes[k / 2]);
            reverse[indexes[k / 2]] = k / 2;
            reverse[indexes[k]] = k;
            k /= 2;
        }
    }

    void shiftDown(int k) {
        while (2 * k <= count) {
            int j = 2 * k;
            if (j + 1 <= count && data[indexes[j + 1]] > data[indexes[j]]) {
                j++;
            }
            if (data[indexes[k]] >= data[indexes[j]])break;
            swap(indexes[k], indexes[j]);
            reverse[indexes[k]] = k;
            reverse[index es[j]] = j;
            k = j;
        }
    }

public:
    IndexMaxHeap(Item arr[], int n) {
        data = new Item[n + 1];
        count = n;
        capacity = n;
        for (int j = 0; j < n; ++j) {
            data[j + 1] = arr[j];
        }
        for (int i = count / 2; i > 0; i--) {
            shiftDown(i);
        }

    }

    IndexMaxHeap(int capacity) {
        data = new Item[capacity + 1];
        indexes = new Item[capacity + 1];
        reverse = new Item[capacity + 1];
        for (int i = 0; i < capacity; ++i) {
            reverse[i] = 0;
        }
        count = 0;
        this->capacity = capacity;
    }

    ~IndexMaxHeap() {
        delete[] data;
        delete[] indexes;
        delete[] reverse;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    //i
    void insert(int i, Item item) {
        assert(count + 1 <= capacity);
        assert(i + 1 >= 1 && i + 1 <= capacity);
        i += 1;
        data[count + 1] = item;
        indexes[count + 1] = i;
        reverse[i] = count + 1;
        count++;
        shiftUp(count);
    }

    Item pop() {
        assert(!isEmpty());
        Item ret = data[indexes[1]];
        indexes[1] = indexes[count];
        reverse[indexes[1]] = 1;
        reverse[indexes[count]] = 0;
        count--;
        shiftDown(1);
        return ret;
    }

    int popIndex() {
        assert(!isEmpty());
        Item ret = indexes[1] - 1;
        indexes[1] = indexes[count];
        reverse[indexes[1]] = 1;
        reverse[indexes[count]] = 0;
        count--;
        shiftDown(1);
        return ret;
    }

    bool contain(int i) {
        assert(i + 1 >= 1 && i + 1 <= capacity);
        return reverse[i + 1] != 0;
    }

    Item getItem(int i) {
        assert(contain(i));
        return data[i + 1];
    }

    void change(int i, Item newItem) {
        assert(contain(i));
        i += 1;
        data[i] = newItem;
        int j = reverse[i];
        shiftDown(j);
        shiftUp(j);
    }
};

#endif //DEMOFORLINUX_INDEXMAXHEAP_H
