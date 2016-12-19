#include "Chessman.h"
using namespace cocos2d;

//Chessman::Chessman(Type type) :mtype(type) {}

void Chessman::Move() {}

Sprite* King::Create(const std::string& fileName,Faction faction)
{
	King* king = new(std::nothrow) King(faction);
	if (king&&king->initWithFile(fileName)) {
		king->autorelease();
		return king;
	}
	CC_SAFE_DELETE(king);
	return nullptr;
}

King::King(Faction faction) :Chessman{ faction }
{
	
}

void King::Move() 
{

}
