#include <ncurses.h>
#include "../include/ncurseCon.h"
#include "../include/board.h"
using namespace std;
int main() {
    //nControl n1;
    initscr();
    Board b;
    b.displayView();
    endwin();
    return 0;
}