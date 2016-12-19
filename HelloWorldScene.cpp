#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "Chessman.h"
#include "Checkerboard.h"

USING_NS_CC;

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
	
	auto checkerboard = Checkerboard::Create();
	this->addChild(checkerboard);
	
	auto newGameItem = MenuItemImage::create("chinachess/new.jpg", "chinachess/new.jpg",
											CC_CALLBACK_1(HelloWorld::menuNewGameCallback, this));
	newGameItem->setPosition(visibleSize.width - 60, 120);

	auto startGameItem = MenuItemImage::create("chinachess/start.jpg", "chinachess/start.jpg",
		CC_CALLBACK_1(HelloWorld::menuStartGameCallback, this));
	startGameItem->setPosition(visibleSize.width - 60, 220);

	auto pauseItem = MenuItemImage::create("chinachess/pause.jpg", "chinachess/pause.jpg",
		CC_CALLBACK_1(HelloWorld::menuPauseGameCallback, this));
	pauseItem->setPosition(visibleSize.width - 60, 320);

	auto regretItem = MenuItemImage::create("chinachess/regret.jpg", "chinachess/regret.jpg",
		CC_CALLBACK_1(HelloWorld::menuRegretCallback, this));
	regretItem->setPosition(visibleSize.width - 60, 420);

	auto closeItem = MenuItemImage::create(
		"CloseNormal.png",
		"CloseSelected.png",
		CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));

	closeItem->setPosition(visibleSize.width - 60, 20);

	Menu* menu = Menu::create(newGameItem, startGameItem, pauseItem, regretItem,closeItem,NULL);
	menu->setPosition(Vec2::ZERO);
	this->addChild(menu);

    return true;
}

void HelloWorld::menuNewGameCallback(Ref* pSender)
{
	log("new game");
}

void HelloWorld::menuStartGameCallback(Ref* pSender)
{
	log("start game");
}

void HelloWorld::menuPauseGameCallback(Ref* pSender)
{
	log("pause");
}

void HelloWorld::menuRegretCallback(Ref* pSender)
{
	log("regret");
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    
    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/
    
    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);
    
    
}
