bool is_fanarray(int array[], int n) {
    bool is_fanarray=true;
    if (n<0) {
        return false;
    }
    for (int i=0; i<n/2; i++) {
        if (array[i]!=array[n-1-i]) {
            is_fanarray=false;
        break;
        }
    }
    return is_fanarray;
}