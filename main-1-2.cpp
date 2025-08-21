#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
extern PersonList createPersonList(int);

int main() {
    int amount=3;
    PersonList list = createPersonList(amount);

    for (int i=0; i<amount; i++) {
        cout << list.people[i].name << " - " << list.people[i].age << endl;
    }
    delete[] list.people;
    return 0;
}