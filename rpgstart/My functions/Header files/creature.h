#include "entity.h"
#include <string>
using namespace std;
class creature:public entity{
private:
string name;
int level;
int xp;
int mana, maxMana;
int strength, maxStrength;
int defense, maxDefense;
int xpReward;

public:
void setXPReward(int);
void setMaxMana(int);
void setMaxStrength(int);
void setMaxDefense(int);
void setXP(int);
void setName(string);
void setLevel(int);
void setMana(int);
void setStrength(int);
void setDefense(int);

int getXPReward();
int getMaxMana();
int getMaxDefense();
int getMaxStrength();
int getMana();
int getStrength();
int getDefense();
string getName();
int getXP();
int getLevel();

void attack(creature);
void guard();
};