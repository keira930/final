#ifndef VIEW_H
#define VIEW_H

namespace AGE{
    namespace Ncurses{
        class Window;
    }
    class View{

        
        public:
            View()=default;
            virtual ~View()=default;
            virtual void displayView(Ncurses::Window &w)=0;
           
    };
}
#endif