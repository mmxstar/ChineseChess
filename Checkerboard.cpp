#include "Checkerboard.h"
using namespace cocos2d;

cocos2d::Layer* Checkerboard::Create() 
{
	Checkerboard* checkerboard = new (std::nothrow) Checkerboard();
	if (checkerboard&&checkerboard->init()) {
		checkerboard->autorelease();
		return checkerboard;
	}
	CC_SAFE_DELETE(checkerboard);
	return nullptr;
}

bool Checkerboard::init()
{
	if (!Layer::init()) {
		return false;
	}
	
	Vec2 originPosition = Director::getInstance()->getVisibleOrigin();
	Size visibleSize = Director::getInstance()->getVisibleSize();

	Sprite* background = Sprite::create("chinachess/background.png");
	background->setPosition(originPosition.x + visibleSize.width / 2 - 60, originPosition.y + visibleSize.height / 2);
	this->addChild(background);

	return true;
}

Checkerboard::Checkerboard()
{
	
}