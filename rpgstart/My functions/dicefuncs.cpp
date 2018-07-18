#include "dicefuncs.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
//My folder t
int rollDice(int numSides){
	int holder=0;
	srand(time(NULL));
	holder= rand()% numSides +1;
	return holder;
	
}

int rBetween(int startNum, int endNum){
	int holder=0;
	srand(time(NULL));
	holder=rand()% (endNum-startNum)+startNum;
	return holder;
}

int coinFlip(){
	int holder=0;
	srand(time(NULL));
	holder=rand()% 2;//dont add 1 cause i need a 0 to be possible
	return holder;
}



