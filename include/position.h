#ifndef POSITION_H
#define POSITION_H


class Position{
    float x, y, z;
    public: 
        Position(float _x, float _y, float _z);
        void updatePosition(float _x, float _y, float _z);
        float getX() const;
        float getY() const;
        float getZ() const;
        ~Position()=default;
};

#endif