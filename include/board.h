#ifndef BOARD_H
#define BOARD_H
#include "model.h"
using namespace std;

enum State{player,NPC,WhiteSpace};


class Board: public Model{//actual game playground, update everytime
    struct Cell{
        const int row, column;
        State state;
        Cell (int,int,State s= State::WhiteSpace);
    };

    Cell board[25][80];
    public:
        void go();

};
#endif
