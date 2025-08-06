int is_identity(int *array) {
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if ((i==j && array[i*10+j]!=1) || (i!=j) && array[i*10+j]!=0) {
                return 0;
            }
        }
    }
    return 1;
}