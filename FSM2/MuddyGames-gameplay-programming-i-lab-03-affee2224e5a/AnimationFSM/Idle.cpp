#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Sword.h>
#include<Hammer.h>
#include<Shovel.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(Animation* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::walking(Animation* a)
{
	std::cout << "Idle -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::sword(Animation * a)
{
	std::cout << "Idle -> Sword" << std::endl;
	a->setCurrent(new Sword());
	delete this;
}

void Idle::hammer(Animation * a)
{
	std::cout << "Idle -> Hammer" << std::endl;
	a->setCurrent(new Hammer());
	delete this;
}

void Idle::shovel(Animation * a)
{
	std::cout << "Idle -> Shovel" << std::endl;
	a->setCurrent(new Shovel());
	delete this;
}

