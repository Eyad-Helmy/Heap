#include <iostream>
#include "maxheap.h"

using namespace std;

int main() {
    MaxHeap h(8);
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(7);
    h.insert(8);
    h.print_heap();
    return 0;
}
