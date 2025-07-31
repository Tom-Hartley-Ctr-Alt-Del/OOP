int min_element(int array[], int n) {
    if (n<0) {
        return 0;
    }
    int min=array[1];
    
    for (int i=0; i<n; i++) {
        if (array[i]<min) {
            min=array[i];
        }
    }
    return min;
}