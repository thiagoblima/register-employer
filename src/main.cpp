/**
 * @author: <thitheguy@gmail.com> Thiago Lima
 * @description: main entry for the application.
 * @version: 0.1.0
 */

#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <sstream>
#include "../lib/conio.h"
#include "../include/employee.h"
#include "../include/programmer.h"

using namespace std;

int main() {
    programmer *p;
    p = &pprogrammer;

    system("clear");

    p->employee_acessor.executeEmp();
    p->executeProgrammer();

    p->employee_acessor.putEmp(
            100,
            p->employee_acessor.getAgeInstance(), p->employee_acessor.getGenderInstance(),
            p->employee_acessor.getENameInstance(), p->employee_acessor.getELastNameInstance(),
            p->employee_acessor.getEmailInstance(), p->language_acessor.employee_acessor.getSalaryInstance()
    );

    p->employee_acessor.getCompleteEmp();

    delete p;
    system("getch");

    return 0;
}
