#ifndef CHECKERBOARD_H
#define CHECKERBOARD_H

#include"cocos2d.h"

class Checkerboard:public cocos2d::Layer
{
public:
	static Layer* Create();
	bool init();
private:
	Checkerboard();
};

#endif
