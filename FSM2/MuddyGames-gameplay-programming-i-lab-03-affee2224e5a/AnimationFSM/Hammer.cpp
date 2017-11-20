#include"Hammer.h"
#include"Idle.h"
#include"Walking.h"

Hammer::Hammer()
{
}

Hammer::~Hammer()
{
}

void Hammer::idle(Animation * a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammer::walk(Animation * a)
{
	std::cout << "Hammering -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
