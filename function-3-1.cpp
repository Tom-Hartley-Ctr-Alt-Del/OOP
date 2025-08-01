bool is_fanarray(int array[], int n) {
    bool is_fanarray=true;
    if (n<1) {
        return false;
    }
    for (int i=0; i<n/2; i++) {
        if (array[i]!=array[n-1-i]) {
            return false;
        }
    }
    
    for (int j=1; j<n/2; j++) {
        if (array[j-1] > array[j]) {
            return false;
        }
    }

    return true;
}