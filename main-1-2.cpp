#include <iostream>
#include "Orchestra.h"
#include "Musician.h"

int main() {
    Orchestra orchestra(2);
    Musician m1("Violin", 5);
    Musician m2("Piano", 3);
    Musician m3("Drums", 4);

    orchestra.add_musician(m1);
    orchestra.add_musician(m2);

    if (!orchestra.add_musician(m3)) {
        std::cout << "Orchestra is full!\n";
    }

    std::cout << "Current members: " << orchestra.get_current_number_of_members() << "\n";

    if (orchestra.has_instrument("Piano")) {
        std::cout << "A pianist is in the orchestra.\n";
    }

    return 0;
}