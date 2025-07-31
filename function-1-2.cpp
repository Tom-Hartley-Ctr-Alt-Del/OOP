double average(int array[], int n) {
    int sum;
    for (int i=0; i<n; i++) {
        sum=sum+array[i];
    }

    double average=(double)sum/n;

    return average;
}