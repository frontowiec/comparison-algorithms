#include <iostream>

using namespace std;

void bubbleSort(int data[], int length) {
    bool done;
    int w;
    do {
        done = true;
        for (int i = 0; i < length; i++) {
            if (data[i] > data[i + 1]) {
                w = data[i];
                data[i] = data[i+1];
                data[i+1] = w;

                done = false;
            }
        }
    } while (!done);

    for(int i = 0; i < length+1; i++){
        cout << data[i] << " | ";
    }

    cout << endl;
}