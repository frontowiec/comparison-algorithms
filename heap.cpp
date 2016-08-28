#include <iostream>

using namespace std;

//TODO: nie wiem jak to uproscic
void heapify(int heap[], int length) {
    int c = length;
    while (c >= 0) {
        for (int i = length; i >= 0; i--) {
            if (i > 0) {
                int parent = heap[(i - 1) / 2];
                int child = heap[i];
                if (parent < child) {
                    heap[i] = parent;
                    heap[(i - 1) / 2] = child;
                }
            }
        }

        c--;
    }
}

void heapSort (int heap[], int length) {
    int sortingHeap[length];
    int l = length+1;
    while(length >= 0){
        heapify(heap, length);
        sortingHeap[length] = heap[0];

        heap[0] = heap[length];
        heap[length] = NULL;

        length--;
    }

    for (int i = 0; i < l; i++) {
        cout << sortingHeap[i] << " | ";
    }

    cout << endl;
}