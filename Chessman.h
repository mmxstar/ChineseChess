#ifndef CHESSMAN_H
#define CHESSMAN_H

#include "cocos2d.h"

class Chessman:public cocos2d::Sprite
{
public:
	enum class Type 
	{
		King,
		Rooks,// ��
		Knights,//��
		Elephants,//��
		Mandarins,//ʿ
		Cannons,//��
		Pawns//��
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
