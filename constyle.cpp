#include "constyle.hpp"
#include <iostream>

void Console::rouge()     { std::cout << "\033[31m"; }
void Console::vert()      { std::cout << "\033[32m"; }
void Console::jaune()     { std::cout << "\033[33m"; }
void Console::bleu()      { std::cout << "\033[34m"; }
void Console::reset()     { std::cout << "\033[0m"; }

void Console::clignote()  { std::cout << "\033[5m"; }
void Console::gras()      { std::cout << "\033[1m"; }
void Console::souligner() { std::cout << "\033[4m"; }

void Console::clear()     { std::cout << "\033[2J\033[H"; }

void Console::nl(int n) {
    for (int i = 0; i < n; ++i) std::cout << std::endl;
}

void Console::afficherMessage(const std::string& msg) {
    clear();
    rouge();
    clignote();
    std::cout << msg;
    reset();
    nl(2);
}
