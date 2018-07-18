#ifndef ENTITY_H
#define ENTITY_H
//simple entity class that can be expanded later if needed(inheritance what what)
class entity{
private:
    int MaxHp;
	int hp;//hit points, life, whatever
public:	
	entity();
	entity(int);
	~entity();
	void setMaxHp(int);
	int getMaxHp();
	void setHp(int);
	int getHp();
	//kill();//thinking this will set hp to 0 ima comment it out though for future
	//resurrect();//I think this will work if you want to bring something back with its normal hp
				  //after its been killed
};

//There are two damage functions for one reason, one would be in case of a static
//version of the entity class say declared such as entity charley();
//The second version deals with a dynamically built pointer, such as
//entity *supastar= new entity();

void damage(entity &, int);//the amount of damage the entity will incur
				    //I could see this function being rewritten to compensate for
				    //armor. But I think this base function is good for
				    //things you would consider unarmored...like dirt. DR 0/foot
				    //byatch<-dnd joke lulz
				    
void damage(entity *, int);

void heal(entity&, int); //opposite of damage, would heal the entity. pointer below.
void heal(entity*, int);

#endif
