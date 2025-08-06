void print_scaled(int *array, int);

int main() {
    int array[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int *ptr = &array[0][0];
    int scaled=3;
    print_scaled(ptr, scaled);
}