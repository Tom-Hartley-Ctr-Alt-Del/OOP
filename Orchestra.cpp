#include "Musician.h"
#include "Orchestra.h"
#include <string>

Orchestra::Orchestra() {
    currentSize=0;
    limit=5;
    members = new Musician[limit];
}

Orchestra::Orchestra(int chosenLimit) {
    limit=chosenLimit;
    currentSize=0;
    members=new Musician[limit];
}

int Orchestra::get_current_number_of_members() {
    return currentSize;
}

Musician* Orchestra::get_members() {
    return members;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i=0; i<currentSize; i++) {
        if (members[i].get_instrument()==instrument) {
            return true;
        }
    }
    return false;
}

bool Orchestra::add_musician(Musician new_musician) {
    if (currentSize<limit) {
        members[currentSize]=new_musician;
        currentSize++;
        return true;
    }
    return false;
}

Orchestra::~Orchestra() {
    delete [] members;
}