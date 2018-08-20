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

private:
    int empid;
    int age;
    char gender[1];
    char ename[10];
    char elastname[10];
    char email[20];
    float salary;

public:
    void putEmp(int id, char name[10], float basic);

    void putEmp(int id, int age, char gender[1], char ename[10], char elastname[10], char email[20], float salary);

    void getEmp();

    void getCompleteEmp();

    int &getEmpId();

    int &getEmpAge();

    char *getGender();

    char *getEmpName();

    char *getEmpLastName();

    char *getEmail();

    float &getSalary();

} pemp, aemp;

void employee::putEmp(int id, char *name, float basic) {
    this->empid = id;
    strcpy(this->ename, name);
    this->salary = basic;
}

void employee::putEmp(int id, int age, char *gender, char *name, char *lastname, char *email, float basic) {
    this->empid = id;
    this->age = age;
    strcpy(this->gender, gender);
    strcpy(this->ename, name);
    strcpy(this->elastname, lastname);
    strcpy(this->email, email);
    this->salary = basic;
}

int &employee::getEmpId() {
    return this->empid;
}

int &employee::getEmpAge() {
    return this->age;
}

char *employee::getGender() {
    return this->gender;
}

char *employee::getEmpName() {
    return this->ename;
}

char *employee::getEmpLastName() {
        return this->elastname;
}

char *employee::getEmail() {
    return this->email;
}

float &employee::getSalary() {
    return this->salary;
}

void employee::getEmp() {
    printf("Employee Id=%d\n", this->empid);
    printf("Employee Name=%s\n", this->ename);
    printf("Employee Salary=%f\n", this->salary);
}

void employee::getCompleteEmp() {
    printf("Employee Id=%d\n", this->empid);
    printf("Employee Age=%d\n", this->age);
    printf("Employee Gender=%s\n", this->gender);
    printf("Employee Name=%s\n", this->ename);
    printf("Employee Last Name=%s\n", this->elastname);
    printf("Employee Email=%s\n", this->email);
    printf("Employee Salary=%f\n", this->salary);
}

#endif //EMPLOY_EMPLOY_H
