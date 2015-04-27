#ifndef __PUZZLE_H__
#define __PUZZLE_H__

#include "cocos2d.h"
#include "Piece.h"

class Puzzle : public cocos2d::LayerColor{
private:
    Vector<Piece *> puzzlePieces;
    
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(Puzzle);
};

#endif // __HELLOWORLD_SCENE_H__
