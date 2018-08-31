/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: programmer_employee
 * @description: Programmer employee class to define
 * the programmer's behavior.
 */

#ifndef EMPLOY_PROGRAMMER_H
#define EMPLOY_PROGRAMMER_H

#include <utility>
#include <string>
#include <cstring>
#include <cstdio>
#include <iomanip>
#include <istream>
#include <iostream>
#include "employee.h"
#include "languages.h"

class programmer : employee {

private:
    int p_years_xp{};
    std::string role{};
    std::string p_lang{};
public:
    employee employee_acessor;
    languages languages_acessor;

    void executeProgrammer();

    void greetingsProgrammer();

    void programmerSuccessSaved();

    void getProgrammer();

    void putProgrammer(std::string role, std::string p_lang, int p_years_xp);

} pprogrammer;

void programmer::putProgrammer(std::string role, std::string p_lang, int p_years_xp) {
    this->role = std::move(role);
    this->p_lang = std::move(p_lang);
    this->p_years_xp = p_years_xp;
}

void programmer::getProgrammer() {
    printf("Employee Role=%s\n", this->role.c_str());
    printf("Employee Program Language=%s\n", this->p_lang.c_str());
    printf("Employee Years Of Experience=%d\n", this->p_years_xp);
}

void programmer::executeProgrammer() {
    this->greetingsProgrammer();
    this->languages_acessor.getProgrammerLevel();
    this->languages_acessor.getProgrammerRole();
    this->languages_acessor.getProgrammerLangBackEnd();
    this->languages_acessor.getProgrammerLangFrontEnd();
    this->languages_acessor.getProgrammerOperationalSystem();
    this->programmerSuccessSaved();
}

void programmer::greetingsProgrammer() {
    std::cout << "### Stage two - Enter technical employee data as following ###" << std::endl << std::endl;
}

void programmer::programmerSuccessSaved() {
    std::cout << std::endl << std::endl;
    std::cout << "### Second stage completed (programmer professional data) !   " << std::endl << std::endl;
}



#endif //EMPLOY_PROGRAMMER_H