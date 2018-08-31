#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
#include "conio.h"
#include "employee.h"
#include "programmer.h"

using namespace std;

int main() {
    programmer *p;
    p = &pprogrammer;

    p->employee_acessor.executeEmp();
    p->executeProgrammer();

    p->employee_acessor.putEmp(100, p->employee_acessor.getAgeInstance(), p->employee_acessor.getGenderInstance(),
                               p->employee_acessor.getENameInstance(), p->employee_acessor.getELastNameInstance(),
                               p->employee_acessor.getEmailInstance(), 20.000);

    p->employee_acessor.getCompleteEmp();
    return 0;
}
