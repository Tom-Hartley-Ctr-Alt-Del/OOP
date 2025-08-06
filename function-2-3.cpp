bool is_palindrome(int integers[], int length) {
    int mid=length/2;
    for (int i=0; i<mid; i++) {
        if (integers[i]!=integers[length-1-i]) {
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length) {
    int sum=0;
    for (int i=0; i<length; i++) {
        sum+=integers[i];
    }
    return sum;
}


int sum_if_palindrome(int integers[], int length) {
    if (length<=0) {
        return -1;
    } else if (is_palindrome(integers, length)==true) {
        int sum=sum_array_elements(integers, length);
        return sum;
    } 
    return -2;
}