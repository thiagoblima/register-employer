/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: employ
 * @description: Main class, data structure for
 * using <employ> object as model to be inherited
 * or polymorphically mutated in order to attend
 * all the circumstances of its usage.
 *
 */

#include <string.h>
#include <cstdio>

#ifndef EMPLOY_EMPLOY_H
#define EMPLOY_EMPLOY_H

class employer {

    // no need to set them as private,
    // in C++ they're automatically private as defualt

    int empid;
    char ename[10];
    float salary;

public:
    void putEmp(int id, char name[10], float basic);
    void getEmp();

}pemp;

void employer::putEmp(int id, char *name, float basic) {
    this->empid = id;
    strcpy(this->ename, name);
    this->salary = basic;
}

void employer::getEmp() {
    printf("EmployeeId=%d\n", this->empid);
    printf("Employee Name=%s\n", this->ename);
    printf("Employee Salary=%f\n",this->salary);
}

#endif //EMPLOY_EMPLOY_H
