double array_mean(int array[], int n) {
    if (n<0) {
        return 0.0;
    }
    int sum;
    for (int i=0; i<n; i++) {
        sum=sum+array[i];
    }

    double array_mean=(double)sum/n;

    return array_mean;
}