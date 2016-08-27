#include <iostream>

using namespace std;

void heapify(int heap[], int length) {
    for (int i = 0; i < length; i++) {
        cout << heap[i] << endl;
    }
}

int main() {
    string str;
    cin >> str;
    int heap[str.length()];
    for(int i = 0; i < str.length(); i++) {
        heap[i] = (int)str[i]-'0';
    }

    heapify(heap, str.length());
    return 0;
}