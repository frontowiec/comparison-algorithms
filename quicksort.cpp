void quicksort(int data[], int l, int r) {
    int i = l;
    int j = r;
    int piwot = data[(l+r)/2];
    int w;

    do {
        while(data[i] < piwot) i++;
        while(data[j] > piwot) j--;

        if(i <= j) {
            w = data[i];
            data[i] = data[j];
            data[j] = w;

            i++;
            j--;
        }
    }while (i <= j);

    if(l < j) quicksort(data, l, j);
    if(r > i) quicksort(data, i, r);
}

