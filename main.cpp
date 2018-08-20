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

    string mystr;

    cout << "### COMMAND LINE INTEGRATED SYSTEM ###" << endl << endl;

    cout << "#ENTER THE EMPLOYEE NAME:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmpName();
    cout << endl;
    cout << "#ENTER THE EMPLOYEE LAST NAME:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmpLastName();
    cout << endl;
    cout << "#ENTER THE EMPLOYEE AGE:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmpAge();
    cout << endl;
    cout << "#ENTER THE EMPLOYEE GENDER:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getGender();
    cout << endl;
    cout << "#ENTER THE EMPLOYEE EMAIL:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmail();
    cout << endl;

    p->employee_acessor.putEmp(100, p->employee_acessor.getEmpAge(), p->employee_acessor.getGender(),
                               p->employee_acessor.getEmpName(), p->employee_acessor.getEmpLastName(),
                               p->employee_acessor.getEmail(), 20.000);

    p->employee_acessor.getCompleteEmp();


    return 0;
}
