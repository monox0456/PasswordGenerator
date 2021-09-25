//
// Created by HN on 24.09.2021.
//

#ifndef PASSWORD_DEGEN_PW_GENERATION_H
#define PASSWORD_DEGEN_PW_GENERATION_H
#include <string>
#include <iostream>
#include <cstring>
#include <random>
#include <stdlib.h>
#include <time.h>
#include <limits>

using namespace std;

class pw_generation {
private:
    void input();
    int _length;
    bool _special;
public:
    void createPassword();
    pw_generation();
};


#endif //PASSWORD_DEGEN_PW_GENERATION_H
