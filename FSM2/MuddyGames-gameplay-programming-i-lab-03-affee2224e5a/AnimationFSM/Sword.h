#pragma once
#include"State.h"

class Sword : public State
{
public:
	Sword();
	~Sword();
	void idle(Animation* a);
	void walking(Animation* a);
private:

};
