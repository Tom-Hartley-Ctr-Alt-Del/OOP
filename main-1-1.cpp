#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int);

int main(void) {
    int people=3;
    Person* group = createPersonArray(people);

    for (int i=0; i<people; i++) {
        cout << group[i].name << ", " <<group[i].age << endl;
    }
    return 0;
}