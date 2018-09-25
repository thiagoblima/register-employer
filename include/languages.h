/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: languages
 * @description: Main class, data structure for
 * using <languages> object as model to be inherited
 * or polymorphically mutated in order to attend
 * all the circumstances of its usage.
 */

#include <iostream>
#include "employee.h"

#ifndef EMPLOY_LANGUAGES_H
#define EMPLOY_LANGUAGES_H


class languages {
protected:
    enum p_lang_level : unsigned char {
        junior = 'j',
        full = 'f',
        senior = 's',
        architect = 'a',
        engineer = 'e'
    } plevel;
    enum p_lang_role : unsigned char {
        frontend = 'f',
        backend = 'b',
        fullstack = 's'
    } prole;
    enum p_lang_back_end : unsigned char {
        java = 'j',
        php = 'p',
        ruby = 'r',
        c = 'c',
        cpp = '+',
        csharp = '#',
        vb = 'v',
        node = 'n'
    } pbacklang;
    enum p_lang_front_end : unsigned char {
        javascript = 'j',
        typescript = 't',
        angular = 'a',
        react = 'r',
        html = 'h',
        sass = 's',
        css = 'c',
    } pfrontlang;
    enum p_operational_system : unsigned char {
        windows = 'w',
        linux = 'l',
        macos = 'm'
    } pos;
    enum p_overall_language_salary : int {
        jsalary = static_cast<char>(20.000),
        fsalary = static_cast<char>(40.000),
        ssalary = static_cast<char>(80.000),
        asalary = static_cast<char>(120.000),
        esalary = static_cast<char>(120.000)

    } p_o_salary;
    enum l_overall_language_salary : int {
        fesalary = static_cast<char>(20.000),
        besalary = static_cast<char>(20.000),
        fssalary = static_cast<char>(40.000),
    } l_o_salary;
    enum b_overall_language_salary : int {
        vbsalary = static_cast<char>(0.800),
        rusalary = static_cast<char>(1.500),
        phsalary = static_cast<char>(2.000),
        jvsalary = static_cast<char>(4.500),
        cssalary = static_cast<char>(4.500),
        ndsalary = static_cast<char>(6.000),
        clsalary = static_cast<char>(7.800),
        cpsalary = static_cast<char>(7.800)

    } l_o_be;
    enum f_overall_language_salary : int {
        angsalary = static_cast<char>(16.000),
        reasalary = static_cast<char>(16.000),
        jscsalary = static_cast<char>(12.000),
        tscsalary = static_cast<char>(12.000),
        htmsalary = static_cast<char>(5.000),
        sassalary = static_cast<char>(4.000),
        csssalary = static_cast<char>(3.000)
    } l_f_salary;
public:

    languages() = default;

    employee employee_acessor;

    unsigned char &getProgrammerLevel();

    unsigned char &getProgrammerRole();

    unsigned char &getProgrammerLangBackEnd();

    unsigned char &getProgrammerLangFrontEnd();

    unsigned char &getProgrammerOperationalSystem();
} planguages;

unsigned char &languages::getProgrammerLevel() {
    char t = plevel;
    std::cout << "Enter the developer skill: ";
    std::cin >> t;
    switch (t) {
        case languages::p_lang_level::junior            :
            std::cout << t << " - Junior dev \n";
            this->employee_acessor.getSalaryInstance();
            this->employee_acessor.getSalaryInstance();
            std::cout << " - Junior dev salary: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_level::full              :
            std::cout << t << " - Full dev \n";
            this->employee_acessor.setSalary(languages::fsalary);
            std::cout << " - Full dev salary: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_level::senior            :
            std::cout << t << " - Senior dev \n";
            this->employee_acessor.setSalary(languages::ssalary);
            std::cout << " - Senior dev salary: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_level::architect         :
            std::cout << t << " - Architect dev \n";
            this->employee_acessor.setSalary(languages::asalary);
            std::cout << " - Architect dev salary: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_level::engineer          :
            std::cout << t << " - Engineer dev \n";
            this->employee_acessor.setSalary(languages::esalary);
            std::cout << " - Engineer dev salary: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        default:
            std::cout << "you MUST select a programmer level\n";
            this->getProgrammerLevel();
    }
}

unsigned char &languages::getProgrammerRole() {
    char t = prole;
    std::cout << "Enter the developer role: ";
    std::cin >> t;
    switch (t) {
        case languages::p_lang_role::frontend           :
            std::cout << t << " - FrontEnd dev \n";
            this->employee_acessor.getSalaryInstance() += languages::fesalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - Front-end dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_role::backend            :
            std::cout << t << " - BackEnd dev \n";
            this->employee_acessor.getSalaryInstance() += languages::besalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - Back-end dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_role::fullstack          :
            std::cout << t << " - Fullstack dev \n";
            this->employee_acessor.getSalaryInstance() += languages::fssalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - Front-end dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        default:
            std::cout << "you MUST select a programmer role\n";
            this->getProgrammerRole();
    }
}

unsigned char &languages::getProgrammerLangBackEnd() {
    char t = pbacklang;
    std::cout << "Enter the developer back-end language: ";
    std::cin >> t;
    switch (t) {
        case languages::p_lang_back_end::java            :
            std::cout << t << " - Java dev \n";
            this->employee_acessor.getSalaryInstance() += languages::jvsalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - Java dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_back_end::php             :
            std::cout << t << " - PHP dev \n";
            this->employee_acessor.getSalaryInstance() += languages::phsalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - PHP dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_back_end::ruby            :
            std::cout << t << " - Ruby On Rails dev \n";
            this->employee_acessor.getSalaryInstance() += languages::rusalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - Ruby dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_back_end::c               :
            std::cout << t << " - C dev \n";
            this->employee_acessor.getSalaryInstance() += languages::clsalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - C dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_back_end::cpp             :
            this->employee_acessor.getSalaryInstance() += languages::cpsalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - C++ dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_back_end::csharp          :
            std::cout << t << " - C# dev \n";
            this->employee_acessor.getSalaryInstance() += languages::cssalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - C# dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_back_end::vb              :
            std::cout << t << " - VB dev \n";
            this->employee_acessor.getSalaryInstance() += languages::vbsalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - VB dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        case languages::p_lang_back_end::node            :
            std::cout << t << " - Nodejs dev \n";
            this->employee_acessor.getSalaryInstance() += languages::ndsalary;
            this->employee_acessor.setSalary(this->employee_acessor.getSalaryInstance());
            std::cout << t << " - Nodejs dev: " << this->employee_acessor.getSalaryInstance() << std::endl;
            break;
        default:
            std::cout << "you MUST select a programmer back-end language\n";
            this->getProgrammerLangBackEnd();
    }
}

unsigned char &languages::getProgrammerLangFrontEnd() {
    char t = pfrontlang;
    std::cout << "Enter the developer front-end language: ";
    std::cin >> t;
    switch (t) {
        case languages::p_lang_front_end::javascript     :
            std::cout << t << " - JavaScript dev \n";
            break;
        case languages::p_lang_front_end::typescript     :
            std::cout << t << " - TypeScript dev \n";
            break;
        case languages::p_lang_front_end::angular        :
            std::cout << t << " - Angular dev \n";
            break;
        case languages::p_lang_front_end::react          :
            std::cout << t << " - React dev \n";
            break;
        case languages::p_lang_front_end::html           :
            std::cout << t << " - HTML5 dev \n";
            break;
        case languages::p_lang_front_end::sass           :
            std::cout << t << " - SASS dev \n";
            break;
        case languages::p_lang_front_end::css            :
            std::cout << t << " - CSS dev \n";
            break;
        default:
            std::cout << "you MUST select a programmer front-end language\n";
            this->getProgrammerLangFrontEnd();
    }
}

unsigned char &languages::getProgrammerOperationalSystem() {
    char t = pos;
    std::cout << "Enter the developer operational system preference: ";
    std::cin >> t;
    switch (t) {
        case languages::p_operational_system::windows     :
            std::cout << t << " - Dev prefers Windows \n";
            break;
        case languages::p_operational_system::linux       :
            std::cout << t << " - Dev prefers Linux \n";
            break;
        case languages::p_operational_system::macos       :
            std::cout << t << " - Dev prefers MacOS \n";
            break;
        default:
            std::cout << "you MUST select a programmer OS preference \n";
            this->getProgrammerOperationalSystem();
    }
}

#endif //EMPLOY_LANGUAGES_H
