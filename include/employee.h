/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: employer
 * @description: Main class, data structure for
 * using <employ> object as model to be inherited
 * or polymorphically mutated in order to attend
 * all the circumstances of its usage.
 */

#include <string.h>
#include <cstdio>

#ifndef EMPLOYEE_EMPLOYEE_H
#define EMPLOYEE_EMPLOYEE_H

class employee {

private:
    int empid;
    int age;
    char gender[10];
    char ename[10];
    char elastname[10];
    char email[20];
    float salary;

public:

    employee() = default;

    int &getEmpIdInstance();

    int &getAgeInstance();

    char *getGenderInstance();

    char *getENameInstance();

    char *getELastNameInstance();

    char *getEmailInstance();

    float *setSalary(float basic);

    float &getSalaryInstance();

    void executeEmp();

    void greetingsEmp();

    void empSuccessSaved();

    void putEmp(int id, char name[10], float basic);

    void putEmp(int id, int age, char gender[1], char ename[10], char elastname[10], char email[20], float salary);

    void getEmp();

    void getCompleteEmp();

    int &getEmpId();

    int &getEmpAge();

    char *getEmpGender();

    char *getEmpName();

    char *getEmpLastName();

    char *getEmpEmail();

    float &getSalary();

} pemp, aemp;

int &employee::getEmpIdInstance() {
    return this->empid;
}

int &employee::getAgeInstance() {
    return this->age;
}

char *employee::getGenderInstance() {
    return this->gender;
}

char *employee::getENameInstance() {
    return this->ename;
}

char *employee::getELastNameInstance() {
    return this->elastname;
}

char *employee::getEmailInstance() {
    return this->email;
}

float *employee::setSalary(float basic) {
    this->salary = basic;
}

float &employee::getSalaryInstance() {
    return this->salary;
}

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

void employee::executeEmp() {
    this->greetingsEmp();
    this->getEmpName();
    this->getEmpLastName();
    this->getEmpGender();
    this->getEmpAge();
    this->getEmpEmail();
    this->empSuccessSaved();
}

void employee::greetingsEmp() {
    std::cout << "### Employer Command Line Interface Tool ###" << std::endl << std::endl;
    std::cout << "### Stage one - Enter personal employee data as following ###" << std::endl << std::endl;
}

void employee::empSuccessSaved() {
    std::cout << std::endl << std::endl;
    std::cout << "### First stage completed (employee personal data) !   " << std::endl << std::endl;
}

int &employee::getEmpId() {
    return this->empid;
}

int &employee::getEmpAge() {
    std::string mystr;
    std::cout << "# - Enter the employee age:";
    getline(std::cin, mystr);
    (std::stringstream) mystr >> this->age;
    if (!this->age)
        std::cout << "Age can't be null and neither a text, please enter a valid age" << std::endl << this->getEmpAge();
    return this->age;
}

char *employee::getEmpGender() {
    std::string mystr;
    std::cout << "# - Enter the employee gender:";
    getline(std::cin, mystr);
    (std::stringstream) mystr >> this->gender;
    if ((*this->gender == 0) || (isdigit(this->gender[0])))
        std::cout << "Gender can't be null and neither a digit, please enter a valid gender" << std::endl
                  << this->getEmpGender();
    return this->gender;
}

char *employee::getEmpName() {
    std::string mystr;
    std::cout << "# - Enter the employee name:";
    getline(std::cin, mystr);
    (std::stringstream) mystr >> this->ename;
    if ((*this->ename == 0) || (isdigit(this->ename[0])))
        std::cout << "Name can't be null and neither a digit, please enter a valid name" << std::endl
                  << this->getEmpName();
    return this->ename;
}

char *employee::getEmpLastName() {
    std::string mystr;
    std::cout << "# - Enter the employee last name:";
    getline(std::cin, mystr);
    (std::stringstream) mystr >> this->elastname;
    if ((*this->elastname == 0) || (isdigit(this->elastname[0])))
        std::cout << "Last name can't be null and neither a digit, please enter a valid last name" << std::endl
                  << this->getEmpLastName();
    return this->elastname;
}

char *employee::getEmpEmail() {
    std::string mystr;
    std::cout << "# - Enter the employee email:";
    getline(std::cin, mystr);
    (std::stringstream) mystr >> this->email;
    if ((*this->email == 0) || (isdigit(this->email[0])))
        std::cout << "Last name can't be null and neither a digit, please enter a valid email" << std::endl
                  << this->getEmpEmail();
    return this->email;
}

float &employee::getSalary() {
    return this->salary;
};

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
    printf("Employee Salary=%f\n", this->getSalaryInstance());
}

#endif //EMPLOY_EMPLOY_H
