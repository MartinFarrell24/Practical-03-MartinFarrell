#pragma once
#include"State.h"

class Shovel : public State
{
public:
	Shovel();
	~Shovel();
	void idle(Animation* a);
	void walking(Animation* a);

private:

};