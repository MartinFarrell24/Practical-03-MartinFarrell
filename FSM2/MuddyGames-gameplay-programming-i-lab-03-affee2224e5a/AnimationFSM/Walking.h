#ifndef WALKING_H
#define WALKING_H

#include <State.h>

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void sword(Animation* a);
	void hammer(Animation* a);
	void shovel(Animation* a);
};

#endif // !IDLE_H