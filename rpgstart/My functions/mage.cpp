#include "mage.h"
#include <iostream>
using namespace std;
entity::mage(){
    MaxMana=0;
	mana=0;//I could see this being rewritable as tables might have 1hp
}		 //but again, dirt has no hp, you cant defeat dirt
         //but dirt can defeat you
entity::mage(int startHealth){
	MaxMana=startHealth;
	mana=startHealth;
}

entity::~mage(){
	cout<<"you killed me, all your science ever did was get me high, you killed me"<<endl;
}

int mage::getMana(){
	return hp;
}

void mage::setMana(int setter){
	mana=setter;
}

int mage::getMaxMana(){
	return MaxMana;
}

void Mage::setMaxMana(int setter){
	MaxMana=setter;
}

void drain(entity &target, int amount){
	target.setHp(target.getMana()-amount);
}

void drain(entity *target, int amount){
	target->setMana(target->getMana()-amount);
}

void restore(entity &target, int amount){
	if(target.getMana() + amount >= target.getMaxMana()){
		
		target.setMana(target.getMaxMana());
	}
	else
	{
		target.setMana(target.getMana()+amount);
	}
}

void restore(entity *target, int amount){
	if(target->getMana() + amount >= target->getMaxMana()){
		
		target->setMana(target->getMaxMana());
	}
	else
	{
		target->setMana(target->getMana()+amount);
	}
}