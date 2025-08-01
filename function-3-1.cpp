bool is_fanarray(int array[], int n) {
    if (n<1) {
        return false;
    }
    for (int i=0; i<n/2; i++) {
        if (array[i]!=array[n-1-i]) {
            return false;
        }
    }

    for (int j=0; j+1<(n/2); j++) {
        if (array[j] > array[j+1]) {
            return false;
        }
    }

    return true;
}