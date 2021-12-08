#ifndef WINDOW_MODEL_H
#define WINDOW_MODEL_H
using namespace std;
#include <memory>
#include "../common/point.h"
namespace AGE{
    namespace Ncurses{
        class Window;
    }

    class Point;
    class Controller;
    class nView;
    class nControl;

    class WindowModel{
        protected:
            Point _Point;
            int _width, _height;
        
        public:
            WindowModel(Point Point, int width, int height);
            virtual ~WindowModel();
            virtual void displayView() const {};

    };

    class WindowWithController: virtual public WindowModel{
        protected:
            int _fps;
            unique_ptr<Controller> _controller;
        public:
            WindowWithController(Point pos, int width, int height);
            int getInput() const;
            void setController(std::unique_ptr<Controller>&& controller);
    };

    class WindowWithView: virtual public WindowModel{
        public:
             WindowWithView(Point pos, int width, int height);
            ~WindowWithView() override;
            //void drawView();
            void displayView() const override;
        private:
            friend class nView;
            unique_ptr<Ncurses::Window> m_window;
            unique_ptr<nView> real_view;
            //vector obeject


    };
}
#endif