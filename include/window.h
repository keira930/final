#ifndef WINDOW_H
#define WINDOW_H
#include <vector>
#include <memory>
#include <utility>
#include "view.h"
#include "ncurseCon.h"
using namespace std;
class Window
{
protected:
    unique_ptr<View> view;
    unique_ptr<nControl> controller;

public:
    Window(unique_ptr<View> &&v) : view{std::forward<unique_ptr<View>>(v)} {}
    //virtual void updateView();
    void displayView();
};
#endif