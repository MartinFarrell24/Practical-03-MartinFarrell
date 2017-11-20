#pragma once
#include"State.h"

class Hammer : public State
{
public:
	Hammer();
	~Hammer();
	void idle(Animation* a);
	void walk(Animation* a);


private:

};
