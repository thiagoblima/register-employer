/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: programmer
 * @description: Programmer class to define
 * the programmer behavior through the program.
 */

#ifndef EMPLOY_PROGRAMMER_H
#define EMPLOY_PROGRAMMER_H

#include "employee.h"
#include "languages.h"

class programmer {

private:
    int p_years_xp{};
    std::string role{};
    std::string p_lang{};
public:

    employee employee_acessor;
    languages language_acessor;

    programmer() = default;

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
    this->language_acessor.getProgrammerLevel();
    this->language_acessor.getProgrammerRole();
    this->language_acessor.getProgrammerLangBackEnd();
    this->language_acessor.getProgrammerLangFrontEnd();
    this->language_acessor.getProgrammerOperationalSystem();
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
