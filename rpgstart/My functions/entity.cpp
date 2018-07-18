#include "entity.h"
#include <iostream>
using namespace std;
entity::entity(){
    MaxHp=0;
	hp=0;//I could see this being rewritable as tables might have 1hp
}		 //but again, dirt has no hp, you cant defeat dirt
         //but dirt can defeat you
entity::entity(int startHealth){
	MaxHp=startHealth;
	hp=startHealth;
}

entity::~entity(){
	cout<<"you killed me, all your science ever did was get me high, you killed me"<<endl;
}

int entity::getHp(){
	return hp;
}

void entity::setHp(int setter){
	hp=setter;
}

int entity::getMaxHp(){
	return MaxHp;
}

void entity::setMaxHp(int setter){
	MaxHp=setter;
}

void damage(entity &target, int amount){
	target.setHp(target.getHp()-amount);
}

void damage(entity *target, int amount){
	target->setHp(target->getHp()-amount);
}

void heal(entity &target, int amount){
	if(target.getHp() + amount >= target.getMaxHp()){
		
		target.setHp(target.getMaxHp());
	}
	else
	{
		target.setHp(target.getHp()+amount);
	}
}

void heal(entity *target, int amount){
	if(target->getHp() + amount >= target->getMaxHp()){
		
		target->setHp(target->getMaxHp());
	}
	else
	{
		target->setHp(target->getHp()+amount);
	}
}