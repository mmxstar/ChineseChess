#ifndef CHESSMAN_H
#define CHESSMAN_H

#include "cocos2d.h"

class Chessman:public cocos2d::Sprite
{
public:
	enum class Type 
	{
		King,
		Rooks,// 车
		Knights,//马
		Elephants,//象
		Mandarins,//士
		Cannons,//炮
		Pawns//兵
	};

	enum class Faction
	{
		Red,
		Black
	};
	
	Chessman(Faction faction) :mFaction{ faction } {}

	virtual void Move();

protected:
	Faction mFaction;
	
};

class King:public Chessman
{
public:
	static Sprite* Create(const std::string& fileName,Faction faction);

	virtual void Move();
private:
	King(Faction faction);
	
};

#endif
