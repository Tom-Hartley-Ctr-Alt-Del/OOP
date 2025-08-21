#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

extern PersonList deepCopyPersonList(PersonList);

int main() {
    PersonList original;
    original.numPeople=3;
    original.people=new Person[original.numPeople];

    original.people[0]={"Alice",1};
    original.people[1]={"Alicee",2};
    original.people[2]={"Aliceee",3};

    PersonList copy=deepCopyPersonList(original);
    original.people[1].name = "SUCCESS";

    cout << original.people[1].name << endl;
    return 0;
}