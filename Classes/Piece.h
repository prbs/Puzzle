//
//  Piece.h
//  Puzzle
//
//  Created by Natalia Souza on 4/26/15.
//
//

#ifndef __Puzzle__Piece__
#define __Puzzle__Piece__
#define LOCATION_ACCURACY 50

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class Piece: public Sprite
{
    bool _actived;
    Vec2 _targetPosition;
    EventListenerTouchOneByOne *listener;
    void setActived(bool active);
public:
    
    // Constructor
    static Piece* create(const std::string &filename);
    virtual bool init(const std::string &filename);
    
    void setTargetPosition(Vec2 targetPosition);
    bool currentLocationSuccess();
    
    bool onTouchBegan(Touch*, Event*);
    void onTouchMoved(Touch*, Event*);
    void onTouchEnded(Touch*, Event*);
    
};

#endif /* defined(__PuzzleTutorial__Piece__) */