#include "maxheap.h"
#include <iostream>

MaxHeap::MaxHeap(int capacity) {
    arr = new int [capacity];
    this->capacity = capacity;
    this->size = 0;
}

//private:
int MaxHeap::parent(int index_of_node) {
    if(index_of_node % 2 == 0)
        return (index_of_node / 2) - 1;
    else
        return (index_of_node / 2);
}
int MaxHeap::left(int index_of_node) {
    return (index_of_node * 2) + 1;
}
int MaxHeap::right(int index_of_node) {
    return (index_of_node * 2) + 2;
}
void MaxHeap::siftup(int index_of_node) {
    if(index_of_node == 0)      //one element in heap
        return;
    //the index here would resemble the index of the element that is being inputed intp the heap
    int parent_index = parent(index_of_node);

    if(arr[parent_index] < arr[index_of_node]) {
        int temp = arr[parent_index];
        arr[parent_index] = arr[index_of_node];
        arr[index_of_node] = temp;
        siftup(parent_index);       //keeps calling the function until the maxheap logic is satisfied
    }
}

//public:
int MaxHeap::getSize() {
    return size;
}
void MaxHeap::print_heap() {
    std::cout << "[ ";
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << ']';
}
void MaxHeap::insert(int k) {
    if(size < capacity) {
        arr[size] = k;
        siftup(size);
        size++;
    } else {
      std::cout << "Heap is full!";
    }
}


