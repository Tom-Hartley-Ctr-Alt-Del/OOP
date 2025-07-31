int num_count(int array[], int n, int number) {
    int num_count = 0;
    if (n<0) {
        return num_count;
    }
    for (int i=0; i<n; i++) {
        if (array[i]==number) {
            num_count++;
        }
    }
    return num_count;
}