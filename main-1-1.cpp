int array_sum(int array[], int n) {
    int sum=0;

    if (n<0) {
        return sum;
    }   
    
    for (int i=0; i<n; i++) {
        sum=sum+array[i];
    }
    return sum;
}