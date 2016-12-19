#ifndef CHECKERBOARD_H
#define CHECKERBOARD_H

#include"cocos2d.h"
#include <vector>
#include "chessman.h"

class Checkerboard:public cocos2d::Layer
{
public:
	static Layer* Create();
	bool init();


private:
	Checkerboard();
	void initBlackFaction();
	void initRedFaction();
	
	std::vector<Chessman*> mvRedChessman;
	std::vector<Chessman*> mvBlackChessman;

	const int CHESSMAN_NUM = 32;
	const cocos2d::Size ORIGIN = cocos2d::Size(100, 100);
	const float OFFSETX = 100;
	const float OFFSETY = 100;
};

#endif
