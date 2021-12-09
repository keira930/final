
#include "windowModel.h"
#include "../controller/controller.h"
#include "../view/ncurseView.h"

namespace AGE{
    WindowModel::WindowModel(Point point, int width, int height):_Point{point},
    _width{width},_height{height}{}

   WindowModel:: ~WindowModel(){}
    WindowWithController::WindowWithController(Point point, int width, int height):
    WindowModel{point,width,height}{_controller=nullptr;}

    int WindowWithController::getInput() const{
        return _controller->getInput();
    }

    void WindowWithController::setController(std::unique_ptr<Controller>&& controller){
        _controller= std::move(controller);
    }
    WindowWithController::~WindowWithController(){}

    WindowWithView::WindowWithView(Point point, int width, int height):
    WindowModel{point,width,height},
    m_window{std::make_unique<Ncurses::Window>(width,height,point.getX(),point.getY())},
    real_view{std::make_unique<nView>(*this)}{}

    void WindowWithView::displayView() const {
        real_view->displayView(*m_window);
    }

    WindowWithView::~WindowWithView(){}



    
}