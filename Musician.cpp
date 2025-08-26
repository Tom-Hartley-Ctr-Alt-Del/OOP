#include "Musician.h"
#include <string>
using namespace std;

Musician::Musician() {
    instrument="null";
    experience=0;
}

Musician::Musician(string instr, int exp) {
    instrument=instr;
    experience=exp;
}

string Musician::get_instrument() {
    return instrument;
}

int Musician::get_experience() {
    return experience;
}