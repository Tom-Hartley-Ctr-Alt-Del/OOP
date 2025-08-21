#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

PersonList deepCopyPersonList(PersonList p1) {
    PersonList copy;
    copy.numPeople=p1.numPeople;
    copy.people= new Person[copy.numPeople];

    for (int i=0; i<copy.numPeople; i++) {
        copy.people[i].name=p1.people[i].name;
        copy.people[i].age=p1.people[i].age;
    }

    return copy;
}