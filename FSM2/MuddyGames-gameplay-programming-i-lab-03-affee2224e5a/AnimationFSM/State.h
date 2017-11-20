#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void walking(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void sword(Animation* a)
	{
		DEBUG_MSG("State::Sword");
	}
	virtual void shovel(Animation* a)
	{
		DEBUG_MSG("State::Shovel");
	}
	virtual void hammer(Animation* a)
	{
		DEBUG_MSG("State::Hammer");
	}

};

#endif // ! ANIMATION_H

