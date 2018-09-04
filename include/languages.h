/**
 * @author: <thiagolimasp@live.com> - Thiago Lima
 * @class: languages
 * @description: Main class, data structure for
 * using <languages> object as model to be inherited
 * or polymorphically mutated in order to attend
 * all the circumstances of its usage.
 */

#include <iostream>

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
public:

    languages() = default;

    unsigned char &getProgrammerLevel();

    unsigned char &getProgrammerRole();

    unsigned char &getProgrammerLangBackEnd();

    unsigned char &getProgrammerLangFrontEnd();

    unsigned char &getProgrammerOperationalSystem();
};

unsigned char &languages::getProgrammerLevel() {
    char t = plevel;
    std::cout << "Enter the developer skill: ";
    std::cin >> t;
    switch (t) {
        case languages::p_lang_level::junior            :
            std::cout << t << " - Junior dev \n";
            break;
        case languages::p_lang_level::full              :
            std::cout << t << " - Full dev \n";
            break;
        case languages::p_lang_level::senior            :
            std::cout << t << " - Senior dev \n";
            break;
        case languages::p_lang_level::architect         :
            std::cout << t << " - Architect dev \n";
            break;
        case languages::p_lang_level::engineer          :
            std::cout << t << " - Engineer dev \n";
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
            break;
        case languages::p_lang_role::backend            :
            std::cout << t << " - BackEnd dev \n";
            break;
        case languages::p_lang_role::fullstack          :
            std::cout << t << " - Fullstack dev \n";
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
            break;
        case languages::p_lang_back_end::php             :
            std::cout << t << " - PHP dev \n";
            break;
        case languages::p_lang_back_end::ruby            :
            std::cout << t << " - Ruby On Rails dev \n";
            break;
        case languages::p_lang_back_end::c               :
            std::cout << t << " - C dev \n";
            break;
        case languages::p_lang_back_end::cpp             :
            std::cout << t << " - C++ dev \n";
            break;
        case languages::p_lang_back_end::csharp          :
            std::cout << t << " - C# dev \n";
            break;
        case languages::p_lang_back_end::vb              :
            std::cout << t << " - VB dev \n";
            break;
        case languages::p_lang_back_end::node            :
            std::cout << t << " - Nodejs dev \n";
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
