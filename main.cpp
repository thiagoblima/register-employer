#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
#include "conio.h"
#include "employee.h"
#include "programmer_employee.h"

using namespace std;

int main() {
    programmer *p;
    p = &pprogrammer;

    p->employee_acessor.executeEmp();
    p->executeProgrammer();

    p->employee_acessor.putEmp(100, p->employee_acessor.getEmpAge(), p->employee_acessor.getEmpGender(),
                               p->employee_acessor.getEmpName(), p->employee_acessor.getEmpLastName(),
                               p->employee_acessor.getEmpEmail(), 20.000);

    p->employee_acessor.getCompleteEmp();

    return 0;
}
