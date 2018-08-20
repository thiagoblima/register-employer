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

    cout << "### Employer Command Line Interface Tool ###" << endl << endl;
    cout << "### Stage one - Enter personal employee data as following ###" << endl << endl;

    cout << "# - Enter the employee name:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmpName();
    cout << endl;
    cout << "# - Enter the employee last name:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmpLastName();
    cout << endl;
    cout << "# - Enter the employee age:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmpAge();
    cout << endl;
    cout << "# - Enter the employee gender:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getGender();
    cout << endl;
    cout << "# - Enter the employee email:";
    getline(cin, mystr);
    (stringstream) mystr >> p->employee_acessor.getEmail();
    cout << endl;

    cout << "### First stage completed (employee personal data) !   " << endl;
    cout << "### Stage two - Enter technical employee data as following ###" << endl << endl;

    p->getProgrammerLevel();
    p->getProgrammerRole();
    p->getProgrammerLangBackEnd();
    p->getProgrammerLangFrontEnd();
    p->getProgrammerOperationalSystem();

    cout << endl;

    p->employee_acessor.putEmp(100, p->employee_acessor.getEmpAge(), p->employee_acessor.getGender(),
                               p->employee_acessor.getEmpName(), p->employee_acessor.getEmpLastName(),
                               p->employee_acessor.getEmail(), 20.000);

    p->employee_acessor.getCompleteEmp();


    return 0;
}
