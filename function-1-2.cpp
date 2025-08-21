#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n) {
    Person* list = new Person[n];
    for (int i=0; i<n; i++) {
        list[i].name="Jane Doe";
        list[i].age=1;
    }
    PersonList personList;
    personList.people = list;
    personList.numPeople = n;
    return personList;
}