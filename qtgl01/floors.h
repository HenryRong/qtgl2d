#ifndef FLOORS_H
#define FLOORS_H

#include "objects.h"
#include "movingobjects.h"

class Floors: public Objects
{
public:
    Floors();
    Floors(const int X,const int Y,const int Z,const unsigned int W,const unsigned int L);

    //no need update
    virtual void update(const long ){}
    virtual void rendering();
    virtual int getWidth(){return width;}
    virtual int getHeight(){return height;}

    bool encounterFloor(MovingObjects& );

    static const unsigned int DEF_FLOOR_LEN=10;

protected:
    unsigned int width;
    unsigned int height;

};

#endif // FLOORS_H
