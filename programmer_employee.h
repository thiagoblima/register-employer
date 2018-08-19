#include <utility>




/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: programmer_employee
 * @description: Programmer employee class to define
 * the programmer's behavior.
 */
//
// Created by Samsung on 19/08/2018.
//

#ifndef EMPLOY_PROGRAMMER_EMPLOYEE_H
#define EMPLOY_PROGRAMMER_EMPLOYEE_H

#include <utility>
#include <string>
#include <string.h>
#include <cstdio>
#include "employee.h"

class programmer : employee {
protected:
    enum p_lang_level {
        JUNIOR,
        FULL,
        SENIOR
    };
    enum p_lang_role {
        FRONTEND,
        BACKEND,
        FULLSTACK,
        SOFTWARE_ARCHITECT,
        SOFTWARE_ENGINEER
    };
    enum p_lang_back_end {
        JAVA,
        C,
        CPP,
        CSharp,
        VB,
        NODE
    };
    enum p_lang_front_end {
        JAVASCRIPT,
        TYPESCRIPT,
        ANGULAR,
        REACT,
        HTML5,
        SASS,
        CSS,
    };
    enum p_operational_system {
        WINDOWS,
        LINUX,
        MAC
    };
private:
    int p_years_xp;
    std::string role;
    std::string p_lang;
public:
    void getProgrammer();
    void putProgrammer(std::string role, std::string p_lang, int years_xp);

} pprogrammer;

void programmer::putProgrammer(std::string role, std::string p_lang, int years_xp) {
    this->role = std::move(role);
    this->p_lang = std::move(p_lang);
    this->p_years_xp = years_xp;
}

void programmer::getProgrammer() {
    printf("Employee Id=%s\n", this->role.c_str());
    printf("Employee Name=%s\n", this->p_lang.c_str());
    printf("Employee Salary=%d\n",this->p_years_xp);
}

#endif //EMPLOY_PROGRAMMER_EMPLOYEE_H
