#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	void jumping(Animation* a);
	void walking(Animation* a);
	void sword(Animation* a);
	void hammer(Animation* a);
	void shovel(Animation* a);
};

#endif // !IDLE_H