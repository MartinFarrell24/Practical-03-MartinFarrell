#include <Walking.h>
#include <Jumping.h>
#include"Sword.h"
#include"Hammer.h"
#include"Shovel.h"
#include <Idle.h>

#include <string>

void Walking::idle(Animation* a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walking::jumping(Animation* a)
{
	std::cout << "Walking -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::sword(Animation * a)
{
	std::cout << "Walking -> Sword" << std::endl;
	a->setCurrent(new Sword());
	delete this;
}

void Walking::hammer(Animation * a)
{
	std::cout << "Walking -> Hammer" << std::endl;
	a->setCurrent(new Hammer());
	delete this;
}

void Walking::shovel(Animation * a)
{
	std::cout << "Walking -> Shovel" << std::endl;
	a->setCurrent(new Shovel());
	delete this;
}
