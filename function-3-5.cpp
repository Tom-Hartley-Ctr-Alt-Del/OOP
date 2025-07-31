double sum_even(double array[], int n) {
    if (n<0) {
        return 0;
    }

    double sum_even=0;
    for (int i=0; i<n; i++) {
        if (i%2==0) {
            sum_even=sum_even+array[i];
        }
    }
    return sum_even;
}