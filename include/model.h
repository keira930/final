#ifndef MODEL_H
#define MODEL_H
#include "view.h"
#include "position.h"
#include <deque>
#include <vector>
#include <iostream>
#include <memory>
#include <utility>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Model{
    protected:
       vector<unique_ptr<Model>> models;
    public:
        Model()=default;
        void addModel(unique_ptr<Model>);
        virtual void updateModel(unique_ptr<Model>);
};


#endif
