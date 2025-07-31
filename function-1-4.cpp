int sum_two_arrays(int array[], int secondArray[], int n) {
    int sum_array1=0;
    int sum_array2=0;
    for (int i=0; i<n; i++) {
        sum_array1=sum_array1+array[i];
        sum_array2=sum_array2+secondArray[i];
    }
    int sum_two_arrays=sum_array1+sum_array2;
    return sum_two_arrays;
}