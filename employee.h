/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: employer
 * @description: Main class, data structure for
 * using <employ> object as model to be inherited
 * or polymorphically mutated in order to attend
 * all the circumstances of its usage.
 *
 */

#include <string.h>
#include <cstdio>

#ifndef EMPLOYEE_EMPLOYEE_H
#define EMPLOYEE_EMPLOYEE_H

class employee {

    // no need to set them as private,
    // in C++ they're automatically private as default

    int empid;
    char ename[10];
    float salary;

public:
    void putEmp(int id, char name[10], float basic);
    void getEmp();

}pemp;

void employee::putEmp(int id, char *name, float basic) {
    this->empid = id;
    strcpy(this->ename, name);
    this->salary = basic;
}

void employee::getEmp() {
    printf("EmployeeId=%d\n", this->empid);
    printf("Employee Name=%s\n", this->ename);
    printf("Employee Salary=%f\n",this->salary);
}

#endif //EMPLOY_EMPLOY_H
