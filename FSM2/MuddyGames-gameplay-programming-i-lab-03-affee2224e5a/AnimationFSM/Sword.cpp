#include"Sword.h"
#include"Idle.h"
#include"Walking.h"

Sword::Sword()
{
}

Sword::~Sword()
{
}

void Sword::idle(Animation * a)
{
	std::cout << "Sword -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Sword::walking(Animation * a)
{
	std::cout << "Sword -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
