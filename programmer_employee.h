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
    enum p_lang_level: unsigned char {
        junior = 'j',
        full = 'f',
        senior = 's',
        architect = 'a',
        engineer = 'e'
    } plevel;
    enum p_lang_role: unsigned char {
        frontend = 'f',
        backend = 'b',
        fullstack = 's'
    } prole;
    enum p_lang_back_end: unsigned char {
        java = 'j',
        php = 'p',
        ruby = 'r',
        c = 'c',
        cpp = '+',
        csharp = '#',
        vb = 'v',
        node = 'n'
    } pbacklang;
    enum p_lang_front_end: unsigned char {
        javascript = 'j',
        typescript = 't',
        angular = 'a',
        react = 'r',
        html = 'h',
        sass = 's',
        css = 'c',
    } pfrontlang;
    enum p_operational_system: unsigned char {
        windows = 'w',
        linux = 'l',
        macos = 'm'
    } pos;
private:
    int p_years_xp{};
    std::string role{};
    std::string p_lang{};
public:
    employee employee_acessor;

    void getProgrammer();

    void putProgrammer(std::string role, std::string p_lang, int p_years_xp);

    unsigned char &getProgrammerLevel();

    unsigned char &getProgrammerRole();

    unsigned char &getProgrammerLangBackEnd();

    unsigned char &getProgrammerLangFrontEnd();

    unsigned char &getProgrammerOperationalSystem();
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

unsigned char &programmer::getProgrammerLevel() {
    char t = plevel;
    std::cout << "Enter the developer skill: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_level::junior     :
            std::cout << t << " - Junior dev \n";
            break;
        case programmer::p_lang_level::full       :
            std::cout << t << " - Full dev \n";
            break;
        case programmer::p_lang_level::senior     :
            std::cout << t << " - Senior dev \n";
            break;
        case programmer::p_lang_level::architect  :
            std::cout << t << " - Architect dev \n";
            break;
        case programmer::p_lang_level::engineer   :
            std::cout << t << " - Engineer dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer level\n";
    }
}

unsigned char &programmer::getProgrammerRole() {
    char t = prole;
    std::cout << "Enter the developer role: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_role::frontend   :
            std::cout << t << " - FrontEnd dev \n";
            break;
        case programmer::p_lang_role::backend    :
            std::cout << t << " - BackEnd dev \n";
            break;
        case programmer::p_lang_role::fullstack  :
            std::cout << t << " - Fullstack dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer role\n";
    }
}

unsigned char &programmer::getProgrammerLangBackEnd() {
    char t = pbacklang;
    std::cout << "Enter the developer back-end language: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_back_end::java         :
            std::cout << t << " - Java dev \n";
            break;
        case programmer::p_lang_back_end::php          :
            std::cout << t << " - PHP dev \n";
            break;
        case programmer::p_lang_back_end::ruby  :
            std::cout << t << " - Ruby On Rails dev \n";
            break;
        case programmer::p_lang_back_end::c            :
            std::cout << t << " - C dev \n";
            break;
        case programmer::p_lang_back_end::cpp          :
            std::cout << t << " - C++ dev \n";
            break;
        case programmer::p_lang_back_end::csharp       :
            std::cout << t << " - C# dev \n";
            break;
        case programmer::p_lang_back_end::vb           :
            std::cout << t << " - VB dev \n";
            break;
        case programmer::p_lang_back_end::node         :
            std::cout << t << " - Nodejs dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer back-end language\n";
    }
}

unsigned char &programmer::getProgrammerLangFrontEnd() {
    char t = pfrontlang;
    std::cout << "Enter the developer front-end language: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_lang_front_end::javascript     :
            std::cout << t << " - JavaScript dev \n";
            break;
        case programmer::p_lang_front_end::typescript     :
            std::cout << t << " - TypeScript dev \n";
            break;
        case programmer::p_lang_front_end::angular        :
            std::cout << t << " - Angular dev \n";
            break;
        case programmer::p_lang_front_end::react          :
            std::cout << t << " - React dev \n";
            break;
        case programmer::p_lang_front_end::html          :
            std::cout << t << " - HTML5 dev \n";
            break;
        case programmer::p_lang_front_end::sass           :
            std::cout << t << " - SASS dev \n";
            break;
        case programmer::p_lang_front_end::css           :
            std::cout << t << " - CSS dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer front-end language\n";
    }
}

unsigned char &programmer::getProgrammerOperationalSystem() {
    char t = pos;
    std::cout << "Enter the developer operational system preference: ";
    std::cin >> t;
    switch (t) {
        case programmer::p_operational_system::windows     :
            std::cout << t << " - Dev prefers Windows \n";
            break;
        case programmer::p_operational_system::linux       :
            std::cout << t << " - Dev prefers Linux \n";
            break;
        case programmer::p_operational_system::macos         :
            std::cout << t << " - Dev prefers MacOS \n";
            break;
        default:
            std::cout << "you MUST select a programmer OS preference \n";
    }
}


#endif //EMPLOY_PROGRAMMER_EMPLOYEE_H
