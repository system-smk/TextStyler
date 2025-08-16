#ifndef CONSTYLE_HPP
#define CONSTYLE_HPP

#include <string>

class Console {
public:
    static void rouge();
    static void vert();
    static void jaune();
    static void bleu();
    static void reset();

    static void clignote();
    static void gras();
    static void souligner();

    static void clear();
    static void nl(int n = 1);

    static void afficherMessage(const std::string& msg);
};

#endif
