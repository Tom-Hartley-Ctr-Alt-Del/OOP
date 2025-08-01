bool is_fanarray(int array[], int n) {
    if (n<1) {
        return false;
    }
    int mid=n/2;

    for (int i=0; i<mid; i++) {
        if (array[i]!=array[n-1-i]) {
            return false;
        }
    }
    
    for (int j=0; j<mid-1; j++) {
        if (array[j] > array[j+1]) {
            return false;
        }
    }

    return true;
}