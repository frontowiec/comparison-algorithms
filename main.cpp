#include <iostream>
#include "heap.h"
#include "bubble.h"
#include "quicksort.h"

using namespace std;

double getUnixTime(void)
{
    struct timespec tv;

    if(clock_gettime(CLOCK_REALTIME, &tv) != 0) return 0;

    return (tv.tv_sec + (tv.tv_nsec / 1000.0));
}

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

    double start_time1 = getUnixTime();
    heapSort(data1, str.length() - 1);
    double stop_time1 = getUnixTime();

    cout << endl;

    cout << "Quick sort" << endl;
    double start_time2 = getUnixTime();
    quicksort(data2, 0, str.length()-1);
    for(int i = 0; i < str.length(); i++){
        cout << data2[i] << " | ";
    }
    cout << endl;
    double stop_time2 = getUnixTime();
    cout << endl;

    cout << "Bubble sort" << endl;
    double start_time3 = getUnixTime();
    bubbleSort(data3, str.length() - 1);
    double stop_time3 = getUnixTime();
    cout << endl;

    cout << "Heap sort execution time (ms): " << stop_time1-start_time1 << endl;
    cout << "Quick sort execution time (ms): " << stop_time2-start_time2 << endl;
    cout << "Bubble sort execution time (ms): " << stop_time3-start_time3 << endl;

    return 0;
}