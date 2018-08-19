/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: programmer_employee
 * @description: Programmer employee class to define
 * the programmer's behavior.
 */

#ifndef EMPLOY_PROGRAMMER_EMPLOYEE_H
#define EMPLOY_PROGRAMMER_EMPLOYEE_H

#include <utility>
#include <string>
#include <cstring>
#include <cstdio>
#include <iomanip>
#include <istream>
#include <iostream>
#include "employee.h"

class programmer : employee {
protected:
    enum p_lang_level {
        JUNIOR,
        FULL,
        SENIOR,
        ARCHITECT,
        ENGINEER
    } plevel;
    enum p_lang_role {
        FRONTEND,
        BACKEND,
        FULLSTACK
    } prole;
    enum p_lang_back_end {
        JAVA,
        PHP,
        RUBYONRAILS,
        C,
        CPP,
        CSharp,
        VB,
        NODE
    } pbacklang;
    enum p_lang_front_end {
        JAVASCRIPT,
        TYPESCRIPT,
        ANGULAR,
        REACT,
        HTML5,
        SASS,
        CSS,
    } pfrontlang;
    enum p_operational_system {
        WINDOWS,
        LINUX,
        MAC
    } pos;
private:
    int p_years_xp{};
    std::string role{};
    std::string p_lang{};
public:
    void getProgrammer();

    void putProgrammer(std::string role, std::string p_lang, int p_years_xp);

    programmer::p_lang_level &getProgrammerLevel();

    programmer::p_lang_role &getProgrammerRole();

    programmer::p_lang_back_end &getProgrammerLangBackEnd();

    programmer::p_lang_front_end &getProgrammerLangFrontEnd();

    programmer::p_operational_system &getProgrammerOperationalSystem();
} pprogrammer;

void programmer::putProgrammer(std::string role, std::string p_lang, int p_years_xp) {
    this->role = std::move(role);
    this->p_lang = std::move(p_lang);
    this->p_years_xp = p_years_xp;
}

void programmer::getProgrammer() {
    printf("Employee Id=%s\n", this->role.c_str());
    printf("Employee Name=%s\n", this->p_lang.c_str());
    printf("Employee Salary=%d\n", this->p_years_xp);
}

programmer::p_lang_level &programmer::getProgrammerLevel() {
    char t = plevel;
    std::cout << "Enter the developer skill: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_level::JUNIOR     :
            std::cout << t << " - Junior dev \n";
            break;
        case programmer::p_lang_level::FULL       :
            std::cout << t << " - Full dev \n";
            break;
        case programmer::p_lang_level::SENIOR     :
            std::cout << t << " - Senior dev \n";
            break;
        case programmer::p_lang_level::ARCHITECT  :
            std::cout << t << " - Architect dev \n";
            break;
        case programmer::p_lang_level::ENGINEER   :
            std::cout << t << " - Engineer dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer level\n";
    }
}

programmer::p_lang_role &programmer::getProgrammerRole() {
    char t = prole;
    std::cout << "Enter the developer role: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_role::FRONTEND   :
            std::cout << t << " - FrontEnd dev \n";
            break;
        case programmer::p_lang_role::BACKEND    :
            std::cout << t << " - BackEnd dev \n";
            break;
        case programmer::p_lang_role::FULLSTACK  :
            std::cout << t << " - Fullstack dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer role\n";
    }
}

programmer::p_lang_back_end &programmer::getProgrammerLangBackEnd() {
    char t = pbacklang;
    std::cout << "Enter the developer back-end language: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_back_end::JAVA         :
            std::cout << t << " - Java dev \n";
            break;
        case programmer::p_lang_back_end::PHP          :
            std::cout << t << " - PHP dev \n";
            break;
        case programmer::p_lang_back_end::RUBYONRAILS  :
            std::cout << t << " - Ruby On Rails dev \n";
            break;
        case programmer::p_lang_back_end::C            :
            std::cout << t << " - C dev \n";
            break;
        case programmer::p_lang_back_end::CPP          :
            std::cout << t << " - C++ dev \n";
            break;
        case programmer::p_lang_back_end::CSharp       :
            std::cout << t << " - C# dev \n";
            break;
        case programmer::p_lang_back_end::VB           :
            std::cout << t << " - VB dev \n";
            break;
        case programmer::p_lang_back_end::NODE         :
            std::cout << t << " - Nodejs dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer back-end language\n";
    }
}

programmer::p_lang_front_end &programmer::getProgrammerLangFrontEnd() {
    char t = pfrontlang;
    std::cout << "Enter the developer front-end language: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_front_end::JAVASCRIPT     :
            std::cout << t << " - JavaScript dev \n";
            break;
        case programmer::p_lang_front_end::TYPESCRIPT     :
            std::cout << t << " - TypeScript dev \n";
            break;
        case programmer::p_lang_front_end::ANGULAR        :
            std::cout << t << " - Angular dev \n";
            break;
        case programmer::p_lang_front_end::REACT          :
            std::cout << t << " - React dev \n";
            break;
        case programmer::p_lang_front_end::HTML5          :
            std::cout << t << " - HTML5 dev \n";
            break;
        case programmer::p_lang_front_end::SASS           :
            std::cout << t << " - SASS dev \n";
            break;
        case programmer::p_lang_front_end::CSS            :
            std::cout << t << " - CSS dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer front-end language\n";
    }
}

programmer::p_operational_system &programmer::getProgrammerOperationalSystem() {
    char t = pos;
    std::cout << "Enter the developer front-end language: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_operational_system::WINDOWS     :
            std::cout << t << " - Dev prefers Windows \n";
            break;
        case programmer::p_operational_system::LINUX       :
            std::cout << t << " - Dev prefers Linux \n";
            break;
        case programmer::p_operational_system::MAC         :
            std::cout << t << " - Dev prefers MacOS \n";
            break;
        default:
            std::cout << "you MUST select a programmer OS preference \n";
    }
}


#endif //EMPLOY_PROGRAMMER_EMPLOYEE_H
