#ifndef AREA_H
#define AREA_H

class area{
private:
    int sizex;
	int sizey;
	bool safe;
	string t_info[];
	
public:	
	area();
	area(int);
	area(int,int);
	~area();
	
	void parse_map_types(int[]);
	string[] read_map_types();
	void create_squares();
	

};

#endif
