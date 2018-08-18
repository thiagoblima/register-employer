#include <iostream>
#include <string.h>
#include "conio.h"
#include "employ.h"

int main() {
    employer *e;
    e = &pemp;
    e->putEmp(101, const_cast<char *>("f,d,a"), 22.789);
    e->getEmp();
    return 0;
}