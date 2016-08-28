#include <iostream>
#include "heap.h"
#include "bubble.h"

using namespace std;

int main() {
    string str;
    cin >> str;
    int data1[str.length()];
    int data2[str.length()];
    int data3[str.length()];
    for (int i = 0; i < str.length(); i++) {
        data1[i] = (int) str[i] - '0';
        data2[i] = (int) str[i] - '0';
        data3[i] = (int) str[i] - '0';
    }

    cout << "Heap sort" << endl;
    heapSort(data1, str.length() - 1);
    cout << endl;

    cout << "Quick sort" << endl;
    cout << endl;

    cout << "Bubble sort" << endl;
    bubbleSort(data3, str.length() - 1);
    cout << endl;

    return 0;
}