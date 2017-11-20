#include"Shovel.h"
#include"Idle.h"
#include"Walking.h"

Shovel::Shovel()
{
}

Shovel::~Shovel()
{
}

void Shovel::idle(Animation * a)
{
	std::cout << "Shovel -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shovel::walking(Animation * a)
{
	std::cout << "Shovel -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
