#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Scene
{
public:
   // static cocos2d::Scene* createScene();

	virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

private:
	void menuNewGameCallback(cocos2d::Ref* pSender);
	void menuStartGameCallback(cocos2d::Ref* pSender);
	void menuPauseGameCallback(cocos2d::Ref* pSender);
	void menuRegretCallback(cocos2d::Ref* pSender);
	void menuCloseCallback(cocos2d::Ref* pSender);
};

#endif // __HELLOWORLD_SCENE_H__
