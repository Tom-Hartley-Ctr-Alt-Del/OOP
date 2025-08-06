#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int base10Sum=0;
    for (int i=0; i<number_of_digits; i++) {
        base10Sum+=binary_digits[i]*pow(2,number_of_digits-1-i);
    }
    return base10Sum;
}
