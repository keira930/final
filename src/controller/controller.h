#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <memory>
#include <iostream>
#include <cstdlib>
using namespace std;
namespace AGE{
class Controller{//Timer and user should do all the work. 
   
   // unique_ptr<Timer> timer;
        
    public:
        Controller(int FPS): _fps {FPS} {}
        ~Controller() = default;
        void setFPS(int FPS) { _fps = FPS; }
        int getInput() const { return _input(); }
    private:
        virtual int _input() const = 0;
    protected:
        int _fps;
    
   
};
}
#endif