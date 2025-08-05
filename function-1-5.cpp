#include <iostream>

extern int count_evens(int);

int main(){
    int number=10;
    std::cout << "The even numbers between 1 and " << number << " is " << count_evens(number) << std::endl; 
    return 0;
}