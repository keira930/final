#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <memory>
#include <iostream>
#include <cstdlib>
//#include "model.h"
#include "action.h"
//#include "timer.h"
using namespace std;
class Controller{//Timer and user should do all the work. 
    /*unique_ptr<Model> m_model;
    unique_ptr<Timer> timer;

    Controller(unique_ptr<Model> m,unique_ptr<Timer> t):m_model(std::move(m)),timer(std::move(t)){}
    private:
        void updateModel(unique_ptr<Model> model);*/
    virtual Action action() =0;
    public:
        Controller()=default;
        Action getAction();
        virtual ~Controller() = default;
};
#endif