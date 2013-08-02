#ifndef IO_H__
#define IO_H__

#include <string>
#include "position.h"

class io
{
public:
	virtual void draw (position &pos) = 0;
	
	virtual void message (std::string a) = 0;
	
	virtual std::vector<int> choose_point () = 0;
	
	io ();
};

class textio : public io
{
public:
	void draw (position &pos);
	
	void message (std::string a);
	
	std::vector<int> choose_point ();	

	int innum ();
	
	textio ();
};

#endif
