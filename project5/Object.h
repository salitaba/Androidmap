#ifndef OBJECT_H
#define OBJECT_H

#include<vector>

#include"Mario.h"
#include"Background.h"
#include"Block.h"
#include"Kopa.h"
#include"Pipe.h"
#include"Flag.h"
#include"Map.h"
#include"Block.h"
#include"Accident.h"

class Object{
public:
    Object();
    void updateScreen(Window &window);
    void updatePosition(int refreshRate, Window &window);
    bool isMarioOnFlag();
    void setMario(Point cell);
    void addBlock(Point cell, int type);
    void goMarioRight();
    void goMarioLeft();
    void stopMario();
    bool isMarioGoLeft();
    bool isMarioGoRight();
    bool jumpMario();
    void dontJumpMario();
    void fixCrashing();
    void addPipe(Point position, int type);
    void addFlag(Point Position, int type);
private:
    Background background;
    Mario mario;
    std::vector<Block> blocks;
    std::vector<Kopa> kopas;
    std::vector<Pipe> pipes;
    std::vector<Flag> flag;
    Point cameraPosition;
};


#endif