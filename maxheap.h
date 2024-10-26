// #ifndef MAXHEAP_H
// #define MAXHEAP_H
// #endif //MAXHEAP_H
#pragma once
class MaxHeap {
private:
    int *arr = nullptr;
    int capacity = 0;   //max capacity of heap
    int size = 0;       //current capacity of heap

    int parent(int index_of_node);
    int left(int index_of_node);
    int right(int index_of_node);
    void siftup(int index_of_node);

public:
    MaxHeap(int capacity);
    int getSize();
    void print_heap();
    void insert(int k);
};