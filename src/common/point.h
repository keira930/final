#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <initializer_list>
namespace AGE{
    class Point{
        float x, y;
        public: 
            Point(float _x, float _y):x{_x},y{_y}{}
            Point(std::initializer_list<float> s){
                x= *s.begin();
                y = *(s.begin()+1);
            }
            
            void updatePoint(float _x, float _y){
                x=x+_x;
                y=y+_y;
            }

            float getX() const{return x;}
            float getY() const{return y;}
            
            ~Point()=default;
    };
}
#endif