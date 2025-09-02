#include "Musician.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    Musician m1;
    cout << "Musician 1: Has played the " << m1.get_instrument() << " for " << m1.get_experience() << " years." << endl;

    Musician m2("Guitar", 3);
    cout << "Musician 2: Has played the " << m2.get_instrument() << " for " << m2.get_experience() << " years." << endl;
    return 0;
}