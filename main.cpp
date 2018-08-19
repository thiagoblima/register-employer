#include <iostream>
#include <string.h>
#include "conio.h"
#include "employee.h"

using namespace std;

int main() {
    employee *e;
    e = &pemp;

    cout << "Basic Standard Employee object model: " << endl << endl;
    e->putEmp(101, const_cast<char *>("f,d,a"), 22.789);
    e->getEmp();

    cout << endl;

    employee *a;
    a = &aemp;

    cout << "Complete Standard Employee object model: " << endl << endl;
    a->putEmp(100, 23, const_cast<char *>("m"), const_cast<char *>("thiago"), const_cast<char *>("lima"),
              const_cast<char *>("thiagolimasp@live.com"), 40.000);
    a->getCompleteEmp();

    return 0;
}