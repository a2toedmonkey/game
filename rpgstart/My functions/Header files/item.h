#include <string>
#include "entity.h"

class Item: public entity{
//type: 1-weapon 2-armor 3-scroll 4-trinket 5-quest 6-potion 7-trophy 8-misc	
int type; 
//use: 1-equipable 2-consumable 3-special(not useable)
int use;	
string name;	
}