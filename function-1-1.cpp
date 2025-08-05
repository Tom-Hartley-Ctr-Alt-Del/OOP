int sum_diagonal(int *array) {
    int sum=0;
    int size=4;
    for (int i=0; i<4; i++) {
        sum=sum+array[i*4+i];     
    }
    return sum;
}