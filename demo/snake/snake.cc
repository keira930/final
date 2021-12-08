
#include <iostream>
#include "../include/age.h"
#include "../../include/common/point.h"
#include "../../model/board.h"
using namespace std;
using namespace AGE;
int main(int argc, char **argv){
   AGE::Point point{4,4};
   AGE::GameWindow* window = new GameWindow{60,point,25,80};
   window->displayView();

  
}