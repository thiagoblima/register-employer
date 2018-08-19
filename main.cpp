#include <iostream>
#include <string.h>
#include "conio.h"
#include "employee.h"

int main() {
    employee *e;
    e = &pemp;
    e->putEmp(101, const_cast<char *>("f,d,a"), 22.789);
    e->getEmp();
    return 0;
}