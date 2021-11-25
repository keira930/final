#ifndef ASCIIVIEW_H
#define ASCIIVIEW_H
#include "view.h"
#include "board.h"
#include <map>
#include <iostream>
#include <cstdio>

using namespace std;

class AsciiView: public View{
    map<State, string> displayMap;
    ostream& out;
    Board& board;
};
#endif