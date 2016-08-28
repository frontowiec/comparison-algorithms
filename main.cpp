#include <iostream>

using namespace std;

void heapify(int heap[], int length) {
    for (int i = length-1; i >= 0; i--) {
        if(i>0) {
            int parent = heap[(i-1)/2];
            int child = heap[i];
            if(parent < child) {
                heap[i] = parent;
                heap[(i-1)/2] = child;
            }
        }
    }
}

int main() {
    string str;
    cin >> str;
    int heap[str.length()];
    for (int i = 0; i < str.length(); i++) {
        heap[i] = (int) str[i] - '0';
    }
    heapify(heap, str.length());

    for(int i = 0; i < str.length(); i++) {
        cout << heap[i] << " | ";
    }

    cout << endl;

    return 0;
}