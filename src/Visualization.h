#pragma once

class Visualization 
{
public:
	virtual void draw() = 0;
	virtual void update() = 0;
	virtual bool perspective() = 0;
};
