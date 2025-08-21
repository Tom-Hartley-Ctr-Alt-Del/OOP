#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList shallow;
    shallow.numPeople=pl.numPeople;
    shallow.people=new Person[pl.numPeople];
    for (int i=0; i<shallow.numPeople; i++) {
        shallow.people=pl.people;
    }
    return shallow;
}