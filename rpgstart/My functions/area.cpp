#include "area.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
area::area(){
	sizex=20;
	sizey=20;
	safe=false;	  
}		 

area::area(int size){
	sizex=size;
	sizey=size;
	safe=false;	
}

area::area(int x, int y){
	sizex=x;
	sizey=y;
	safe=false;	
}

area::~area(){
	cout<<"you "<<endl;
}

area::read_map_types(){
	string line;
	vector<string> map_types;
	ifstream mapfile("mapfile.txt");
	if(mapfile.is_open())
	{
		while(getline(mapfile,line)
		{
			map_types.push_back(line);
		}
	}
	//convert map_types to array
	return ret_array[];
}

