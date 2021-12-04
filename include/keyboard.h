#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <iostream>
#include <istream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include "controller.h"
using namespace std;

class Keyboard : public Controller{
    std::istream &in;
    Action action() override;
    
    public:
        Keyboard(std::istream & in = std::cin);

        
};

#endif // KEYBOARD_H