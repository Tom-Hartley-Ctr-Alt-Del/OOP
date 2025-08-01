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
    
    for (int j=1; j<mid; j++) {
        if (array[j-1] > array[j]) {
            return false;
        }
    }

    return true;
}